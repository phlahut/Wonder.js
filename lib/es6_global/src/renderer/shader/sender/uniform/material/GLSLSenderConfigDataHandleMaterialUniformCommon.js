// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

import * as Log$WonderLog                                                        from "../../../../../../../../node_modules/wonder-log/lib/es6_global/src/Log.js";
import * as BasicMaterialAdminAci$Wonderjs                                       from "../../../../../ecs/admin/avoid_circle_import/component/BasicMaterialAdminAci.js";
import * as LightMaterialAdminAci$Wonderjs                                       from "../../../../../ecs/admin/avoid_circle_import/component/LightMaterialAdminAci.js";
import * as GLSLSenderConfigDataHandleUniformRenderObjectMaterialCommon$Wonderjs from "../GLSLSenderConfigDataHandleUniformRenderObjectMaterialCommon.js";

function addBasicMaterialSendData(param, sendDataArrTuple) {
  var field = param[0];
  if (field === "color") {
    return GLSLSenderConfigDataHandleUniformRenderObjectMaterialCommon$Wonderjs.addUniformSendDataByType(/* tuple */[
                param[4],
                param[2],
                param[1],
                param[3]
              ], sendDataArrTuple, BasicMaterialAdminAci$Wonderjs.unsafeGetColor);
  } else {
    return Log$WonderLog.fatal(Log$WonderLog.buildFatalMessage("_addBasicMaterialSendData", "unknow field:" + (String(field) + ""), "", "", ""));
  }
}

function addLightMaterialSendData(param, sendDataArrTuple) {
  var uniformCacheMap = param[4];
  var type_ = param[3];
  var name = param[2];
  var pos = param[1];
  var field = param[0];
  switch (field) {
    case "diffuseColor" : 
        return GLSLSenderConfigDataHandleUniformRenderObjectMaterialCommon$Wonderjs.addUniformSendDataByType(/* tuple */[
                    uniformCacheMap,
                    name,
                    pos,
                    type_
                  ], sendDataArrTuple, LightMaterialAdminAci$Wonderjs.unsafeGetDiffuseColor);
    case "shininess" : 
        return GLSLSenderConfigDataHandleUniformRenderObjectMaterialCommon$Wonderjs.addUniformSendDataByType(/* tuple */[
                    uniformCacheMap,
                    name,
                    pos,
                    type_
                  ], sendDataArrTuple, LightMaterialAdminAci$Wonderjs.unsafeGetShininess);
    case "specularColor" : 
        return GLSLSenderConfigDataHandleUniformRenderObjectMaterialCommon$Wonderjs.addUniformSendDataByType(/* tuple */[
                    uniformCacheMap,
                    name,
                    pos,
                    type_
                  ], sendDataArrTuple, LightMaterialAdminAci$Wonderjs.unsafeGetSpecularColor);
    default:
      return Log$WonderLog.fatal(Log$WonderLog.buildFatalMessage("_addLightMaterialSendData", "unknow field:" + (String(field) + ""), "", "", ""));
  }
}

export {
  addBasicMaterialSendData ,
  addLightMaterialSendData ,
  
}
/* Log-WonderLog Not a pure module */