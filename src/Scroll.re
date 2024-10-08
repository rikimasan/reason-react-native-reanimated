[@mel.module "react-native-reanimated"]
external scrollTo:
  (~animatedRef: Core.AnimatedRef.t, ~x: float, ~y: float, ~animated: bool) =>
  unit =
  "scrollTo";

[@mel.module "react-native-reanimated"]
external useScrollViewOffset:
  (Core.AnimatedRef.t, ~initialRef: Core.SharedValue.t(float)=?) =>
  Core.SharedValue.t(float) =
  "useScrollViewOffset";
let useScrollViewOffset = (~initialRef=?, animatedRef) =>
  useScrollViewOffset(animatedRef, ~initialRef?);

type reanimatedScrollEvent = [
  | `onScroll
  | `onBeginDrag
  | `onEndDrag
  | `onMomentumBegin
  | `onMomentumEnd
];

// TODO: scrollHandler can be made safer but any type for now
type scrollHandler('a) = (reanimatedScrollEvent, 'a) => unit;
type scrollHandlers('a) = {
  onScroll: option(scrollHandler('a)),
  onBeginDrag: option(scrollHandler('a)),
  onEndDrag: option(scrollHandler('a)),
  onMomentumBegin: option(scrollHandler('a)),
  onMomentumEnd: option(scrollHandler('a)),
};
type scrollHandlerProcessed;
[@mel.module "react-native-reanimated"]
external useAnimatedScrollHandler:
  (
    ~handlers: [@mel.unwrap] [
                 | `unified(scrollHandler('a))
                 | `distinct(scrollHandlers('a))
               ],
    ~dependencies: array('b)=?,
    unit
  ) =>
  scrollHandlerProcessed =
  "useAnimatedScrollHandler";
