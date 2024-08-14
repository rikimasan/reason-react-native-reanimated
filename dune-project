(lang dune 3.12)

(using melange 0.1)

(source
 (github rikimasan/reason-react-native-reanimated))

(license MIT)

(maintainers "Kian Masri")

(authors "idk")

(homepage https://github.com/rikimasan/reason-react-native-reanimated)

(bug_reports
 https://github.com/rikimasan/reason-react-native-reanimated/issues)

(name reason-react-native-reanimated)

(package
 (name reason-react-native-reanimated)
 (synopsis "ReasonML Bindings for React Native Reanimated")
 (description "ReasonML Bindings for React Native Reanimated")
 (depends
  dot-merlin-reader
  (melange
   (and
    (>= 3.0.0)
    (< 5.0.0)))
  (ocaml
   (>= 5.1.0))
  (reason
   (>= 3.10.0))
  reason-react))

(generate_opam_files)
