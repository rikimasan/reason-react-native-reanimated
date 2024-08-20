module Styles = {
  let container = ReactNative.Style.style(~flex=1., ~alignItems=`center, ());
  let box =
    ReactNative.Style.style(
      ~height=ReactNative.Style.dp(100.),
      ~width=ReactNative.Style.dp(100.),
      ~backgroundColor="#b58df1",
      ~borderRadius=20.,
      ~marginVertical=ReactNative.Style.dp(64.),
      (),
    );
};

let app = () => {
  let animatedRef = Reanimated.Core.useAnimatedRef();

  <ReactNative.View style=Styles.container>
    <Reanimated.View
      ref=animatedRef
      style=Styles.box
      onLayout={_ => {
        let _component = animatedRef |> Reanimated.Core.AnimatedRef.current;
        ();
      }}
    />
  </ReactNative.View>;
};
