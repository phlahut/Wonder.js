open Sinon;

let buildFakeGl =
    (
      ~sandbox,
      ~compile_status=(-1),
      ~link_status=(-1),
      ~vertex_shader=(-1),
      ~fragment_shader=(-1),
      ~array_buffer=(-1),
      ~element_array_buffer=(-1),
      ~float=(-1),
      ~static_draw=(-1),
      ~dynamic_draw=(-1),
      ~triangles=(-1),
      ~unsigned_short=(-1),
      ~unsigned_int=(-1),
      ~color_buffer_bit=(-1),
      ~depth_buffer_bit=(-1),
      ~stencil_buffer_bit=(-1),
      ~back=(-1),
      ~front=(-2),
      ~frontAndBack=(-2),
      ~getCullFace=(-3),
      ~shaderSource=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~enable=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~disable=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~cullFace=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~createProgram=createEmptyStub(refJsObjToSandbox(sandbox^)) |> returns(Obj.magic(100)),
      ~createShader=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~compileShader=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~getVertexAttribArrayEnabled=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~linkProgram=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~getShaderParameter=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~getProgramParameter=createEmptyStub(refJsObjToSandbox(sandbox^)) |> returns(Js.true_),
      ~getShaderInfoLog=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~getProgramInfoLog=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~getShaderPrecisionFormat=createEmptyStub(refJsObjToSandbox(sandbox^))
                                |> returns({"precision": 1}),
      ~getExtension=createEmptyStub(refJsObjToSandbox(sandbox^)) |> returns(Obj.magic(0)),
      ~attachShader=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~bindAttribLocation=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~deleteShader=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~deleteBuffer=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~getAttribLocation=createEmptyStub(refJsObjToSandbox(sandbox^)) |> returns(0),
      ~getUniformLocation=createEmptyStub(refJsObjToSandbox(sandbox^)) |> returns(0),
      ~bindBuffer=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~resetBuffer=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~createBuffer=createEmptyStub(refJsObjToSandbox(sandbox^)) |> returns(Obj.magic(0)),
      ~bufferData=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~bufferSubData=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~vertexAttribPointer=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~enableVertexAttribArray=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~uniformMatrix3fv=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~uniformMatrix4fv=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~uniform1f=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~uniform3f=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~drawElements=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~drawArray=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~viewport=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~clearColor=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~clear=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~colorMask=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~useProgram=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~disableVertexAttribArray=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ~commit=createEmptyStub(refJsObjToSandbox(sandbox^)),
      ()
    ) => {
  "COMPILE_STATUS": compile_status,
  "LINK_STATUS": link_status,
  "VERTEX_SHADER": vertex_shader,
  "FRAGMENT_SHADER": fragment_shader,
  "ARRAY_BUFFER": array_buffer,
  "ELEMENT_ARRAY_BUFFER": element_array_buffer,
  "FLOAT": float,
  "STATIC_DRAW": static_draw,
  "DYNAMIC_DRAW": dynamic_draw,
  "TRIANGLES": triangles,
  "UNSIGNED_INT": unsigned_int,
  "UNSIGNED_SHORT": unsigned_short,
  "COLOR_BUFFER_BIT": color_buffer_bit,
  "DEPTH_BUFFER_BIT": depth_buffer_bit,
  "STENCIL_BUFFER_BIT": stencil_buffer_bit,
  "VERTEX_ATTRIB_ARRAY_ENABLED": getVertexAttribArrayEnabled,
  "BACK": back,
  "FRONT": front,
  "FRONT_AND_BACK": frontAndBack,
  "CULL_FACE": getCullFace,
  "cullFace": cullFace,
  "enable": enable,
  "disable": disable,
  "linkProgram": linkProgram,
  "getShaderParameter": getShaderParameter,
  "getProgramParameter": getProgramParameter,
  "getShaderInfoLog": getShaderInfoLog,
  "getProgramInfoLog": getProgramInfoLog,
  "getShaderPrecisionFormat": getShaderPrecisionFormat,
  "getExtension": getExtension,
  "attachShader": attachShader,
  "bindAttribLocation": bindAttribLocation,
  "deleteShader": deleteShader,
  "deleteBuffer": deleteBuffer,
  "getAttribLocation": getAttribLocation,
  "getUniformLocation": getUniformLocation,
  "bindBuffer": bindBuffer,
  "resetBuffer": resetBuffer,
  "createBuffer": createBuffer,
  "bufferData": bufferData,
  "bufferSubData": bufferSubData,
  "vertexAttribPointer": vertexAttribPointer,
  "enableVertexAttribArray": enableVertexAttribArray,
  "uniformMatrix3fv": uniformMatrix3fv,
  "uniformMatrix4fv": uniformMatrix4fv,
  "uniform1f": uniform1f,
  "uniform3f": uniform3f,
  "drawElements": drawElements,
  "drawArray": drawArray,
  "viewport": viewport,
  "clearColor": clearColor,
  "clear": clear,
  "colorMask": colorMask,
  "useProgram": useProgram,
  "disableVertexAttribArray": disableVertexAttribArray,
  "shaderSource": shaderSource,
  "createProgram": createProgram,
  "createShader": createShader,
  "compileShader": compileShader,
  "commit": commit
};

let setFakeGl = (fakeGlObj, state) =>
  FakeGlTool.setFakeGl(fakeGlObj, state) |> MainStateTool.setState;

let setFakeGlToRenderWorkerState = (fakeGlObj, state: StateDataRenderWorkerType.renderWorkerState) =>
  {
    ...state,
    deviceManagerRecord:
      state.deviceManagerRecord |> DeviceManagerService.setGl(Obj.magic(fakeGlObj))
  }
  |> RenderWorkerStateTool.setState;
/*
 let setFakeGlToRenderWorkerState = (fakeGlObj, state) =>
   FakeGlTool.setFakeGl(fakeGlObj, state) |> RenderWorkerStateTool.setState; */