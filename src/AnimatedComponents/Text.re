open ReactNative;

let makeProps = Text.makeProps;
let make = props => {
  React.createElement(Core.createAnimatedComponent(Text.make), props);
};
