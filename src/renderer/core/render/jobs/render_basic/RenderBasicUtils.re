open StateDataType;

open VboBufferType;

let render = (gl, uid, state: StateDataType.state) => {
  let transformIndex: int = GameObjectAdmin.unsafeGetTransformComponent(uid, state);
  let materialIndex: int = GameObjectAdmin.unsafeGetMaterialComponent(uid, state);
  let shaderIndex = MaterialAdmin.unsafeGetShaderIndex(materialIndex, state);
  let geometryIndex: int = GameObjectAdmin.unsafeGetGeometryComponent(uid, state);
  let mappedGeometryIndex =
    GeometryAdmin.getMappedIndex(
      geometryIndex,
      GeometryAdmin.getMappedIndexMap(state)
    );
  let {vertexBufferMap, elementArrayBufferMap} = VboBufferStateUtils.getVboBufferData(state);
  let program = ProgramSystem.unsafeGetProgram(shaderIndex, state);
  (
    state
    |> ProgramSystem.use(gl, program)
    |> GLSLSenderConfigDataHandleUtils.getAttributeSendData(shaderIndex)
    |> ArraySystem.reduceState(
         [@bs]
         (
           (state, {pos, size, buffer, sendFunc}) => {
             let arrayBuffer =
               switch buffer {
               | "vertex" =>
                 ArrayBufferSystem.getOrCreateBuffer(
                   gl,
                   geometryIndex,
                   mappedGeometryIndex,
                   vertexBufferMap,
                   [@bs] GeometryAdmin.getVertices,
                   state
                 )
               | "index" =>
                 ElementArrayBufferSystem.getOrCreateBuffer(
                   gl,
                   geometryIndex,
                   mappedGeometryIndex,
                   elementArrayBufferMap,
                   [@bs] GeometryAdmin.getIndices,
                   state
                 )
               | _ => ExceptionHandleSystem.throwMessage({j|unknow buffer:$buffer|j})
               };
             [@bs] sendFunc(gl, size, pos, arrayBuffer, state)
           }
         ),
         state
       )
    |> GLSLSenderConfigDataHandleUtils.getUniformSendData(shaderIndex)
    |> ArraySystem.reduceState(
         [@bs]
         (
           (state, {pos, getArrayDataFunc, sendArrayDataFunc}: uniformSendData) => {
             [@bs] sendArrayDataFunc(gl, pos, [@bs] getArrayDataFunc(transformIndex, state));
             state
           }
         ),
         state
       ),
    shaderIndex,
    mappedGeometryIndex
  )
};