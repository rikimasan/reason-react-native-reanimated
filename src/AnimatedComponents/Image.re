open ReactNative;

let makeProps = Image.makeProps;
let make = props => {
  React.createElement(Core.createAnimatedComponent(Image.make), props);
};
