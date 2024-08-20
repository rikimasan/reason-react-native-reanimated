open ReactNative;

let makeProps = View.makeProps;
let make = props => {
  React.createElement(Core.createAnimatedComponent(View.make), props);
};
