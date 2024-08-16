open ReactNative;

[@react.component]
let make = props => props |> ScrollView.make |> Core.createAnimatedComponent;
