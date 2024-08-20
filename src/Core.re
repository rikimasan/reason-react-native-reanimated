module SharedValue = {
  type t('a) = 'a;

  external sharedValue: t('a) = "SharedValue";

  [@mel.send.pipe: t('a)]
  external addListener: (int, 'a => unit) => unit = "addListener";

  [@mel.send.pipe: t('a)]
  external removeListener: int => unit = "removeListener";

  [@mel.send.pipe: t('a)]
  external modify: (~modifier: 'a => 'a=?, ~forceUpdate: bool=?, unit) => unit =
    "modify";
};
[@mel.module "react-native-reanimated"]
external useSharedValue: (~value: 'a) => SharedValue.t('a) = "useSharedValue";

[@mel.module "react-native-reanimated"]
external useAnimatedStyle:
  (~updater: unit => ReactNative.Style.t, ~dependencies: array('a)=?, unit) =>
  ReactNative.Style.t =
  "useAnimatedStyle";

// TODO: implement adapters bindings
[@mel.module "react-native-reanimated"]
external useAnimatedProps:
  (
    ~updater: unit => ReactNative.Style.t,
    ~dependencies: array('a)=?,
    ~adapters: unit=?,
    unit
  ) =>
  ReactNative.Style.t =
  "useAnimatedProps";

module AnimatedRef = {
  type t = ReactNative.Ref.t(ReactNative.NativeElement.element);

  [@mel.send] external current: t => t = "current";
};
[@mel.module "react-native-reanimated"]
external useAnimatedRef: unit => AnimatedRef.t = "useAnimatedRef";

[@mel.module "react-native-reanimated"]
external useDerivedValue:
  (~updater: unit => SharedValue.t('a), ~dependencies: array('b)=?, unit) =>
  SharedValue.t('a) =
  "useDerivedValue";

[@mel.module "react-native-reanimated"] [@mel.scope "Animated"]
external createAnimatedComponent:
  React.component('props) => React.component('props) =
  "createAnimatedComponent";

[@mel.module "react-native-reanimated"]
external cancelAnimation: (~value: SharedValue.t('a)) => unit =
  "cancelAnimation";
