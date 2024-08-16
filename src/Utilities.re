type extrapolate = [ | `identity | `clamp | `extend];

type interpolationOptions = {
  gamma: option(float),
  useCorrectedHSVInterpolation: option(bool),
};

type componentCoords = {
  x: float,
  y: float,
};

[@mel.module "react-native-reanimated"]
external interpolate:
  (
    ~value: float,
    ~input: array(float),
    ~output: array(float),
    ~extrapolate: extrapolate=?,
    unit
  ) =>
  float =
  "interpolate";

[@mel.module "react-native-reanimated"]
external clamp: (~value: float, ~min: float, ~max: float) => float = "clamp";

[@mel.module "react-native-reanimated"]
external interpolateColor:
  (
    ~value: float,
    ~input: array(float),
    ~output: array(string),
    ~colorSpace: [ | `RGB | `HSV]=?,
    ~options: interpolationOptions=?,
    unit
  ) =>
  string =
  "interpolateColor";

[@mel.module "react-native-reanimated"]
external getRelativeCoords: (~animatedRef: Core.animatedRef) => componentCoords =
  "getRelativeCoords";
