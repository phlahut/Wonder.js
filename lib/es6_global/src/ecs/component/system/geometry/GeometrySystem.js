// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

import * as Contract$Wonderjs                       from "../../../../definition/Contract.js";
import * as ArraySystem$Wonderjs                    from "../../../../structure/ArraySystem.js";
import * as GeometryStateCommon$Wonderjs            from "./GeometryStateCommon.js";
import * as GeometryOperateCommon$Wonderjs          from "./GeometryOperateCommon.js";
import * as GeometryConfigDataCommon$Wonderjs       from "./GeometryConfigDataCommon.js";
import * as GeometryGameObjectCommon$Wonderjs       from "./GeometryGameObjectCommon.js";
import * as GeometryGetStateDataCommon$Wonderjs     from "./GeometryGetStateDataCommon.js";
import * as GeometryInitComponentCommon$Wonderjs    from "./GeometryInitComponentCommon.js";
import * as GeometryDisposeComponentCommon$Wonderjs from "./GeometryDisposeComponentCommon.js";

var getVertices = GeometryOperateCommon$Wonderjs.getVertices;

var unsafeGetVertices = GeometryOperateCommon$Wonderjs.unsafeGetVertices;

var setVertices = GeometryOperateCommon$Wonderjs.setVertices;

var getIndices = GeometryOperateCommon$Wonderjs.getIndices;

var unsafeGetIndices = GeometryOperateCommon$Wonderjs.unsafeGetIndices;

var setIndices = GeometryOperateCommon$Wonderjs.setIndices;

var getIndicesCount = GeometryOperateCommon$Wonderjs.getIndicesCount;

function hasIndices(index, state) {
  return +(GeometryOperateCommon$Wonderjs.getIndicesCount(index, state) > 0);
}

var getVerticesCount = GeometryOperateCommon$Wonderjs.getVerticesCount;

function getDrawMode(gl) {
  return gl.TRIANGLES;
}

function getIndexType(gl) {
  return gl.UNSIGNED_SHORT;
}

function getIndexTypeSize() {
  return Uint16Array.BYTES_PER_ELEMENT;
}

function init(state) {
  Contract$Wonderjs.requireCheck((function () {
          return Contract$Wonderjs.test("shouldn't dispose any geometry before init", (function () {
                        return Contract$Wonderjs.assertTrue(GeometryDisposeComponentCommon$Wonderjs.isNotDisposed(GeometryGetStateDataCommon$Wonderjs.getGeometryData(state)));
                      }));
        }));
  var match = GeometryGetStateDataCommon$Wonderjs.getGeometryData(state);
  var index = match[/* index */0];
  ArraySystem$Wonderjs.range(0, index - 1 | 0).forEach((function (geometryIndex) {
          GeometryInitComponentCommon$Wonderjs.initGeometry(geometryIndex, state);
          return /* () */0;
        }));
  return state;
}

var getConfigData = GeometryConfigDataCommon$Wonderjs.getConfigData;

var getGameObject = GeometryGameObjectCommon$Wonderjs.getGameObject;

var isAlive = GeometryDisposeComponentCommon$Wonderjs.isAlive;

var getGeometryData = GeometryGetStateDataCommon$Wonderjs.getGeometryData;

var handleInitComponent = GeometryInitComponentCommon$Wonderjs.handleInitComponent;

var deepCopyStateForRestore = GeometryStateCommon$Wonderjs.deepCopyStateForRestore;

var restore = GeometryStateCommon$Wonderjs.restore;

export {
  getGeometryData         ,
  handleInitComponent     ,
  getVertices             ,
  unsafeGetVertices       ,
  setVertices             ,
  getIndices              ,
  unsafeGetIndices        ,
  setIndices              ,
  getIndicesCount         ,
  hasIndices              ,
  getVerticesCount        ,
  getDrawMode             ,
  getIndexType            ,
  getIndexTypeSize        ,
  init                    ,
  getConfigData           ,
  getGameObject           ,
  isAlive                 ,
  deepCopyStateForRestore ,
  restore                 ,
  
}
/* ArraySystem-Wonderjs Not a pure module */