let createSourceInstanceGameObject = (sandbox, state) => {
  let (state, gameObject, geometry, material, meshRenderer) =
    RenderBasicJobTool.prepareGameObject(sandbox, state);
  let (state, sourceInstance) = SourceInstanceAPI.createSourceInstance(state);
  let (state, objectInstanceGameObject) =
    SourceInstanceAPI.createObjectInstanceGameObject(sourceInstance, state);
  let state =
    state |> GameObjectAPI.addGameObjectSourceInstanceComponent(gameObject, sourceInstance);
  (state, gameObject, (geometry, material, meshRenderer, sourceInstance, objectInstanceGameObject))
};

let prepare = (sandbox, state) => {
  let state = state |> InstanceTool.setGPUDetectDataAllowHardwareInstance(sandbox);
  let (state, gameObject, componentTuple) = createSourceInstanceGameObject(sandbox, state);
  let (state, _, _, _) = CameraTool.createCameraGameObject(state);
  (state, gameObject, componentTuple)
};

let createSourceInstanceGameObjectWithGeometry = (sandbox, state) => {
  let (state, gameObject, geometry, material, meshRenderer) =
    RenderBasicJobTool.prepareGameObjectWithGeometry(sandbox, state);
  let (state, sourceInstance) = SourceInstanceAPI.createSourceInstance(state);
  let (state, objectInstanceGameObject) =
    SourceInstanceAPI.createObjectInstanceGameObject(sourceInstance, state);
  let state =
    state |> GameObjectAPI.addGameObjectSourceInstanceComponent(gameObject, sourceInstance);
  (state, gameObject, (geometry, material, meshRenderer, sourceInstance, objectInstanceGameObject))
};

let prepareWithGeometry = (sandbox, state) => {
  let state = state |> InstanceTool.setGPUDetectDataAllowHardwareInstance(sandbox);
  let (state, gameObject, componentTuple) =
    createSourceInstanceGameObjectWithGeometry(sandbox, state);
  let (state, _, _, _) = CameraTool.createCameraGameObject(state);
  (state, gameObject, componentTuple)
};

let prepareForTestVertexAttribPointer = (sandbox, prepareFunc, state) => {
  open Sinon;
  let (state, pos1, pos2, pos3, pos4, getAttribLocation) = prepareFunc(sandbox, state);
  let float = 1;
  let vertexAttribPointer = createEmptyStubWithJsObjSandbox(sandbox);
  let state =
    state
    |> FakeGlTool.setFakeGl(
         FakeGlTool.buildFakeGl(~sandbox, ~float, ~vertexAttribPointer, ~getAttribLocation, ())
       );
  let state = state |> RenderJobsTool.init;
  let state = state |> DirectorTool.runWithDefaultTime;
  (state, float, (pos1, pos2, pos3, pos4), vertexAttribPointer)
};