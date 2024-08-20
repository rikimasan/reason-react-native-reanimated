open ReactNative;

let makeProps = ScrollView.makeProps;
let make = props => {
  React.createElement(Core.createAnimatedComponent(ScrollView.make), props);
};
