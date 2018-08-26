let assembleWDB = AssembleWDBAPI.assembleWDB;

let assembleGLB = AssembleWDBAPI.assembleGLB;

let convertGLBToWDB = ConverterAPI.convertGLBToWDB;

let generateWDB = GenerateSceneGraphAPI.generateWDB;

let generateGLBData = GenerateSceneGraphAPI.generateGLBData;

let loadIMGUIAsset = LoaderManagerAPI.loadIMGUIAsset;

let loadWDB = LoaderManagerAPI.loadWDB;

let loadConfig = LoaderManagerAPI.loadConfig;

let isBindArcballCameraControllerEvent = ArcballCameraControllerAPI.isBindArcballCameraControllerEvent;

let unbindArcballCameraControllerEvent = ArcballCameraControllerAPI.unbindArcballCameraControllerEvent;

let bindArcballCameraControllerEvent = ArcballCameraControllerAPI.bindArcballCameraControllerEvent;

let setArcballCameraControllerRotateSpeed = ArcballCameraControllerAPI.setArcballCameraControllerRotateSpeed;

let unsafeGetArcballCameraControllerRotateSpeed = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerRotateSpeed;

let setArcballCameraControllerMoveSpeedY = ArcballCameraControllerAPI.setArcballCameraControllerMoveSpeedY;

let unsafeGetArcballCameraControllerMoveSpeedY = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerMoveSpeedY;

let setArcballCameraControllerMoveSpeedX = ArcballCameraControllerAPI.setArcballCameraControllerMoveSpeedX;

let unsafeGetArcballCameraControllerMoveSpeedX = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerMoveSpeedX;

let setArcballCameraControllerTarget = ArcballCameraControllerAPI.setArcballCameraControllerTarget;

let unsafeGetArcballCameraControllerTarget = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerTarget;

let setArcballCameraControllerThetaMargin = ArcballCameraControllerAPI.setArcballCameraControllerThetaMargin;

let unsafeGetArcballCameraControllerThetaMargin = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerThetaMargin;

let setArcballCameraControllerTheta = ArcballCameraControllerAPI.setArcballCameraControllerTheta;

let unsafeGetArcballCameraControllerTheta = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerTheta;

let setArcballCameraControllerPhi = ArcballCameraControllerAPI.setArcballCameraControllerPhi;

let unsafeGetArcballCameraControllerPhi = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerPhi;

let setArcballCameraControllerWheelSpeed = ArcballCameraControllerAPI.setArcballCameraControllerWheelSpeed;

let unsafeGetArcballCameraControllerWheelSpeed = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerWheelSpeed;

let setArcballCameraControllerMinDistance = ArcballCameraControllerAPI.setArcballCameraControllerMinDistance;

let unsafeGetArcballCameraControllerMinDistance = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerMinDistance;

let setArcballCameraControllerDistance = ArcballCameraControllerAPI.setArcballCameraControllerDistance;

let unsafeGetArcballCameraControllerDistance = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerDistance;

let unsafeGetArcballCameraControllerGameObject = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerGameObject;

let createArcballCameraController = ArcballCameraControllerAPI.createArcballCameraController;

let getActiveBasicCameraView = BasicCameraViewAPI.getActiveBasicCameraView;

let setActiveBasicCameraView = BasicCameraViewAPI.setActiveBasicCameraView;

let unactiveBasicCameraView = BasicCameraViewAPI.unactiveBasicCameraView;

let activeBasicCameraView = BasicCameraViewAPI.activeBasicCameraView;

let isActiveBasicCameraView = BasicCameraViewAPI.isActiveBasicCameraView;

let getBasicCameraViewWorldToCameraMatrix = BasicCameraViewAPI.getBasicCameraViewWorldToCameraMatrix;

let unsafeGetBasicCameraViewGameObject = BasicCameraViewAPI.unsafeGetBasicCameraViewGameObject;

let createBasicCameraView = BasicCameraViewAPI.createBasicCameraView;

let setPerspectiveCameraProjectionFar = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionFar;

let unsafeGetPerspectiveCameraFar = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraFar;

let setPerspectiveCameraProjectionNear = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionNear;

let unsafeGetPerspectiveCameraNear = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraNear;

let setPerspectiveCameraProjectionAspect = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionAspect;

let unsafeGetPerspectiveCameraAspect = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraAspect;

let setPerspectiveCameraProjectionFovy = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionFovy;

let unsafeGetPerspectiveCameraFovy = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraFovy;

let unsafeGetPerspectiveCameraProjectionGameObject = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraProjectionGameObject;

let unsafeGetPerspectiveCameraProjectionPMatrix = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraProjectionPMatrix;

let createPerspectiveCameraProjection = PerspectiveCameraProjectionAPI.createPerspectiveCameraProjection;

let convertWorldToScreen = CoordinateAPI.convertWorldToScreen;

let isSupportRenderWorkerAndSharedArrayBuffer = WorkerDetectAPI.isSupportRenderWorkerAndSharedArrayBuffer;

let setViewport = DeviceManagerAPI.setViewport;

let unsafeGetGl = DeviceManagerAPI.unsafeGetGl;

let startDirector = DirectorAPI.startDirector;

let loopBody = DirectorAPI.loopBody;

let initDirector = DirectorAPI.initDirector;

let getPointEventEventOfEvent = ManageEventAPI.getPointEventEventOfEvent;

let getPointEventMovementDeltaOfEvent = ManageEventAPI.getPointEventMovementDeltaOfEvent;

let getPointEventWheelOfEvent = ManageEventAPI.getPointEventWheelOfEvent;

let getPointEventButtonOfEvent = ManageEventAPI.getPointEventButtonOfEvent;

let getPointEventLocationOfEvent = ManageEventAPI.getPointEventLocationOfEvent;

let getPointEventLocationInViewOfEvent = ManageEventAPI.getPointEventLocationInViewOfEvent;

let getCustomEventUserData = ManageEventAPI.getCustomEventUserData;

let createCustomEvent = ManageEventAPI.createCustomEvent;

let emitCustomGameObjectEvent = ManageEventAPI.emitCustomGameObjectEvent;

let broadcastCustomGameObjectEvent = ManageEventAPI.broadcastCustomGameObjectEvent;

let triggerCustomGameObjectEvent = ManageEventAPI.triggerCustomGameObjectEvent;

let triggerCustomGlobalEvent = ManageEventAPI.triggerCustomGlobalEvent;

let stopPropagationCustomEvent = ManageEventAPI.stopPropagationCustomEvent;

let offCustomGameObjectEventByHandleFunc = ManageEventAPI.offCustomGameObjectEventByHandleFunc;

let offCustomGameObjectEventByTarget = ManageEventAPI.offCustomGameObjectEventByTarget;

let onCustomGameObjectEvent = ManageEventAPI.onCustomGameObjectEvent;

let offCustomGlobalEventByHandleFunc = ManageEventAPI.offCustomGlobalEventByHandleFunc;

let offCustomGlobalEventByEventName = ManageEventAPI.offCustomGlobalEventByEventName;

let onCustomGlobalEvent = ManageEventAPI.onCustomGlobalEvent;

let offTouchEventByHandleFunc = ManageEventAPI.offTouchEventByHandleFunc;

let offKeyboardEventByHandleFunc = ManageEventAPI.offKeyboardEventByHandleFunc;

let offMouseEventByHandleFunc = ManageEventAPI.offMouseEventByHandleFunc;

let onTouchEvent = ManageEventAPI.onTouchEvent;

let onKeyboardEvent = ManageEventAPI.onKeyboardEvent;

let onMouseEvent = ManageEventAPI.onMouseEvent;

let getPointDragEventName = NameEventAPI.getPointDragEventName;

let getPointScaleEventName = NameEventAPI.getPointScaleEventName;

let getPointMoveEventName = NameEventAPI.getPointMoveEventName;

let getPointTapEventName = NameEventAPI.getPointTapEventName;

let getPointUpEventName = NameEventAPI.getPointUpEventName;

let getPointDownEventName = NameEventAPI.getPointDownEventName;

let getAllPointLightComponents = GameObjectAPI.getAllPointLightComponents;

let getAllDirectionLightComponents = GameObjectAPI.getAllDirectionLightComponents;

let getAllLightMaterialComponents = GameObjectAPI.getAllLightMaterialComponents;

let getAllBasicMaterialComponents = GameObjectAPI.getAllBasicMaterialComponents;

let getAllPerspectiveCameraProjectionComponents = GameObjectAPI.getAllPerspectiveCameraProjectionComponents;

let getAllBasicCameraViewComponents = GameObjectAPI.getAllBasicCameraViewComponents;

let getAllArcballCameraControllerComponents = GameObjectAPI.getAllArcballCameraControllerComponents;

let setGameObjectName = GameObjectAPI.setGameObjectName;

let unsafeGetGameObjectName = GameObjectAPI.unsafeGetGameObjectName;

let getGameObjectName = GameObjectAPI.getGameObjectName;

let cloneGameObject = GameObjectAPI.cloneGameObject;

let batchDisposeGameObjectKeepOrder = GameObjectAPI.batchDisposeGameObjectKeepOrder;

let batchDisposeGameObject = GameObjectAPI.batchDisposeGameObject;

let initGameObject = GameObjectAPI.initGameObject;

let disposeGameObjectKeepOrder = GameObjectAPI.disposeGameObjectKeepOrder;

let disposeGameObject = GameObjectAPI.disposeGameObject;

let isGameObjectAlive = GameObjectAPI.isGameObjectAlive;

let disposeGameObjectObjectInstanceComponent = GameObjectAPI.disposeGameObjectObjectInstanceComponent;

let unsafeGetGameObjectObjectInstanceComponent = GameObjectAPI.unsafeGetGameObjectObjectInstanceComponent;

let addGameObjectObjectInstanceComponent = GameObjectAPI.addGameObjectObjectInstanceComponent;

let disposeGameObjectSourceInstanceComponent = GameObjectAPI.disposeGameObjectSourceInstanceComponent;

let hasGameObjectSourceInstanceComponent = GameObjectAPI.hasGameObjectSourceInstanceComponent;

let unsafeGetGameObjectSourceInstanceComponent = GameObjectAPI.unsafeGetGameObjectSourceInstanceComponent;

let addGameObjectSourceInstanceComponent = GameObjectAPI.addGameObjectSourceInstanceComponent;

let hasGameObjectPointLightComponent = GameObjectAPI.hasGameObjectPointLightComponent;

let unsafeGetGameObjectPointLightComponent = GameObjectAPI.unsafeGetGameObjectPointLightComponent;

let disposeGameObjectPointLightComponent = GameObjectAPI.disposeGameObjectPointLightComponent;

let addGameObjectPointLightComponent = GameObjectAPI.addGameObjectPointLightComponent;

let hasGameObjectDirectionLightComponent = GameObjectAPI.hasGameObjectDirectionLightComponent;

let unsafeGetGameObjectDirectionLightComponent = GameObjectAPI.unsafeGetGameObjectDirectionLightComponent;

let disposeGameObjectDirectionLightComponent = GameObjectAPI.disposeGameObjectDirectionLightComponent;

let addGameObjectDirectionLightComponent = GameObjectAPI.addGameObjectDirectionLightComponent;

let hasGameObjectMeshRendererComponent = GameObjectAPI.hasGameObjectMeshRendererComponent;

let unsafeGetGameObjectMeshRendererComponent = GameObjectAPI.unsafeGetGameObjectMeshRendererComponent;

let disposeGameObjectMeshRendererComponent = GameObjectAPI.disposeGameObjectMeshRendererComponent;

let addGameObjectMeshRendererComponent = GameObjectAPI.addGameObjectMeshRendererComponent;

let hasGameObjectLightMaterialComponent = GameObjectAPI.hasGameObjectLightMaterialComponent;

let unsafeGetGameObjectLightMaterialComponent = GameObjectAPI.unsafeGetGameObjectLightMaterialComponent;

let disposeGameObjectLightMaterialComponent = GameObjectAPI.disposeGameObjectLightMaterialComponent;

let addGameObjectLightMaterialComponent = GameObjectAPI.addGameObjectLightMaterialComponent;

let hasGameObjectBasicMaterialComponent = GameObjectAPI.hasGameObjectBasicMaterialComponent;

let unsafeGetGameObjectBasicMaterialComponent = GameObjectAPI.unsafeGetGameObjectBasicMaterialComponent;

let disposeGameObjectBasicMaterialComponent = GameObjectAPI.disposeGameObjectBasicMaterialComponent;

let addGameObjectBasicMaterialComponent = GameObjectAPI.addGameObjectBasicMaterialComponent;

let hasGameObjectGeometryComponent = GameObjectAPI.hasGameObjectGeometryComponent;

let unsafeGetGameObjectGeometryComponent = GameObjectAPI.unsafeGetGameObjectGeometryComponent;

let removeGameObjectGeometryComponent = GameObjectAPI.removeGameObjectGeometryComponent;

let disposeGameObjectGeometryComponent = GameObjectAPI.disposeGameObjectGeometryComponent;

let addGameObjectGeometryComponent = GameObjectAPI.addGameObjectGeometryComponent;

let hasGameObjectTransformComponent = GameObjectAPI.hasGameObjectTransformComponent;

let unsafeGetGameObjectTransformComponent = GameObjectAPI.unsafeGetGameObjectTransformComponent;

let disposeGameObjectTransformComponent = GameObjectAPI.disposeGameObjectTransformComponent;

let addGameObjectTransformComponent = GameObjectAPI.addGameObjectTransformComponent;

let hasGameObjectArcballCameraControllerComponent = GameObjectAPI.hasGameObjectArcballCameraControllerComponent;

let unsafeGetGameObjectArcballCameraControllerComponent = GameObjectAPI.unsafeGetGameObjectArcballCameraControllerComponent;

let disposeGameObjectArcballCameraControllerComponent = GameObjectAPI.disposeGameObjectArcballCameraControllerComponent;

let addGameObjectArcballCameraControllerComponent = GameObjectAPI.addGameObjectArcballCameraControllerComponent;

let hasGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.hasGameObjectPerspectiveCameraProjectionComponent;

let unsafeGetGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.unsafeGetGameObjectPerspectiveCameraProjectionComponent;

let disposeGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.disposeGameObjectPerspectiveCameraProjectionComponent;

let addGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.addGameObjectPerspectiveCameraProjectionComponent;

let hasGameObjectBasicCameraViewComponent = GameObjectAPI.hasGameObjectBasicCameraViewComponent;

let unsafeGetGameObjectBasicCameraViewComponent = GameObjectAPI.unsafeGetGameObjectBasicCameraViewComponent;

let disposeGameObjectBasicCameraViewComponent = GameObjectAPI.disposeGameObjectBasicCameraViewComponent;

let addGameObjectBasicCameraViewComponent = GameObjectAPI.addGameObjectBasicCameraViewComponent;

let createGameObject = GameObjectAPI.createGameObject;

let setGeometryName = GeometryAPI.setGeometryName;

let unsafeGetGeometryName = GeometryAPI.unsafeGetGeometryName;

let unsafeGetGeometryGameObjects = GeometryAPI.unsafeGetGeometryGameObjects;

let setGeometryIndices = GeometryAPI.setGeometryIndices;

let getGeometryIndices = GeometryAPI.getGeometryIndices;

let setGeometryNormals = GeometryAPI.setGeometryNormals;

let getGeometryNormals = GeometryAPI.getGeometryNormals;

let setGeometryTexCoords = GeometryAPI.setGeometryTexCoords;

let getGeometryTexCoords = GeometryAPI.getGeometryTexCoords;

let setGeometryVertices = GeometryAPI.setGeometryVertices;

let getGeometryVertices = GeometryAPI.getGeometryVertices;

let createSphereGeometry = GeometryAPI.createSphereGeometry;

let createBoxGeometry = GeometryAPI.createBoxGeometry;

let createGeometry = GeometryAPI.createGeometry;

let hasGameObjectCameraGroupComponents = CameraGroupAPI.hasGameObjectCameraGroupComponents;

let unsafeGetGameObjectCameraGroupComponents = CameraGroupAPI.unsafeGetGameObjectCameraGroupComponents;

let disposeGameObjectCameraGroupComponents = CameraGroupAPI.disposeGameObjectCameraGroupComponents;

let addGameObjectCameraGroupComponents = CameraGroupAPI.addGameObjectCameraGroupComponents;

let createCameraGroup = CameraGroupAPI.createCameraGroup;

let replaceRenderGroupComponents = RenderGroupAPI.replaceRenderGroupComponents;

let hasGameObjectRenderGroupComponents = RenderGroupAPI.hasGameObjectRenderGroupComponents;

let unsafeGetGameObjectRenderGroupComponents = RenderGroupAPI.unsafeGetGameObjectRenderGroupComponents;

let disposeGameObjectRenderGroupComponents = RenderGroupAPI.disposeGameObjectRenderGroupComponents;

let addGameObjectRenderGroupComponents = RenderGroupAPI.addGameObjectRenderGroupComponents;

let createRenderGroup = RenderGroupAPI.createRenderGroup;

let image = FixedLayoutControlIMGUIAPI.image;

let label = FixedLayoutControlIMGUIAPI.label;

let sendUniformProjectionMatData = ManageIMGUIAPI.sendUniformProjectionMatData;

let setSetting = ManageIMGUIAPI.setSetting;

let getSetting = ManageIMGUIAPI.getSetting;

let setIMGUIFunc = ManageIMGUIAPI.setIMGUIFunc;

let removeWorkerMainLoopJob = JobAPI.removeWorkerMainLoopJob;

let addWorkerMainLoopJob = JobAPI.addWorkerMainLoopJob;

let removeWorkerMainInitJob = JobAPI.removeWorkerMainInitJob;

let addWorkerMainInitJob = JobAPI.addWorkerMainInitJob;

let removeNoWorkerLoopJob = JobAPI.removeNoWorkerLoopJob;

let removeNoWorkerInitJob = JobAPI.removeNoWorkerInitJob;

let addNoWorkerLoopJob = JobAPI.addNoWorkerLoopJob;

let addNoWorkerInitJob = JobAPI.addNoWorkerInitJob;

let isMaxCount = DirectionLightAPI.isMaxCount;

let setDirectionLightIntensity = DirectionLightAPI.setDirectionLightIntensity;

let getDirectionLightIntensity = DirectionLightAPI.getDirectionLightIntensity;

let setDirectionLightColor = DirectionLightAPI.setDirectionLightColor;

let getDirectionLightColor = DirectionLightAPI.getDirectionLightColor;

let unsafeGetDirectionLightGameObject = DirectionLightAPI.unsafeGetDirectionLightGameObject;

let createDirectionLight = DirectionLightAPI.createDirectionLight;

let isMaxCount = PointLightAPI.isMaxCount;

let setPointLightRangeLevel = PointLightAPI.setPointLightRangeLevel;

let setPointLightRange = PointLightAPI.setPointLightRange;

let getPointLightRange = PointLightAPI.getPointLightRange;

let setPointLightQuadratic = PointLightAPI.setPointLightQuadratic;

let getPointLightQuadratic = PointLightAPI.getPointLightQuadratic;

let setPointLightLinear = PointLightAPI.setPointLightLinear;

let getPointLightLinear = PointLightAPI.getPointLightLinear;

let setPointLightConstant = PointLightAPI.setPointLightConstant;

let getPointLightConstant = PointLightAPI.getPointLightConstant;

let setPointLightIntensity = PointLightAPI.setPointLightIntensity;

let getPointLightIntensity = PointLightAPI.getPointLightIntensity;

let setPointLightColor = PointLightAPI.setPointLightColor;

let getPointLightColor = PointLightAPI.getPointLightColor;

let unsafeGetPointLightGameObject = PointLightAPI.unsafeGetPointLightGameObject;

let createPointLight = PointLightAPI.createPointLight;

let batchDisposeBasicMaterial = BasicMaterialAPI.batchDisposeBasicMaterial;

let setBasicMaterialName = BasicMaterialAPI.setBasicMaterialName;

let unsafeGetBasicMaterialName = BasicMaterialAPI.unsafeGetBasicMaterialName;

let hasBasicMaterialMap = BasicMaterialAPI.hasBasicMaterialMap;

let setBasicMaterialMap = BasicMaterialAPI.setBasicMaterialMap;

let unsafeGetBasicMaterialMap = BasicMaterialAPI.unsafeGetBasicMaterialMap;

let setBasicMaterialColor = BasicMaterialAPI.setBasicMaterialColor;

let getBasicMaterialColor = BasicMaterialAPI.getBasicMaterialColor;

let unsafeGetBasicMaterialGameObject = BasicMaterialAPI.unsafeGetBasicMaterialGameObject;

let createBasicMaterial = BasicMaterialAPI.createBasicMaterial;

let batchDisposeLightMaterial = LightMaterialAPI.batchDisposeLightMaterial;

let reInitMaterials = LightMaterialAPI.reInitMaterials;

let setLightMaterialName = LightMaterialAPI.setLightMaterialName;

let unsafeGetLightMaterialName = LightMaterialAPI.unsafeGetLightMaterialName;

let hasLightMaterialSpecularMap = LightMaterialAPI.hasLightMaterialSpecularMap;

let setLightMaterialSpecularMap = LightMaterialAPI.setLightMaterialSpecularMap;

let unsafeGetLightMaterialSpecularMap = LightMaterialAPI.unsafeGetLightMaterialSpecularMap;

let hasLightMaterialDiffuseMap = LightMaterialAPI.hasLightMaterialDiffuseMap;

let setLightMaterialDiffuseMap = LightMaterialAPI.setLightMaterialDiffuseMap;

let unsafeGetLightMaterialDiffuseMap = LightMaterialAPI.unsafeGetLightMaterialDiffuseMap;

let setLightMaterialShininess = LightMaterialAPI.setLightMaterialShininess;

let getLightMaterialShininess = LightMaterialAPI.getLightMaterialShininess;

let setLightMaterialSpecularColor = LightMaterialAPI.setLightMaterialSpecularColor;

let getLightMaterialSpecularColor = LightMaterialAPI.getLightMaterialSpecularColor;

let setLightMaterialDiffuseColor = LightMaterialAPI.setLightMaterialDiffuseColor;

let getLightMaterialDiffuseColor = LightMaterialAPI.getLightMaterialDiffuseColor;

let unsafeGetLightMaterialGameObject = LightMaterialAPI.unsafeGetLightMaterialGameObject;

let createLightMaterial = LightMaterialAPI.createLightMaterial;

let setMeshRendererDrawMode = MeshRendererAPI.setMeshRendererDrawMode;

let getMeshRendererDrawMode = MeshRendererAPI.getMeshRendererDrawMode;

let unsafeGetMeshRendererGameObject = MeshRendererAPI.unsafeGetMeshRendererGameObject;

let createMeshRenderer = MeshRendererAPI.createMeshRenderer;

let addSceneChildren = SceneAPI.addSceneChildren;

let addSceneChild = SceneAPI.addSceneChild;

let setSceneGameObject = SceneAPI.setSceneGameObject;

let getSceneGameObject = SceneAPI.getSceneGameObject;

let setAmbientLightColor = SceneAPI.setAmbientLightColor;

let getAmbientLightColor = SceneAPI.getAmbientLightColor;

let setScreenSize = ScreenAPI.setScreenSize;

let markSourceInstanceModelMatrixIsStatic = SourceInstanceAPI.markSourceInstanceModelMatrixIsStatic;

let getSourceInstanceObjectInstanceTransformArray = SourceInstanceAPI.getSourceInstanceObjectInstanceTransformArray;

let createObjectInstanceGameObject = SourceInstanceAPI.createObjectInstanceGameObject;

let unsafeGetSourceInstanceGameObject = SourceInstanceAPI.unsafeGetSourceInstanceGameObject;

let createSourceInstance = SourceInstanceAPI.createSourceInstance;

let setSetStateFunc = StateAPI.setSetStateFunc;

let setUnsafeGetStateFunc = StateAPI.setUnsafeGetStateFunc;

let setIsDebug = StateAPI.setIsDebug;

let setStateToData = StateAPI.setStateToData;

let setState = StateAPI.setState;

let createState = StateAPI.createState;

let getStateFromData = StateAPI.getStateFromData;

let unsafeGetState = StateAPI.unsafeGetState;

let createStateData = StateAPI.createStateData;

let getStateData = StateAPI.getStateData;

let restoreState = StateAPI.restoreState;

let deepCopyForRestore = StateAPI.deepCopyForRestore;

let setSparseMapValue = SparseMapAPI.setSparseMapValue;

let getSparseMapValue = SparseMapAPI.getSparseMapValue;

let unsafeGetSparseMapValue = SparseMapAPI.unsafeGetSparseMapValue;

let createSparseMap = SparseMapAPI.createSparseMap;

let setArrayBufferViewSourceTextureName = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureName;

let unsafeGetArrayBufferViewSourceTextureName = ArrayBufferViewSourceTextureAPI.unsafeGetArrayBufferViewSourceTextureName;

let setArrayBufferViewSourceTextureHeight = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureHeight;

let getArrayBufferViewSourceTextureHeight = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureHeight;

let setArrayBufferViewSourceTextureWidth = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureWidth;

let getArrayBufferViewSourceTextureWidth = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureWidth;

let setArrayBufferViewSourceTextureFlipY = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureFlipY;

let getArrayBufferViewSourceTextureFlipY = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureFlipY;

let setArrayBufferViewSourceTextureType = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureType;

let getArrayBufferViewSourceTextureType = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureType;

let setArrayBufferViewSourceTextureFormat = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureFormat;

let getArrayBufferViewSourceTextureFormat = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureFormat;

let setArrayBufferViewSourceTextureMinFilter = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureMinFilter;

let getArrayBufferViewSourceTextureMinFilter = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureMinFilter;

let setArrayBufferViewSourceTextureMagFilter = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureMagFilter;

let getArrayBufferViewSourceTextureMagFilter = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureMagFilter;

let setArrayBufferViewSourceTextureWrapT = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureWrapT;

let getArrayBufferViewSourceTextureWrapT = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureWrapT;

let setArrayBufferViewSourceTextureWrapS = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureWrapS;

let getArrayBufferViewSourceTextureWrapS = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureWrapS;

let getArrayBufferViewSourceTextureHeight = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureHeight;

let getArrayBufferViewSourceTextureWidth = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureWidth;

let setArrayBufferViewSourceTextureSource = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureSource;

let unsafeGetArrayBufferViewSourceTextureSource = ArrayBufferViewSourceTextureAPI.unsafeGetArrayBufferViewSourceTextureSource;

let createArrayBufferViewSourceTexture = ArrayBufferViewSourceTextureAPI.createArrayBufferViewSourceTexture;

let setBasicSourceTextureName = BasicSourceTextureAPI.setBasicSourceTextureName;

let unsafeGetBasicSourceTextureName = BasicSourceTextureAPI.unsafeGetBasicSourceTextureName;

let getBasicSourceTextureName = BasicSourceTextureAPI.getBasicSourceTextureName;

let setBasicSourceTextureFlipY = BasicSourceTextureAPI.setBasicSourceTextureFlipY;

let getBasicSourceTextureFlipY = BasicSourceTextureAPI.getBasicSourceTextureFlipY;

let setBasicSourceTextureType = BasicSourceTextureAPI.setBasicSourceTextureType;

let getBasicSourceTextureType = BasicSourceTextureAPI.getBasicSourceTextureType;

let setBasicSourceTextureFormat = BasicSourceTextureAPI.setBasicSourceTextureFormat;

let getBasicSourceTextureFormat = BasicSourceTextureAPI.getBasicSourceTextureFormat;

let setBasicSourceTextureMinFilter = BasicSourceTextureAPI.setBasicSourceTextureMinFilter;

let getBasicSourceTextureMinFilter = BasicSourceTextureAPI.getBasicSourceTextureMinFilter;

let setBasicSourceTextureMagFilter = BasicSourceTextureAPI.setBasicSourceTextureMagFilter;

let getBasicSourceTextureMagFilter = BasicSourceTextureAPI.getBasicSourceTextureMagFilter;

let setBasicSourceTextureWrapT = BasicSourceTextureAPI.setBasicSourceTextureWrapT;

let getBasicSourceTextureWrapT = BasicSourceTextureAPI.getBasicSourceTextureWrapT;

let setBasicSourceTextureWrapS = BasicSourceTextureAPI.setBasicSourceTextureWrapS;

let getBasicSourceTextureWrapS = BasicSourceTextureAPI.getBasicSourceTextureWrapS;

let getBasicSourceTextureHeight = BasicSourceTextureAPI.getBasicSourceTextureHeight;

let getBasicSourceTextureWidth = BasicSourceTextureAPI.getBasicSourceTextureWidth;

let setBasicSourceTextureSource = BasicSourceTextureAPI.setBasicSourceTextureSource;

let unsafeGetBasicSourceTextureSource = BasicSourceTextureAPI.unsafeGetBasicSourceTextureSource;

let createBasicSourceTexture = BasicSourceTextureAPI.createBasicSourceTexture;

let getFps = TimeControllerAPI.getFps;

let getGameTime = TimeControllerAPI.getGameTime;

let lookAtWithUp = TransformAPI.lookAtWithUp;

let lookAt = TransformAPI.lookAt;

let setTransformEulerAngles = TransformAPI.setTransformEulerAngles;

let getTransformEulerAngles = TransformAPI.getTransformEulerAngles;

let setTransformLocalEulerAngles = TransformAPI.setTransformLocalEulerAngles;

let getTransformLocalEulerAngles = TransformAPI.getTransformLocalEulerAngles;

let setTransformScale = TransformAPI.setTransformScale;

let getTransformScale = TransformAPI.getTransformScale;

let setTransformLocalScale = TransformAPI.setTransformLocalScale;

let getTransformLocalScale = TransformAPI.getTransformLocalScale;

let setTransformRotation = TransformAPI.setTransformRotation;

let getTransformRotation = TransformAPI.getTransformRotation;

let setTransformLocalRotation = TransformAPI.setTransformLocalRotation;

let getTransformLocalRotation = TransformAPI.getTransformLocalRotation;

let setTransformPosition = TransformAPI.setTransformPosition;

let getTransformPosition = TransformAPI.getTransformPosition;

let setTransformLocalPosition = TransformAPI.setTransformLocalPosition;

let getTransformLocalPosition = TransformAPI.getTransformLocalPosition;

let unsafeGetTransformChildren = TransformAPI.unsafeGetTransformChildren;

let setTransformParentKeepOrder = TransformAPI.setTransformParentKeepOrder;

let setTransformParent = TransformAPI.setTransformParent;

let unsafeGetTransformParent = TransformAPI.unsafeGetTransformParent;

let unsafeGetTransformGameObject = TransformAPI.unsafeGetTransformGameObject;

let createTransform = TransformAPI.createTransform;

let setMainWorkerCustomData = WorkerDataAPI.setMainWorkerCustomData;

let getMainWorkerCustomData = WorkerDataAPI.getMainWorkerCustomData;

let getRenderWorkerCustomData = WorkerDataAPI.getRenderWorkerCustomData;

let create = RecordAPIMainService.create;

let setAPIJsObj = RecordAPIMainService.setAPIJsObj;

let getAPIJsObj = RecordAPIMainService.getAPIJsObj;

let create = RecordAPIRenderWorkerService.create;

let setAPIJsObj = RecordAPIRenderWorkerService.setAPIJsObj;

let getAPIJsObj = RecordAPIRenderWorkerService.getAPIJsObj;

let convertWorldToScreen = CoordinateAPI.convertWorldToScreen;

let setViewport = DeviceManagerAPI.setViewport;

let unsafeGetGl = DeviceManagerAPI.unsafeGetGl;

let startDirector = DirectorAPI.startDirector;

let loopBody = DirectorAPI.loopBody;

let initDirector = DirectorAPI.initDirector;

let getAllPointLightComponents = GameObjectAPI.getAllPointLightComponents;

let getAllDirectionLightComponents = GameObjectAPI.getAllDirectionLightComponents;

let getAllLightMaterialComponents = GameObjectAPI.getAllLightMaterialComponents;

let getAllBasicMaterialComponents = GameObjectAPI.getAllBasicMaterialComponents;

let getAllPerspectiveCameraProjectionComponents = GameObjectAPI.getAllPerspectiveCameraProjectionComponents;

let getAllBasicCameraViewComponents = GameObjectAPI.getAllBasicCameraViewComponents;

let getAllArcballCameraControllerComponents = GameObjectAPI.getAllArcballCameraControllerComponents;

let setGameObjectName = GameObjectAPI.setGameObjectName;

let unsafeGetGameObjectName = GameObjectAPI.unsafeGetGameObjectName;

let getGameObjectName = GameObjectAPI.getGameObjectName;

let cloneGameObject = GameObjectAPI.cloneGameObject;

let batchDisposeGameObjectKeepOrder = GameObjectAPI.batchDisposeGameObjectKeepOrder;

let batchDisposeGameObject = GameObjectAPI.batchDisposeGameObject;

let initGameObject = GameObjectAPI.initGameObject;

let disposeGameObjectKeepOrder = GameObjectAPI.disposeGameObjectKeepOrder;

let disposeGameObject = GameObjectAPI.disposeGameObject;

let isGameObjectAlive = GameObjectAPI.isGameObjectAlive;

let disposeGameObjectObjectInstanceComponent = GameObjectAPI.disposeGameObjectObjectInstanceComponent;

let unsafeGetGameObjectObjectInstanceComponent = GameObjectAPI.unsafeGetGameObjectObjectInstanceComponent;

let addGameObjectObjectInstanceComponent = GameObjectAPI.addGameObjectObjectInstanceComponent;

let disposeGameObjectSourceInstanceComponent = GameObjectAPI.disposeGameObjectSourceInstanceComponent;

let hasGameObjectSourceInstanceComponent = GameObjectAPI.hasGameObjectSourceInstanceComponent;

let unsafeGetGameObjectSourceInstanceComponent = GameObjectAPI.unsafeGetGameObjectSourceInstanceComponent;

let addGameObjectSourceInstanceComponent = GameObjectAPI.addGameObjectSourceInstanceComponent;

let hasGameObjectPointLightComponent = GameObjectAPI.hasGameObjectPointLightComponent;

let unsafeGetGameObjectPointLightComponent = GameObjectAPI.unsafeGetGameObjectPointLightComponent;

let disposeGameObjectPointLightComponent = GameObjectAPI.disposeGameObjectPointLightComponent;

let addGameObjectPointLightComponent = GameObjectAPI.addGameObjectPointLightComponent;

let hasGameObjectDirectionLightComponent = GameObjectAPI.hasGameObjectDirectionLightComponent;

let unsafeGetGameObjectDirectionLightComponent = GameObjectAPI.unsafeGetGameObjectDirectionLightComponent;

let disposeGameObjectDirectionLightComponent = GameObjectAPI.disposeGameObjectDirectionLightComponent;

let addGameObjectDirectionLightComponent = GameObjectAPI.addGameObjectDirectionLightComponent;

let hasGameObjectMeshRendererComponent = GameObjectAPI.hasGameObjectMeshRendererComponent;

let unsafeGetGameObjectMeshRendererComponent = GameObjectAPI.unsafeGetGameObjectMeshRendererComponent;

let disposeGameObjectMeshRendererComponent = GameObjectAPI.disposeGameObjectMeshRendererComponent;

let addGameObjectMeshRendererComponent = GameObjectAPI.addGameObjectMeshRendererComponent;

let hasGameObjectLightMaterialComponent = GameObjectAPI.hasGameObjectLightMaterialComponent;

let unsafeGetGameObjectLightMaterialComponent = GameObjectAPI.unsafeGetGameObjectLightMaterialComponent;

let disposeGameObjectLightMaterialComponent = GameObjectAPI.disposeGameObjectLightMaterialComponent;

let addGameObjectLightMaterialComponent = GameObjectAPI.addGameObjectLightMaterialComponent;

let hasGameObjectBasicMaterialComponent = GameObjectAPI.hasGameObjectBasicMaterialComponent;

let unsafeGetGameObjectBasicMaterialComponent = GameObjectAPI.unsafeGetGameObjectBasicMaterialComponent;

let disposeGameObjectBasicMaterialComponent = GameObjectAPI.disposeGameObjectBasicMaterialComponent;

let addGameObjectBasicMaterialComponent = GameObjectAPI.addGameObjectBasicMaterialComponent;

let hasGameObjectGeometryComponent = GameObjectAPI.hasGameObjectGeometryComponent;

let unsafeGetGameObjectGeometryComponent = GameObjectAPI.unsafeGetGameObjectGeometryComponent;

let removeGameObjectGeometryComponent = GameObjectAPI.removeGameObjectGeometryComponent;

let disposeGameObjectGeometryComponent = GameObjectAPI.disposeGameObjectGeometryComponent;

let addGameObjectGeometryComponent = GameObjectAPI.addGameObjectGeometryComponent;

let hasGameObjectTransformComponent = GameObjectAPI.hasGameObjectTransformComponent;

let unsafeGetGameObjectTransformComponent = GameObjectAPI.unsafeGetGameObjectTransformComponent;

let disposeGameObjectTransformComponent = GameObjectAPI.disposeGameObjectTransformComponent;

let addGameObjectTransformComponent = GameObjectAPI.addGameObjectTransformComponent;

let hasGameObjectArcballCameraControllerComponent = GameObjectAPI.hasGameObjectArcballCameraControllerComponent;

let unsafeGetGameObjectArcballCameraControllerComponent = GameObjectAPI.unsafeGetGameObjectArcballCameraControllerComponent;

let disposeGameObjectArcballCameraControllerComponent = GameObjectAPI.disposeGameObjectArcballCameraControllerComponent;

let addGameObjectArcballCameraControllerComponent = GameObjectAPI.addGameObjectArcballCameraControllerComponent;

let hasGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.hasGameObjectPerspectiveCameraProjectionComponent;

let unsafeGetGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.unsafeGetGameObjectPerspectiveCameraProjectionComponent;

let disposeGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.disposeGameObjectPerspectiveCameraProjectionComponent;

let addGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.addGameObjectPerspectiveCameraProjectionComponent;

let hasGameObjectBasicCameraViewComponent = GameObjectAPI.hasGameObjectBasicCameraViewComponent;

let unsafeGetGameObjectBasicCameraViewComponent = GameObjectAPI.unsafeGetGameObjectBasicCameraViewComponent;

let disposeGameObjectBasicCameraViewComponent = GameObjectAPI.disposeGameObjectBasicCameraViewComponent;

let addGameObjectBasicCameraViewComponent = GameObjectAPI.addGameObjectBasicCameraViewComponent;

let createGameObject = GameObjectAPI.createGameObject;

let removeWorkerMainLoopJob = JobAPI.removeWorkerMainLoopJob;

let addWorkerMainLoopJob = JobAPI.addWorkerMainLoopJob;

let removeWorkerMainInitJob = JobAPI.removeWorkerMainInitJob;

let addWorkerMainInitJob = JobAPI.addWorkerMainInitJob;

let removeNoWorkerLoopJob = JobAPI.removeNoWorkerLoopJob;

let removeNoWorkerInitJob = JobAPI.removeNoWorkerInitJob;

let addNoWorkerLoopJob = JobAPI.addNoWorkerLoopJob;

let addNoWorkerInitJob = JobAPI.addNoWorkerInitJob;

let setMeshRendererDrawMode = MeshRendererAPI.setMeshRendererDrawMode;

let getMeshRendererDrawMode = MeshRendererAPI.getMeshRendererDrawMode;

let unsafeGetMeshRendererGameObject = MeshRendererAPI.unsafeGetMeshRendererGameObject;

let createMeshRenderer = MeshRendererAPI.createMeshRenderer;

let addSceneChildren = SceneAPI.addSceneChildren;

let addSceneChild = SceneAPI.addSceneChild;

let setSceneGameObject = SceneAPI.setSceneGameObject;

let getSceneGameObject = SceneAPI.getSceneGameObject;

let setAmbientLightColor = SceneAPI.setAmbientLightColor;

let getAmbientLightColor = SceneAPI.getAmbientLightColor;

let setScreenSize = ScreenAPI.setScreenSize;

let markSourceInstanceModelMatrixIsStatic = SourceInstanceAPI.markSourceInstanceModelMatrixIsStatic;

let getSourceInstanceObjectInstanceTransformArray = SourceInstanceAPI.getSourceInstanceObjectInstanceTransformArray;

let createObjectInstanceGameObject = SourceInstanceAPI.createObjectInstanceGameObject;

let unsafeGetSourceInstanceGameObject = SourceInstanceAPI.unsafeGetSourceInstanceGameObject;

let createSourceInstance = SourceInstanceAPI.createSourceInstance;

let setSetStateFunc = StateAPI.setSetStateFunc;

let setUnsafeGetStateFunc = StateAPI.setUnsafeGetStateFunc;

let setIsDebug = StateAPI.setIsDebug;

let setStateToData = StateAPI.setStateToData;

let setState = StateAPI.setState;

let createState = StateAPI.createState;

let getStateFromData = StateAPI.getStateFromData;

let unsafeGetState = StateAPI.unsafeGetState;

let createStateData = StateAPI.createStateData;

let getStateData = StateAPI.getStateData;

let restoreState = StateAPI.restoreState;

let deepCopyForRestore = StateAPI.deepCopyForRestore;

let getFps = TimeControllerAPI.getFps;

let getGameTime = TimeControllerAPI.getGameTime;

let lookAtWithUp = TransformAPI.lookAtWithUp;

let lookAt = TransformAPI.lookAt;

let setTransformEulerAngles = TransformAPI.setTransformEulerAngles;

let getTransformEulerAngles = TransformAPI.getTransformEulerAngles;

let setTransformLocalEulerAngles = TransformAPI.setTransformLocalEulerAngles;

let getTransformLocalEulerAngles = TransformAPI.getTransformLocalEulerAngles;

let setTransformScale = TransformAPI.setTransformScale;

let getTransformScale = TransformAPI.getTransformScale;

let setTransformLocalScale = TransformAPI.setTransformLocalScale;

let getTransformLocalScale = TransformAPI.getTransformLocalScale;

let setTransformRotation = TransformAPI.setTransformRotation;

let getTransformRotation = TransformAPI.getTransformRotation;

let setTransformLocalRotation = TransformAPI.setTransformLocalRotation;

let getTransformLocalRotation = TransformAPI.getTransformLocalRotation;

let setTransformPosition = TransformAPI.setTransformPosition;

let getTransformPosition = TransformAPI.getTransformPosition;

let setTransformLocalPosition = TransformAPI.setTransformLocalPosition;

let getTransformLocalPosition = TransformAPI.getTransformLocalPosition;

let unsafeGetTransformChildren = TransformAPI.unsafeGetTransformChildren;

let setTransformParentKeepOrder = TransformAPI.setTransformParentKeepOrder;

let setTransformParent = TransformAPI.setTransformParent;

let unsafeGetTransformParent = TransformAPI.unsafeGetTransformParent;

let unsafeGetTransformGameObject = TransformAPI.unsafeGetTransformGameObject;

let createTransform = TransformAPI.createTransform;

let create = RecordAPIMainService.create;

let setAPIJsObj = RecordAPIMainService.setAPIJsObj;

let getAPIJsObj = RecordAPIMainService.getAPIJsObj;

let create = RecordAPIRenderWorkerService.create;

let setAPIJsObj = RecordAPIRenderWorkerService.setAPIJsObj;

let getAPIJsObj = RecordAPIRenderWorkerService.getAPIJsObj;