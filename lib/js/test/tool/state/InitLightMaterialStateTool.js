// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var InitMaterialStateTool$Wonderjs                   = require("./InitMaterialStateTool.js");
var CreateInitLightMaterialStateMainService$Wonderjs = require("../../../src/service/state/main/material/light/CreateInitLightMaterialStateMainService.js");

function createStateWithoutMaterialData(state) {
  var match = InitMaterialStateTool$Wonderjs.isRenderConfigRecordExist(state);
  if (match !== 0) {
    return CreateInitLightMaterialStateMainService$Wonderjs.createInitMaterialState(/* tuple */[
                0,
                /* int array */[],
                new Uint32Array(/* int array */[])
              ], state);
  } else {
    return CreateInitLightMaterialStateMainService$Wonderjs.createInitMaterialState(/* tuple */[
                0,
                /* int array */[],
                new Uint32Array(/* int array */[])
              ], InitMaterialStateTool$Wonderjs.setRenderConfig(1, state));
  }
}

exports.createStateWithoutMaterialData = createStateWithoutMaterialData;
/* CreateInitLightMaterialStateMainService-Wonderjs Not a pure module */