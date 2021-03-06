open PerspectiveCameraProjectionType;

let handleAddComponent =
  (. cameraProjection, gameObjectUid: int, {gameObjectMap} as record) => {
    ...record,
    gameObjectMap:
      AddComponentService.addComponentToGameObjectMap(
        cameraProjection,
        gameObjectUid,
        gameObjectMap,
      ),
  };