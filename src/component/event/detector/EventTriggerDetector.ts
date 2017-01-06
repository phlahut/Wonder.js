module wd{
    export abstract class EventTriggerDetector extends Component{
        //public triggerMode:EventTriggerMode = EventTriggerMode.TOP;

        public abstract isTrigger(e:PointEvent):boolean;

        public clone(){
            return CloneUtils.clone(this);
        }
    }
}

