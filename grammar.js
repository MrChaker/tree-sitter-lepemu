module.exports = grammar({
  name: "lepemu",

  rules: {
    source_file: ($) => repeat($._node),

    _node: ($) => choice($._element, $.text_node),

    _element: ($) =>
      seq(
        "|> ",
        $.element_tag,
        choice(repeat($.element_props), $.empty_line),
        optional($.element_content)
      ),

    element_tag: ($) => $.identifier,
    element_props: ($) => seq("    ", $.identifier, "=", $.identifier),
    element_content: ($) => seq("    ", $._node),

    text_node: ($) => $.identifier,

    identifier: ($) => /[a-z]+/,
    empty_line: ($) => /\s*\n\s*/,
  },
});

/* "tree-sitter": [
  {
    "scope": "source.ruby",
    "file-types": [
      "lepemu"
    ]
  }
] */
