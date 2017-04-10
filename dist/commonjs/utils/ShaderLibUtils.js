"use strict";
var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
Object.defineProperty(exports, "__esModule", { value: true });
var registerClass_1 = require("../definition/typescript/decorator/registerClass");
var VerticeCommonShaderLib_1 = require("../renderer/shader/lib/common/VerticeCommonShaderLib");
var ShaderLibUtils = (function () {
    function ShaderLibUtils() {
    }
    ShaderLibUtils.addVerticeShaderLib = function (geometry, shader) {
        shader.addLib(VerticeCommonShaderLib_1.VerticeCommonShaderLib.create());
    };
    return ShaderLibUtils;
}());
ShaderLibUtils = __decorate([
    registerClass_1.registerClass("ShaderLibUtils")
], ShaderLibUtils);
exports.ShaderLibUtils = ShaderLibUtils;
//# sourceMappingURL=ShaderLibUtils.js.map