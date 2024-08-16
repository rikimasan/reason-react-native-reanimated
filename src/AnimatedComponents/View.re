open ReactNative;

[@react.component]
let make = props => props |> View.make |> Core.createAnimatedComponent;
