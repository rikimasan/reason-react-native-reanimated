open ReactNative;

[@react.component]
let make = props => props |> FlatList.make |> Core.createAnimatedComponent;
