module wd{
export class ShaderChunk{public static empty:GLSLChunk = {top:"", define:"", varDeclare:"", funcDeclare:"", funcDefine:"", body:""}
public static NULL:number = -1.0;
public static normal_morph_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "vec3 a_normal = a_currentFrameNormal + (a_nextFrameNormal - a_currentFrameNormal) * u_interpolation;\n",}
public static vertice_morph_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "vec3 a_position = a_currentFramePosition + (a_nextFramePosition - a_currentFramePosition) * u_interpolation;\n",}
public static vertice_skinSkeleton_vertex:GLSLChunk = {top: "",define: "",varDeclare: "uniform mat4 u_jointMatrices[MAX_JOINT_COUNT];\n",funcDeclare: "",funcDefine: "mat4 getJointMatrix(const in float i) {\n        return u_jointMatrices[int(i)];\n    }\n\n    mat4 getVertexBlendedJointMatrix() {\n        return getJointMatrix(a_jointIndice.x) * a_jointWeight.x + getJointMatrix(a_jointIndice.y) * a_jointWeight.y + getJointMatrix(a_jointIndice.z) * a_jointWeight.z + getJointMatrix(a_jointIndice.w) * a_jointWeight.w;\n    }\n",body: "vec3 a_position = vec3(getVertexBlendedJointMatrix() * vec4(a_position, 1.0));\n",}
public static basic_materialColor_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "vec4 totalColor = vec4(u_color, 1.0);\n",}
public static basic_vertexColor_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_color;\n",funcDeclare: "",funcDefine: "",body: "vec4 totalColor = vec4(v_color, 1.0);\n",}
public static basic_vertexColor_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_color;\n",funcDeclare: "",funcDefine: "",body: "v_color = a_color;\n",}
public static end_basic_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "gl_FragColor = vec4(totalColor.rgb, totalColor.a * u_opacity);\n",}
public static common_define:GLSLChunk = {top: "",define: "#define NULL -1.0\n",varDeclare: "",funcDeclare: "",funcDefine: "",body: "",}
public static common_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "",}
public static common_function:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "mat2 transpose(mat2 m) {\n  return mat2(  m[0][0], m[1][0],   // new col 0\n                m[0][1], m[1][1]    // new col 1\n             );\n  }\nmat3 transpose(mat3 m) {\n  return mat3(  m[0][0], m[1][0], m[2][0],  // new col 0\n                m[0][1], m[1][1], m[2][1],  // new col 1\n                m[0][2], m[1][2], m[2][2]   // new col 1\n             );\n  }\n\nbool isRenderListEmpty(int isRenderListEmpty){\n  return isRenderListEmpty == 1;\n}\n",body: "",}
public static common_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "",}
public static highp_fragment:GLSLChunk = {top: "precision highp float;\nprecision highp int;\n",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "",}
public static lowp_fragment:GLSLChunk = {top: "precision lowp float;\nprecision lowp int;\n",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "",}
public static mediump_fragment:GLSLChunk = {top: "precision mediump float;\nprecision mediump int;\n",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "",}
public static noNormalMap_light_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_normal;\n",funcDeclare: "",funcDefine: "#if POINT_LIGHTS_COUNT > 0\nvec3 getPointLightDir(int index){\n    //workaround '[] : Index expression must be constant' error\n    for (int x = 0; x <= POINT_LIGHTS_COUNT; x++) {\n        if(x == index){\n            return getPointLightDirByLightPos(u_pointLights[x].position);\n        }\n    }\n    /*!\n    solve error in window7 chrome/firefox:\n    not all control paths return a value.\n    failed to create d3d shaders\n    */\n    return vec3(0.0);\n}\n#endif\n\n#if DIRECTION_LIGHTS_COUNT > 0\nvec3 getDirectionLightDir(int index){\n    //workaround '[] : Index expression must be constant' error\n    for (int x = 0; x <= DIRECTION_LIGHTS_COUNT; x++) {\n        if(x == index){\n            return getDirectionLightDirByLightPos(u_directionLights[x].position);\n        }\n    }\n\n    /*!\n    solve error in window7 chrome/firefox:\n    not all control paths return a value.\n    failed to create d3d shaders\n    */\n    return vec3(0.0);\n}\n#endif\n\n\nvec3 getViewDir(){\n    return normalize(u_cameraPos - v_worldPosition);\n}\n",body: "",}
public static common_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "vec3 flipNormal(vec3 normal){\n    vec3 normalForRefraction = normal;\n    normalForRefraction.y = -normalForRefraction.y;\n    normalForRefraction.z = -normalForRefraction.z;\n\n    return normalForRefraction;\n}\n",body: "",}
public static lightCommon_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_worldPosition;\n#if POINT_LIGHTS_COUNT > 0\nstruct PointLight {\n    vec3 position;\n    vec3 color;\n    float intensity;\n\n    float range;\n    float constant;\n    float linear;\n    float quadratic;\n};\nuniform PointLight u_pointLights[POINT_LIGHTS_COUNT];\n\n#endif\n\n\n#if DIRECTION_LIGHTS_COUNT > 0\nstruct DirectionLight {\n    vec3 position;\n\n    float intensity;\n\n    vec3 color;\n};\nuniform DirectionLight u_directionLights[DIRECTION_LIGHTS_COUNT];\n#endif\n",funcDeclare: "",funcDefine: "",body: "",}
public static lightCommon_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_worldPosition;\n#if POINT_LIGHTS_COUNT > 0\n    struct PointLight {\n    vec3 position;\n    vec3 color;\n    float intensity;\n\n    float range;\n    float constant;\n    float linear;\n    float quadratic;\n};\nuniform PointLight u_pointLights[POINT_LIGHTS_COUNT];\n\n#endif\n\n\n#if DIRECTION_LIGHTS_COUNT > 0\n    struct DirectionLight {\n    vec3 position;\n\n    float intensity;\n\n    vec3 color;\n};\nuniform DirectionLight u_directionLights[DIRECTION_LIGHTS_COUNT];\n#endif\n",funcDeclare: "",funcDefine: "",body: "",}
public static lightEnd_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "gl_FragColor = totalColor;\n",}
public static light_common:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "vec3 getDirectionLightDirByLightPos(vec3 lightPos);\nvec3 getPointLightDirByLightPos(vec3 lightPos);\nvec3 getPointLightDirByLightPos(vec3 lightPos, vec3 worldPosition);\n",funcDefine: "vec3 getDirectionLightDirByLightPos(vec3 lightPos){\n    return lightPos - vec3(0.0);\n    //return vec3(0.0) - lightPos;\n}\nvec3 getPointLightDirByLightPos(vec3 lightPos){\n    return lightPos - v_worldPosition;\n}\nvec3 getPointLightDirByLightPos(vec3 lightPos, vec3 worldPosition){\n    return lightPos - worldPosition;\n}\n",body: "",}
public static light_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "float getBlinnShininess(float shininess, vec3 normal, vec3 lightDir, vec3 viewDir, float dotResultBetweenNormAndLight){\n        vec3 halfAngle = normalize(lightDir + viewDir);\n        float blinnTerm = dot(normal, halfAngle);\n\n        blinnTerm = clamp(blinnTerm, 0.0, 1.0);\n        blinnTerm = dotResultBetweenNormAndLight != 0.0 ? blinnTerm : 0.0;\n        blinnTerm = pow(blinnTerm, shininess);\n\n        return blinnTerm;\n}\n\nfloat getPhongShininess(float shininess, vec3 normal, vec3 lightDir, vec3 viewDir, float dotResultBetweenNormAndLight){\n        vec3 reflectDir = reflect(-lightDir, normal);\n        float phongTerm = dot(viewDir, reflectDir);\n\n        phongTerm = clamp(phongTerm, 0.0, 1.0);\n        phongTerm = dotResultBetweenNormAndLight != 0.0 ? phongTerm : 0.0;\n        phongTerm = pow(phongTerm, shininess);\n\n        return phongTerm;\n}\n\nvec4 calcLight(vec3 lightDir, vec3 color, float intensity, float attenuation, vec3 normal, vec3 viewDir)\n{\n        vec3 materialLight = getMaterialLight();\n        vec4 materialDiffuse = getMaterialDiffuse();\n        vec3 materialSpecular = u_specular;\n        vec3 materialEmission = getMaterialEmission();\n\n        float specularStrength = getSpecularStrength();\n\n        float dotResultBetweenNormAndLight = dot(normal, lightDir);\n        float diff = max(dotResultBetweenNormAndLight, 0.0);\n\n        vec3 emissionColor = materialEmission;\n\n        vec3 ambientColor = (u_ambient + materialLight) * materialDiffuse.rgb;\n\n\n        if(u_lightModel == 3){\n            return vec4(emissionColor + ambientColor, 1.0);\n        }\n\n        vec4 diffuseColor = vec4(color * materialDiffuse.rgb * diff * intensity, materialDiffuse.a);\n\n        float spec = 0.0;\n\n        if(u_lightModel == 2){\n                spec = getPhongShininess(u_shininess, normal, lightDir, viewDir, diff);\n        }\n        else if(u_lightModel == 1){\n                spec = getBlinnShininess(u_shininess, normal, lightDir, viewDir, diff);\n        }\n\n        vec3 specularColor = spec * materialSpecular * specularStrength * intensity;\n\n        return vec4(emissionColor + ambientColor + attenuation * (diffuseColor.rgb + specularColor), diffuseColor.a);\n//        return vec4(emissionColor + ambientColor + attenuation * (diffuseColor.rgb + specularColor), 1.0);\n}\n\n\n\n\n#if POINT_LIGHTS_COUNT > 0\n        vec4 calcPointLight(vec3 lightDir, PointLight light, vec3 normal, vec3 viewDir)\n{\n        //lightDir is not normalize computing distance\n        float distance = length(lightDir);\n\n        float attenuation = 0.0;\n\n        if(light.range == NULL || distance < light.range)\n        {\n            attenuation = 1.0 / (light.constant + light.linear * distance + light.quadratic * (distance * distance));\n        }\n\n        lightDir = normalize(lightDir);\n\n        return calcLight(lightDir, light.color, light.intensity, attenuation, normal, viewDir);\n}\n#endif\n\n\n\n#if DIRECTION_LIGHTS_COUNT > 0\n        vec4 calcDirectionLight(vec3 lightDir, DirectionLight light, vec3 normal, vec3 viewDir)\n{\n        float attenuation = 1.0;\n\n        lightDir = normalize(lightDir);\n\n        return calcLight(lightDir, light.color, light.intensity, attenuation, normal, viewDir);\n}\n#endif\n\n\n\nvec4 calcTotalLight(vec3 norm, vec3 viewDir){\n    vec4 totalLight = vec4(0.0);\n\n    #if POINT_LIGHTS_COUNT > 0\n                for(int i = 0; i < POINT_LIGHTS_COUNT; i++){\n                totalLight += calcPointLight(getPointLightDir(i), u_pointLights[i], norm, viewDir);\n        }\n    #endif\n\n    #if DIRECTION_LIGHTS_COUNT > 0\n                for(int i = 0; i < DIRECTION_LIGHTS_COUNT; i++){\n                totalLight += calcDirectionLight(getDirectionLightDir(i), u_directionLights[i], norm, viewDir);\n        }\n    #endif\n\n        return totalLight;\n}\n",body: "vec3 normal = normalize(getNormal());\n\n#ifdef BOTH_SIDE\nnormal = normal * (-1.0 + 2.0 * float(gl_FrontFacing));\n#endif\n\nvec3 viewDir = normalize(getViewDir());\n\nvec4 totalColor = calcTotalLight(normal, viewDir);\n\ntotalColor.a *= u_opacity;\n\ntotalColor.rgb = totalColor.rgb * getShadowVisibility();\n",}
public static light_setWorldPosition_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "v_worldPosition = vec3(mMatrix * vec4(a_position, 1.0));\n",}
public static light_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "gl_Position = u_pMatrix * u_vMatrix * vec4(v_worldPosition, 1.0);\n",}
public static map_forBasic_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_mapCoord0;\n",funcDeclare: "",funcDefine: "",body: "totalColor *= texture2D(u_sampler2D0, v_mapCoord0);\n",}
public static map_forBasic_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_mapCoord0;\n",funcDeclare: "",funcDefine: "",body: "vec2 sourceTexCoord0 = a_texCoord * u_map0SourceRegion.zw + u_map0SourceRegion.xy;\n\n    v_mapCoord0 = sourceTexCoord0 * u_map0RepeatRegion.zw + u_map0RepeatRegion.xy;\n",}
public static multi_map_forBasic_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_mapCoord0;\nvarying vec2 v_mapCoord1;\n",funcDeclare: "",funcDefine: "vec4 getMapColor(){\n            vec4 color0 = texture2D(u_sampler2D0, v_mapCoord0);\n            vec4 color1 = texture2D(u_sampler2D1, v_mapCoord1);\n\n            if(u_combineMode == 0){\n                return mix(color0, color1, u_mixRatio);\n            }\n            else if(u_combineMode == 1){\n                return color0 * color1;\n            }\n            else if(u_combineMode == 2){\n                return color0 + color1;\n            }\n\n            /*!\n            solve error in window7 chrome/firefox:\n            not all control paths return a value.\n            failed to create d3d shaders\n            */\n            return vec4(1.0);\n		}\n",body: "totalColor *= getMapColor();\n",}
public static multi_map_forBasic_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_mapCoord1;\n",funcDeclare: "",funcDefine: "",body: "vec2 sourceTexCoord1 = a_texCoord * u_map1SourceRegion.zw + u_map1SourceRegion.xy;\n\n    v_mapCoord1 = sourceTexCoord1 * u_map1RepeatRegion.zw + u_map1RepeatRegion.xy;\n",}
public static common_proceduralTexture_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "float rand(vec2 n) {\n	return fract(cos(dot(n, vec2(12.9898, 4.1414))) * 43758.5453);\n}\nfloat noise(vec2 n) {\n	const vec2 d = vec2(0.0, 1.0);\n	vec2 b = floor(n), f = smoothstep(vec2(0.0), vec2(1.0), fract(n));\n	return mix(mix(rand(b), rand(b + d.yx), f.x), mix(rand(b + d.xy), rand(b + d.yy), f.x), f.y);\n}\n\nfloat turbulence(vec2 P)\n{\n	float val = 0.0;\n	float freq = 1.0;\n	for (int i = 0; i < 4; i++)\n	{\n		val += abs(noise(P*freq) / freq);\n		freq *= 2.07;\n	}\n	return val;\n}\n\nfloat fbm(vec2 n) {\n	float total = 0.0, amplitude = 1.0;\n	for (int i = 0; i < 4; i++) {\n		total += noise(n) * amplitude;\n		n += n;\n		amplitude *= 0.5;\n	}\n	return total;\n}\n\nfloat round(float number){\n	return sign(number)*floor(abs(number) + 0.5);\n}\n",body: "",}
public static common_proceduralTexture_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_texCoord;\nconst vec2 MADD=vec2(0.5,0.5);\n",funcDeclare: "",funcDefine: "",body: "v_texCoord=a_positionVec2*MADD+MADD;\n\n    gl_Position=vec4(a_positionVec2, 0.0 ,1.0);\n",}
public static skybox_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_dir;\n",funcDeclare: "",funcDefine: "",body: "gl_FragColor = textureCube(u_samplerCube0, v_dir);\n",}
public static skybox_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_dir;\n",funcDeclare: "",funcDefine: "",body: "vec4 pos = u_pMatrix * mat4(mat3(u_vMatrix)) * mMatrix * vec4(a_position, 1.0);\n\n    gl_Position = pos.xyww;\n\n    v_dir = a_position;\n",}
public static basic_forBasic_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_dir;\n",funcDeclare: "",funcDefine: "",body: "totalColor *= textureCube(u_samplerCube0, v_dir);\n",}
public static basic_forBasic_envMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_dir;\n",funcDeclare: "",funcDefine: "",body: "v_dir = a_position;\n",}
public static forBasic_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_normal;\nvarying vec3 v_position;\n",funcDeclare: "",funcDefine: "",body: "vec3 inDir = normalize(v_position - u_cameraPos);\n",}
public static forBasic_envMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_normal;\nvarying vec3 v_position;\n",funcDeclare: "",funcDefine: "",body: "v_normal = normalize( normalMatrix * a_normal);\n    v_position = vec3(mMatrix * vec4(a_position, 1.0));\n",}
public static fresnel_forBasic_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "float computeFresnelRatio(vec3 inDir, vec3 normal, float refractionRatio){\n    float f = pow(1.0 - refractionRatio, 2.0) / pow(1.0 + refractionRatio, 2.0);\n    float fresnelPower = 5.0;\n    float ratio = f + (1.0 - f) * pow((1.0 - dot(inDir, normal)), fresnelPower);\n\n    return ratio / 100.0;\n}\nvec4 getEnvMapTotalColor(vec3 inDir, vec3 normal){\n    vec3 reflectDir = reflect(inDir, normal);\n    vec3 refractDir = refract(inDir, flipNormal(normal), u_refractionRatio);\n\n    vec4 reflectColor = textureCube(u_samplerCube0, reflectDir);\n    vec4 refractColor = textureCube(u_samplerCube0, refractDir);\n\n    vec4 totalColor = vec4(0.0);\n\n	if(u_reflectivity != NULL){\n        totalColor = mix(reflectColor, refractColor, u_reflectivity);\n	}\n	else{\n        totalColor = mix(reflectColor, refractColor, computeFresnelRatio(inDir, normal, u_refractionRatio));\n	}\n\n	return totalColor;\n}\n",body: "if(!isRenderListEmpty(u_isRenderListEmpty)){\n    totalColor *= getEnvMapTotalColor(inDir, normalize(v_normal));\n}\n",}
public static reflection_forBasic_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "if(!isRenderListEmpty(u_isRenderListEmpty)){\n    totalColor *= textureCube(u_samplerCube0, reflect(inDir, normalize(v_normal)));\n}\n",}
public static refraction_forBasic_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "if(!isRenderListEmpty(u_isRenderListEmpty)){\n    totalColor *= textureCube(u_samplerCube0, refract(inDir, v_normal, u_refractionRatio));\n}\n",}
public static basic_forLight_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_basicEnvMap_dir;\n",funcDeclare: "",funcDefine: "",body: "totalColor *= textureCube(u_samplerCube0, v_basicEnvMap_dir);\n",}
public static basic_forLight_envMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_basicEnvMap_dir;\n",funcDeclare: "",funcDefine: "",body: "v_basicEnvMap_dir = a_position;\n",}
public static forLight_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "vec3 inDir = normalize(v_worldPosition - u_cameraPos);\n",}
public static forLight_envMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "",}
public static fresnel_forLight_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "float computeFresnelRatio(vec3 inDir, vec3 normal, float refractionRatio){\n    float f = pow(1.0 - refractionRatio, 2.0) / pow(1.0 + refractionRatio, 2.0);\n    float fresnelPower = 5.0;\n    float ratio = f + (1.0 - f) * pow((1.0 - dot(inDir, normal)), fresnelPower);\n\n    return ratio / 100.0;\n}\n\nvec4 getEnvMapTotalColor(vec3 inDir, vec3 normal){\n    vec3 reflectDir = reflect(inDir, normal);\n\n/*!\n//todo why only fresnel->refraction need flip normal, but refraction don't need?\n*/\n    vec3 refractDir = refract(inDir, flipNormal(normal), u_refractionRatio);\n\n    vec4 reflectColor = textureCube(u_samplerCube0, reflectDir);\n    vec4 refractColor = textureCube(u_samplerCube0, refractDir);\n\n\n    vec4 totalColor = vec4(0.0);\n\n	if(u_reflectivity != NULL){\n        totalColor = mix(reflectColor, refractColor, u_reflectivity);\n	}\n	else{\n        totalColor = mix(reflectColor, refractColor, computeFresnelRatio(inDir, normal, u_refractionRatio));\n	}\n\n	return totalColor;\n}\n",body: "if(!isRenderListEmpty(u_isRenderListEmpty)){\n	totalColor *= getEnvMapTotalColor(inDir, normalize(getNormal()));\n}\n",}
public static reflection_forLight_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "if(!isRenderListEmpty(u_isRenderListEmpty)){\n    totalColor *= textureCube(u_samplerCube0, reflect(inDir, normalize(getNormal())));\n}\n",}
public static refraction_forLight_envMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "if(!isRenderListEmpty(u_isRenderListEmpty)){\n    totalColor *= textureCube(u_samplerCube0, refract(inDir, flipNormal(normal), u_refractionRatio));\n}\n",}
public static modelMatrix_hardware_instance_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "mat4 mMatrix = mat4(a_mVec4_0, a_mVec4_1, a_mVec4_2, a_mVec4_3);\n",}
public static normalMatrix_hardware_instance_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "mat3 normalMatrix = mat3(a_normalVec4_0, a_normalVec4_1, a_normalVec4_2);\n",}
public static modelMatrix_batch_instance_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "mat4 mMatrix = u_mMatrix;\n",}
public static normalMatrix_batch_instance_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "mat3 normalMatrix = u_normalMatrix;\n",}
public static modelMatrix_noInstance_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "mat4 mMatrix = u_mMatrix;\n",}
public static normalMatrix_noInstance_vertex:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "",body: "mat3 normalMatrix = u_normalMatrix;\n",}
public static diffuseMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_diffuseMapTexCoord;\n",funcDeclare: "",funcDefine: "vec4 getMaterialDiffuse() {\n        return texture2D(u_diffuseMapSampler, v_diffuseMapTexCoord);\n    }\n",body: "",}
public static diffuseMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_diffuseMapTexCoord;\n",funcDeclare: "",funcDefine: "",body: "//todo optimize(combine, reduce compute numbers)\n    //todo BasicTexture extract textureMatrix\n    vec2 sourceTexCoord = a_texCoord * u_diffuseMapSourceRegion.zw + u_diffuseMapSourceRegion.xy;\n    v_diffuseMapTexCoord = sourceTexCoord * u_diffuseMapRepeatRegion.zw + u_diffuseMapRepeatRegion.xy;\n",}
public static emissionMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_emissionMapTexCoord;\n",funcDeclare: "",funcDefine: "vec3 getMaterialEmission() {\n        return texture2D(u_emissionMapSampler, v_emissionMapTexCoord).rgb;\n    }\n",body: "",}
public static emissionMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_emissionMapTexCoord;\n",funcDeclare: "",funcDefine: "",body: "v_emissionMapTexCoord = a_texCoord;\n",}
public static lightMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_lightMapTexCoord;\n",funcDeclare: "",funcDefine: "vec3 getMaterialLight() {\n        return texture2D(u_lightMapSampler, v_lightMapTexCoord).rgb * u_lightMapIntensity;\n    }\n",body: "",}
public static lightMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_lightMapTexCoord;\n",funcDeclare: "",funcDefine: "",body: "v_lightMapTexCoord = a_texCoord;\n",}
public static noDiffuseMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "vec4 getMaterialDiffuse() {\n        return vec4(u_diffuse, 1.0);\n    }\n",body: "",}
public static noEmissionMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "vec3 getMaterialEmission() {\n        return u_emission;\n    }\n",body: "",}
public static noLightMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "vec3 getMaterialLight() {\n        return vec3(0.0);\n    }\n",body: "",}
public static noNormalMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "//varying vec3 v_normal;\n//",funcDeclare: "vec3 getNormal();\n\n",funcDefine: "//#if POINT_LIGHTS_COUNT > 0\n//vec3 getPointLightDir(int index){\n//    //workaround '[] : Index expression must be constant' error\n//    for (int x = 0; x <= POINT_LIGHTS_COUNT; x++) {\n//        if(x == index){\n//            return getPointLightDirByLightPos(u_pointLights[x].position);\n//        }\n//    }\n//    /*!\n//    solve error in window7 chrome/firefox:\n//    not all control paths return a value.\n//    failed to create d3d shaders\n//    */\n//    return vec3(0.0);\n//}\n//#endif\n//\n//#if DIRECTION_LIGHTS_COUNT > 0\n//vec3 getDirectionLightDir(int index){\n//    //workaround '[] : Index expression must be constant' error\n//    for (int x = 0; x <= DIRECTION_LIGHTS_COUNT; x++) {\n//        if(x == index){\n//            return getDirectionLightDirByLightPos(u_directionLights[x].position);\n//        }\n//    }\n//\n//    /*!\n//    solve error in window7 chrome/firefox:\n//    not all control paths return a value.\n//    failed to create d3d shaders\n//    */\n//    return vec3(0.0);\n//}\n//#endif\n//\n//\n//vec3 getViewDir(){\n//    return normalize(u_cameraPos - v_worldPosition);\n//}\nvec3 getNormal(){\n    return v_normal;\n}\n\n",body: "",}
public static noNormalMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec3 v_normal;\n",funcDeclare: "",funcDefine: "",body: "v_normal = normalize(normalMatrix * a_normal);\n",}
public static noSpecularMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "float getSpecularStrength() {\n        return 1.0;\n    }\n",body: "",}
public static normalMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_normalMapTexCoord;\nvarying vec3 v_viewDir;\n#if POINT_LIGHTS_COUNT > 0\nvarying vec3 v_pointLightDir[POINT_LIGHTS_COUNT];\n#endif\n\n#if DIRECTION_LIGHTS_COUNT > 0\nvarying vec3 v_directionLightDir[DIRECTION_LIGHTS_COUNT];\n#endif\n\n",funcDeclare: "vec3 getNormal();\n\nvec3 getLightDir(vec3 lightPos);\n\n",funcDefine: "#if POINT_LIGHTS_COUNT > 0\nvec3 getPointLightDir(int index){\n    //workaround '[] : Index expression must be constant' error\n    for (int x = 0; x <= POINT_LIGHTS_COUNT; x++) {\n        if(x == index){\n            return v_pointLightDir[x];\n        }\n    }\n    /*!\n    solve error in window7 chrome/firefox:\n    not all control paths return a value.\n    failed to create d3d shaders\n    */\n    return vec3(0.0);\n}\n#endif\n\n#if DIRECTION_LIGHTS_COUNT > 0\n\nvec3 getDirectionLightDir(int index){\n    //workaround '[] : Index expression must be constant' error\n    for (int x = 0; x <= DIRECTION_LIGHTS_COUNT; x++) {\n        if(x == index){\n            return v_directionLightDir[x];\n        }\n    }\n\n    /*!\n    solve error in window7 chrome/firefox:\n    not all control paths return a value.\n    failed to create d3d shaders\n    */\n    return vec3(0.0);\n}\n#endif\n\n\nvec3 getViewDir(){\n    return v_viewDir;\n}\nvec3 getNormal(){\n        // Obtain normal from normal map in range [0,1]\n        vec3 normal = texture2D(u_normalMapSampler, v_normalMapTexCoord).rgb;\n\n        // Transform normal vector to range [-1,1]\n        return normalize(normal * 2.0 - 1.0);  // this normal is in tangent space\n}\n",body: "",}
public static normalMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_normalMapTexCoord;\n	varying vec3 v_viewDir;\n\n\n#if POINT_LIGHTS_COUNT > 0\nvarying vec3 v_pointLightDir[POINT_LIGHTS_COUNT];\n#endif\n\n#if DIRECTION_LIGHTS_COUNT > 0\nvarying vec3 v_directionLightDir[DIRECTION_LIGHTS_COUNT];\n#endif\n\n",funcDeclare: "",funcDefine: "mat3 computeTBN(mat3 normalMatrix){\n            vec3 T = normalize(normalMatrix * a_tangent);\n            vec3 N = normalize(normalMatrix * a_normal);\n            // re-orthogonalize T with respect to N\n            T = normalize(T - dot(T, N) * N);\n            // then retrieve perpendicular vector B with the cross product of T and N\n            vec3 B = cross(T, N);\n\n\n            return transpose(mat3(T, B, N));\n        }\n",body: "mat3 TBN = computeTBN(normalMatrix);\n\n    //v_tangentLightPos = TBN * light.position;\n    //v_tangentCameraPos  = TBN * u_cameraPos;\n    //v_tangentPos  = TBN * v_position;\n\n\n    vec3 tangentPosition = TBN * vec3(mMatrix * vec4(a_position, 1.0));\n\n    v_normalMapTexCoord = a_texCoord;\n\n    v_viewDir = normalize(TBN * u_cameraPos - tangentPosition);\n\n\n#if POINT_LIGHTS_COUNT > 0\n       for(int i = 0; i < POINT_LIGHTS_COUNT; i++){\n            //not normalize for computing distance\n            v_pointLightDir[i] = TBN * getPointLightDirByLightPos(u_pointLights[i].position, tangentPosition);\n       }\n#endif\n\n#if DIRECTION_LIGHTS_COUNT > 0\n       for(int i = 0; i < DIRECTION_LIGHTS_COUNT; i++){\n            v_directionLightDir[i] = normalize(- TBN * getDirectionLightDirByLightPos(u_directionLights[i].position));\n       }\n#endif\n\n",}
public static specularMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_specularMapTexCoord;\n",funcDeclare: "",funcDefine: "float getSpecularStrength() {\n        return texture2D(u_specularMapSampler, v_specularMapTexCoord).r;\n    }\n",body: "",}
public static specularMap_vertex:GLSLChunk = {top: "",define: "",varDeclare: "varying vec2 v_specularMapTexCoord;\n",funcDeclare: "",funcDefine: "",body: "v_specularMapTexCoord = a_texCoord;\n",}
public static noShadowMap_fragment:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "vec3 getShadowVisibility() {\n        return vec3(1.0);\n    }\n",body: "",}
public static common_heightMap:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "float _getHeightFromHeightMap(vec2 heightMapSampleTexCoord){\nheightMapSampleTexCoord.x /= u_terrainSubdivisions;\nheightMapSampleTexCoord.y =  1.0 - heightMapSampleTexCoord.y / u_terrainSubdivisions;\n\n    vec4 data = texture2D(u_heightMapSampler, heightMapSampleTexCoord);\n    /*!\n     compute gradient from rgb heightMap->r,g,b components\n     */\n    float r = data.r,\n    g = data.g,\n    b = data.b,\n    gradient = r * 0.3 + g * 0.59 + b * 0.11;\n\n    return u_terrainMinHeight + (u_terrainMaxHeight - u_terrainMinHeight) * gradient;\n}\n\n\nfloat _getBilinearInterpolatedHeight(vec2 offset, float heightMinXMinZ, float heightMaxXMinZ, float heightMaxXMaxZ, float heightMinXMaxZ){\n    return (heightMinXMinZ * (1.0 - offset.x) + heightMaxXMinZ * offset.x) * (1.0 - offset.y) + (heightMaxXMaxZ * offset.x + heightMinXMaxZ * (1.0 - offset.x)) * offset.y;\n}\n\n\nfloat getHeightFromHeightMap(float x, float z){\n    x += u_terrainRangeWidth / 2.0;\n    z += u_terrainRangeHeight / 2.0;\n\n    if(x > u_terrainRangeWidth || z > u_terrainRangeHeight || x < 0.0 || z < 0.0){\n        return 0.0;\n    }\n\n\n\n/*!\n1.get grid subdivisions row,col\n2.get grid height\n3.get bilinear interpolated height\n*/\n\n\n\n    float sx = x / u_terrainRangeWidth * u_terrainSubdivisions,\n        sz = z / u_terrainRangeHeight * u_terrainSubdivisions;\n\n    float sFloorX = floor(sx),\n        sFloorZ = floor(sz);\n\n    float sMinX,\n    sMaxX,\n    sMinZ,\n    sMaxZ;\n\n    if(sFloorX < u_terrainSubdivisions){\n        sMinX = sFloorX;\n        sMaxX = sFloorX + 1.0;\n    }\n    else{\n        sMinX = sFloorX - 1.0;\n        sMaxX = sFloorX;\n    }\n\n    if(sFloorZ < u_terrainSubdivisions){\n        sMinZ = sFloorZ;\n        sMaxZ = sFloorZ + 1.0;\n    }\n    else{\n        sMinZ = sFloorZ - 1.0;\n        sMaxZ = sFloorZ;\n    }\n\n    vec2 quadSubdivisionsCoordinateArr[5];\n\n    quadSubdivisionsCoordinateArr[0] = vec2(sMinX, sMinZ);\n    quadSubdivisionsCoordinateArr[1] = vec2(sMaxX, sMinZ);\n    quadSubdivisionsCoordinateArr[2] = vec2(sMaxX, sMaxZ);\n    quadSubdivisionsCoordinateArr[3] = vec2(sMinX, sMaxZ);\n\n    quadSubdivisionsCoordinateArr[4] = vec2(sx - sMinX, sz - sMinZ);\n\n\n    float heightMinXMinZ = _getHeightFromHeightMap(quadSubdivisionsCoordinateArr[0]);\n    float heightMaxXMinZ = _getHeightFromHeightMap(quadSubdivisionsCoordinateArr[1]);\n    float heightMaxXMaxZ = _getHeightFromHeightMap(quadSubdivisionsCoordinateArr[2]);\n    float heightMinXMaxZ = _getHeightFromHeightMap(quadSubdivisionsCoordinateArr[3]);\n\n    return _getBilinearInterpolatedHeight(quadSubdivisionsCoordinateArr[4], heightMinXMinZ, heightMaxXMinZ, heightMaxXMaxZ, heightMinXMaxZ);\n}\n",body: "",}
public static common_light:GLSLChunk = {top: "",define: "",varDeclare: "",funcDeclare: "",funcDefine: "vec3 getDirectionLightDir(vec3 lightPos){\n    return normalize(lightPos - vec3(0.0));\n}\n",body: "",}
}
export type GLSLChunk = {top?:string;define?:string;varDeclare?:string;funcDeclare?:string;funcDefine?:string;body?:string;}
}