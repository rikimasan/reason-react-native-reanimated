open ReactNative;

[@react.component]
let make = props => props |> Image.make |> Core.createAnimatedComponent;
