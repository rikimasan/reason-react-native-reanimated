open ReactNative;

[@react.component]
let make = props => props |> Text.make |> Core.createAnimatedComponent;
