open MeshRendererType;

let handleCloneComponent = (sourceComponent, countRangeArr: array(int), record) =>
  countRangeArr
  |> WonderCommonlib.ArraySystem.reduceOneParam(
       [@bs]
       (
         ((record, componentArr), _) => {
           let (record, index) = CreateMeshRendererService.create(record);
           (record, componentArr |> ArrayService.push(index))
         }
       ),
       (record, [||])
     );