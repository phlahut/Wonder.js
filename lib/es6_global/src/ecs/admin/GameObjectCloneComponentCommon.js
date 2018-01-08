// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

import * as GeometryCloneComponentCommon$Wonderjs         from "../component/system/geometry/GeometryCloneComponentCommon.js";
import * as MaterialCloneComponentCommon$Wonderjs         from "../component/system/material/MaterialCloneComponentCommon.js";
import * as TransformCloneComponentCommon$Wonderjs        from "../component/system/transform/TransformCloneComponentCommon.js";
import * as MeshRendererCloneComponentCommon$Wonderjs     from "../component/system/meshRenderer/MeshRendererCloneComponentCommon.js";
import * as CameraControllerCloneComponentCommon$Wonderjs from "../component/system/cameraController/CameraControllerCloneComponentCommon.js";

var cloneTransformComponent = TransformCloneComponentCommon$Wonderjs.handleCloneComponent;

function cloneMeshRendererComponent(_, countRangeArr, state) {
  return MeshRendererCloneComponentCommon$Wonderjs.handleCloneComponent(countRangeArr, state);
}

var cloneGeometryComponent = GeometryCloneComponentCommon$Wonderjs.handleCloneComponent;

var cloneMaterialComponent = MaterialCloneComponentCommon$Wonderjs.handleCloneComponent;

var cloneCameraControllerComponent = CameraControllerCloneComponentCommon$Wonderjs.handleCloneComponent;

export {
  cloneTransformComponent        ,
  cloneMeshRendererComponent     ,
  cloneGeometryComponent         ,
  cloneMaterialComponent         ,
  cloneCameraControllerComponent ,
  
}
/* MaterialCloneComponentCommon-Wonderjs Not a pure module */