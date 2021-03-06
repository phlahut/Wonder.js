open StateDataMainType;

open Js.Typed_array;

let execJob = (_, state) => {
  ...state,
  renderRecord:
    Some({
      ...RecordRenderMainService.getRecord(state),
      lightRenderObjectRecord: CreateLightRenderObjectBufferJobUtils.execJob(state)
    })
};