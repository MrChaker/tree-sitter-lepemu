#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_PIPE_GT = 1,
  anon_sym_ = 2,
  anon_sym_EQ = 3,
  sym_identifier = 4,
  sym_empty_line = 5,
  sym_source_file = 6,
  sym__node = 7,
  sym__element = 8,
  sym_element_tag = 9,
  sym_element_props = 10,
  sym_element_content = 11,
  sym_text_node = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym__element_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE_GT] = "|> ",
  [anon_sym_] = "    ",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_empty_line] = "empty_line",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym__element] = "_element",
  [sym_element_tag] = "element_tag",
  [sym_element_props] = "element_props",
  [sym_element_content] = "element_content",
  [sym_text_node] = "text_node",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__element_repeat1] = "_element_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_] = anon_sym_,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_empty_line] = sym_empty_line,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym__element] = sym__element,
  [sym_element_tag] = sym_element_tag,
  [sym_element_props] = sym_element_props,
  [sym_element_content] = sym_element_content,
  [sym_text_node] = sym_text_node,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__element_repeat1] = aux_sym__element_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_element_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_element_props] = {
    .visible = true,
    .named = true,
  },
  [sym_element_content] = {
    .visible = true,
    .named = true,
  },
  [sym_text_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__element_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(5);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_empty_line);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_empty_line);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_empty_line);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_empty_line);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__node] = STATE(4),
    [sym__element] = STATE(4),
    [sym_text_node] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PIPE_GT] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_element_props] = STATE(3),
    [sym_element_content] = STATE(13),
    [aux_sym__element_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_PIPE_GT] = ACTIONS(11),
    [anon_sym_] = ACTIONS(13),
    [sym_identifier] = ACTIONS(11),
    [sym_empty_line] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_,
    STATE(15), 1,
      sym_element_content,
    ACTIONS(19), 2,
      anon_sym_PIPE_GT,
      sym_identifier,
    STATE(6), 2,
      sym_element_props,
      aux_sym__element_repeat1,
  [18] = 4,
    ACTIONS(5), 1,
      anon_sym_PIPE_GT,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(5), 4,
      sym__node,
      sym__element,
      sym_text_node,
      aux_sym_source_file_repeat1,
  [34] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_PIPE_GT,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(5), 4,
      sym__node,
      sym__element,
      sym_text_node,
      aux_sym_source_file_repeat1,
  [50] = 4,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_,
    ACTIONS(35), 2,
      anon_sym_PIPE_GT,
      sym_identifier,
    STATE(6), 2,
      sym_element_props,
      aux_sym__element_repeat1,
  [65] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_,
    STATE(15), 1,
      sym_element_content,
    ACTIONS(19), 2,
      anon_sym_PIPE_GT,
      sym_identifier,
  [79] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 4,
      anon_sym_PIPE_GT,
      anon_sym_,
      sym_identifier,
      sym_empty_line,
  [89] = 3,
    ACTIONS(5), 1,
      anon_sym_PIPE_GT,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(14), 3,
      sym__node,
      sym__element,
      sym_text_node,
  [101] = 3,
    ACTIONS(5), 1,
      anon_sym_PIPE_GT,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(14), 3,
      sym__node,
      sym__element,
      sym_text_node,
  [113] = 2,
    ACTIONS(50), 1,
      anon_sym_EQ,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_GT,
      sym_identifier,
  [122] = 2,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(54), 2,
      anon_sym_PIPE_GT,
      sym_identifier,
  [131] = 1,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_GT,
      sym_identifier,
  [137] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_GT,
      sym_identifier,
  [143] = 1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_GT,
      sym_identifier,
  [149] = 1,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_GT,
      sym_identifier,
  [155] = 2,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(2), 1,
      sym_element_tag,
  [162] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [166] = 1,
    ACTIONS(64), 1,
      sym_identifier,
  [170] = 1,
    ACTIONS(66), 1,
      sym_identifier,
  [174] = 1,
    ACTIONS(50), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 18,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 101,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 122,
  [SMALL_STATE(13)] = 131,
  [SMALL_STATE(14)] = 137,
  [SMALL_STATE(15)] = 143,
  [SMALL_STATE(16)] = 149,
  [SMALL_STATE(17)] = 155,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 166,
  [SMALL_STATE(20)] = 170,
  [SMALL_STATE(21)] = 174,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__element_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__element_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__element_repeat1, 2), SHIFT_REPEAT(20),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_tag, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_tag, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_node, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_props, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_props, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_content, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lepemu(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
