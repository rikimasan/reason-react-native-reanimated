open ReactNative;

let makeProps = Fun.id;
let make = props => {
  React.createElement(Core.createAnimatedComponent(View.make), props);
};
