#include "ansi_iso.h"

const uint16_t layer0[NKEY] = {
//ROW 0            ROW 1            ROW 2            ROW 3            ROW 4               ROW 5
  KEY_LEFT_CTRL,   KEY_LEFT_SHIFT,  KEY_CAPS_LOCK,   KEY_TAB,         KEY_1,              KEY_ESC,        // COL  0
  KEY_LEFT_GUI,    KEY_PIPE,        KEY_A,           KEY_Q,           KEY_2,              KEY_TILDE,      // COL  1
  KEY_LEFT_ALT,    KEY_Z,           KEY_S,           KEY_W,           KEY_3,              KEY_F1,         // COL  2
  NA,              KEY_X,           KEY_D,           KEY_E,           KEY_4,              KEY_F2,         // COL  3
  NA,              KEY_C,           KEY_F,           KEY_R,           KEY_5,              KEY_F3,         // COL  4
  NA,              KEY_V,           KEY_G,           KEY_T,           KEY_6,              KEY_F4,         // COL  5
  NA,              KEY_B,           KEY_H,           KEY_Y,           KEY_7,              KEY_F5,         // COL  6
  KEY_SPACE,       KEY_N,           KEY_J,           KEY_U,           KEY_8,              KEY_F6,         // COL  7
  NA,              KEY_M,           KEY_K,           KEY_I,           KEY_9,              KEY_F7,         // COL  8
  NA,              KEY_COMMA,       KEY_L,           KEY_O,           KEY_0,              KEY_F8,         // COL  9
  NA,              KEY_PERIOD,      KEY_SEMICOLON,   KEY_P,           KEY_MINUS,          KEY_F9,         // COL 10
  KEY_RIGHT_ALT,   KEY_SLASH,       KEY_QUOTE,       KEY_LEFT_BRACE,  KEY_EQUAL,          KEY_F10,        // COL 11
  KEY_APPLICATION, NA,              KEY_BACKSLASH,   KEY_RIGHT_BRACE, NA,                 KEY_F11,        // COL 12
  KEY_RIGHT_CTRL,  KEY_RIGHT_SHIFT, KEY_ENTER,       KEY_BACKSLASH,   KEY_BACKSPACE,      KEY_F12,        // COL 13

  KEY_LEFT,        NA,              NA,              KEY_DELETE,      KEY_INSERT,         KEY_PRINTSCREEN,// COL 14
  KEY_DOWN,        KEY_UP,          NA,              KEY_END,         KEY_HOME,           KEY_SCROLL_LOCK,// COL 15
  KEY_RIGHT,       NA,              NA,              KEY_PAGE_DOWN,   KEY_PAGE_UP,        KEY_PAUSE,      // COL 16
};

const uint16_t layer1[NKEY] = {
//ROW 0            ROW 1            ROW 2            ROW 3            ROW 4               ROW 5
  KEY_LEFT_CTRL,   KEY_LEFT_SHIFT,  KEY_CAPS_LOCK,   KEY_TAB,         KEY_1,              KEY_ESC,        // COL  0
  KEY_LEFT_GUI,    KEY_PIPE,        KEY_A,           KEY_Q,           KEY_2,              KEY_TILDE,      // COL  1
  KEY_LEFT_ALT,    KEY_Z,           KEY_S,           KEY_W,           KEY_3,              KEY_F1,         // COL  2
  NA,              KEY_X,           KEY_D,           KEY_E,           KEY_4,              KEY_F2,         // COL  3
  NA,              KEY_C,           KEY_F,           KEY_R,           KEY_5,              KEY_F3,         // COL  4
  NA,              KEY_V,           KEY_G,           KEY_T,           KEY_6,              KEY_F4,         // COL  5
  NA,              KEY_B,           KEY_H,           KEY_Y,           KEY_7,              KEY_F5,         // COL  6
  KEY_SPACE,       KEY_N,           KEY_J,           KEY_U,           KEY_8,              KEY_F6,         // COL  7
  NA,              KEY_M,           KEY_K,           KEY_I,           KEY_9,              KEY_F7,         // COL  8
  NA,              KEY_COMMA,       KEY_L,           KEY_O,           KEY_0,              KEY_F8,         // COL  9
  NA,              KEY_PERIOD,      KEY_SEMICOLON,   KEY_P,           KEY_MINUS,          KEY_F9,         // COL 10
  KEY_RIGHT_ALT,   KEY_SLASH,       KEY_QUOTE,       KEY_LEFT_BRACE,  KEY_EQUAL,          KEY_F10,        // COL 11
  KEY_APPLICATION, NA,              KEY_BACKSLASH,   KEY_RIGHT_BRACE, NA,                 KEY_F11,        // COL 12
  KEY_RIGHT_CTRL,  KEY_RIGHT_SHIFT, KEY_ENTER,       KEY_BACKSLASH,   KEY_BACKSPACE,      KEY_F12,        // COL 13

  KEY_LEFT,        NA,              NA,              KEY_DELETE,      KEY_INSERT,         KEY_PRINTSCREEN,// COL 14
  KEY_DOWN,        KEY_UP,          NA,              KEY_END,         KEY_HOME,           KEY_SCROLL_LOCK,// COL 15
  KEY_RIGHT,       NA,              NA,              KEY_PAGE_DOWN,   KEY_PAGE_UP,        KEY_PAUSE,      // COL 16
};

const uint16_t layer2[NKEY] = {
//ROW 0            ROW 1            ROW 2            ROW 3            ROW 4               ROW 5
  KEY_LEFT_CTRL,   KEY_LEFT_SHIFT,  KEY_CAPS_LOCK,   KEY_TAB,         KEY_1,              KEY_ESC,        // COL  0
  KEY_LEFT_GUI,    KEY_PIPE,        KEY_A,           KEY_Q,           KEY_2,              KEY_TILDE,      // COL  1
  KEY_LEFT_ALT,    KEY_Z,           KEY_S,           KEY_W,           KEY_3,              KEY_F1,         // COL  2
  NA,              KEY_X,           KEY_D,           KEY_E,           KEY_4,              KEY_F2,         // COL  3
  NA,              KEY_C,           KEY_F,           KEY_R,           KEY_5,              KEY_F3,         // COL  4
  NA,              KEY_V,           KEY_G,           KEY_T,           KEY_6,              KEY_F4,         // COL  5
  NA,              KEY_B,           KEY_H,           KEY_Y,           KEY_7,              KEY_F5,         // COL  6
  KEY_SPACE,       KEY_N,           KEY_J,           KEY_U,           KEY_8,              KEY_F6,         // COL  7
  NA,              KEY_M,           KEY_K,           KEY_I,           KEY_9,              KEY_F7,         // COL  8
  NA,              KEY_COMMA,       KEY_L,           KEY_O,           KEY_0,              KEY_F8,         // COL  9
  NA,              KEY_PERIOD,      KEY_SEMICOLON,   KEY_P,           KEY_MINUS,          KEY_F9,         // COL 10
  KEY_RIGHT_ALT,   KEY_SLASH,       KEY_QUOTE,       KEY_LEFT_BRACE,  KEY_EQUAL,          KEY_F10,        // COL 11
  KEY_APPLICATION, NA,              KEY_BACKSLASH,   KEY_RIGHT_BRACE, NA,                 KEY_F11,        // COL 12
  KEY_RIGHT_CTRL,  KEY_RIGHT_SHIFT, KEY_ENTER,       KEY_BACKSLASH,   KEY_BACKSPACE,      KEY_F12,        // COL 13

  KEY_LEFT,        NA,              NA,              KEY_DELETE,      KEY_INSERT,         KEY_PRINTSCREEN,// COL 14
  KEY_DOWN,        KEY_UP,          NA,              KEY_END,         KEY_HOME,           KEY_SCROLL_LOCK,// COL 15
  KEY_RIGHT,       NA,              NA,              KEY_PAGE_DOWN,   KEY_PAGE_UP,        KEY_PAUSE,      // COL 16
};

const uint16_t layer3[NKEY] = {
//ROW 0            ROW 1            ROW 2            ROW 3            ROW 4               ROW 5
  KEY_LEFT_CTRL,   KEY_LEFT_SHIFT,  KEY_CAPS_LOCK,   KEY_TAB,         KEY_1,              KEY_ESC,        // COL  0
  KEY_LEFT_GUI,    KEY_PIPE,        KEY_A,           KEY_Q,           KEY_2,              KEY_TILDE,      // COL  1
  KEY_LEFT_ALT,    KEY_Z,           KEY_S,           KEY_W,           KEY_3,              KEY_F1,         // COL  2
  NA,              KEY_X,           KEY_D,           KEY_E,           KEY_4,              KEY_F2,         // COL  3
  NA,              KEY_C,           KEY_F,           KEY_R,           KEY_5,              KEY_F3,         // COL  4
  NA,              KEY_V,           KEY_G,           KEY_T,           KEY_6,              KEY_F4,         // COL  5
  NA,              KEY_B,           KEY_H,           KEY_Y,           KEY_7,              KEY_F5,         // COL  6
  KEY_SPACE,       KEY_N,           KEY_J,           KEY_U,           KEY_8,              KEY_F6,         // COL  7
  NA,              KEY_M,           KEY_K,           KEY_I,           KEY_9,              KEY_F7,         // COL  8
  NA,              KEY_COMMA,       KEY_L,           KEY_O,           KEY_0,              KEY_F8,         // COL  9
  NA,              KEY_PERIOD,      KEY_SEMICOLON,   KEY_P,           KEY_MINUS,          KEY_F9,         // COL 10
  KEY_RIGHT_ALT,   KEY_SLASH,       KEY_QUOTE,       KEY_LEFT_BRACE,  KEY_EQUAL,          KEY_F10,        // COL 11
  KEY_APPLICATION, NA,              KEY_BACKSLASH,   KEY_RIGHT_BRACE, NA,                 KEY_F11,        // COL 12
  KEY_RIGHT_CTRL,  KEY_RIGHT_SHIFT, KEY_ENTER,       KEY_BACKSLASH,   KEY_BACKSPACE,      KEY_F12,        // COL 13

  KEY_LEFT,        NA,              NA,              KEY_DELETE,      KEY_INSERT,         KEY_PRINTSCREEN,// COL 14
  KEY_DOWN,        KEY_UP,          NA,              KEY_END,         KEY_HOME,           KEY_SCROLL_LOCK,// COL 15
  KEY_RIGHT,       NA,              NA,              KEY_PAGE_DOWN,   KEY_PAGE_UP,        KEY_PAUSE,      // COL 16
};

const uint16_t layer4[NKEY] = {
//ROW 0            ROW 1            ROW 2            ROW 3            ROW 4               ROW 5
  KEY_LEFT_CTRL,   KEY_LEFT_SHIFT,  KEY_CAPS_LOCK,   KEY_TAB,         KEY_1,              KEY_ESC,        // COL  0
  KEY_LEFT_GUI,    KEY_PIPE,        KEY_A,           KEY_Q,           KEY_2,              KEY_TILDE,      // COL  1
  KEY_LEFT_ALT,    KEY_Z,           KEY_S,           KEY_W,           KEY_3,              KEY_F1,         // COL  2
  NA,              KEY_X,           KEY_D,           KEY_E,           KEY_4,              KEY_F2,         // COL  3
  NA,              KEY_C,           KEY_F,           KEY_R,           KEY_5,              KEY_F3,         // COL  4
  NA,              KEY_V,           KEY_G,           KEY_T,           KEY_6,              KEY_F4,         // COL  5
  NA,              KEY_B,           KEY_H,           KEY_Y,           KEY_7,              KEY_F5,         // COL  6
  KEY_SPACE,       KEY_N,           KEY_J,           KEY_U,           KEY_8,              KEY_F6,         // COL  7
  NA,              KEY_M,           KEY_K,           KEY_I,           KEY_9,              KEY_F7,         // COL  8
  NA,              KEY_COMMA,       KEY_L,           KEY_O,           KEY_0,              KEY_F8,         // COL  9
  NA,              KEY_PERIOD,      KEY_SEMICOLON,   KEY_P,           KEY_MINUS,          KEY_F9,         // COL 10
  KEY_RIGHT_ALT,   KEY_SLASH,       KEY_QUOTE,       KEY_LEFT_BRACE,  KEY_EQUAL,          KEY_F10,        // COL 11
  KEY_APPLICATION, NA,              KEY_BACKSLASH,   KEY_RIGHT_BRACE, NA,                 KEY_F11,        // COL 12
  KEY_RIGHT_CTRL,  KEY_RIGHT_SHIFT, KEY_ENTER,       KEY_BACKSLASH,   KEY_BACKSPACE,      KEY_F12,        // COL 13

  KEY_LEFT,        NA,              NA,              KEY_DELETE,      KEY_INSERT,         KEY_PRINTSCREEN,// COL 14
  KEY_DOWN,        KEY_UP,          NA,              KEY_END,         KEY_HOME,           KEY_SCROLL_LOCK,// COL 15
  KEY_RIGHT,       NA,              NA,              KEY_PAGE_DOWN,   KEY_PAGE_UP,        KEY_PAUSE,      // COL 16
};

const uint16_t layer5[NKEY] = {
//ROW 0            ROW 1            ROW 2            ROW 3            ROW 4               ROW 5
  KEY_LEFT_CTRL,   KEY_LEFT_SHIFT,  KEY_CAPS_LOCK,   KEY_TAB,         KEY_1,              KEY_ESC,        // COL  0
  KEY_LEFT_GUI,    KEY_PIPE,        KEY_A,           KEY_Q,           KEY_2,              KEY_TILDE,      // COL  1
  KEY_LEFT_ALT,    KEY_Z,           KEY_S,           KEY_W,           KEY_3,              KEY_F1,         // COL  2
  NA,              KEY_X,           KEY_D,           KEY_E,           KEY_4,              KEY_F2,         // COL  3
  NA,              KEY_C,           KEY_F,           KEY_R,           KEY_5,              KEY_F3,         // COL  4
  NA,              KEY_V,           KEY_G,           KEY_T,           KEY_6,              KEY_F4,         // COL  5
  NA,              KEY_B,           KEY_H,           KEY_Y,           KEY_7,              KEY_F5,         // COL  6
  KEY_SPACE,       KEY_N,           KEY_J,           KEY_U,           KEY_8,              KEY_F6,         // COL  7
  NA,              KEY_M,           KEY_K,           KEY_I,           KEY_9,              KEY_F7,         // COL  8
  NA,              KEY_COMMA,       KEY_L,           KEY_O,           KEY_0,              KEY_F8,         // COL  9
  NA,              KEY_PERIOD,      KEY_SEMICOLON,   KEY_P,           KEY_MINUS,          KEY_F9,         // COL 10
  KEY_RIGHT_ALT,   KEY_SLASH,       KEY_QUOTE,       KEY_LEFT_BRACE,  KEY_EQUAL,          KEY_F10,        // COL 11
  KEY_APPLICATION, NA,              KEY_BACKSLASH,   KEY_RIGHT_BRACE, NA,                 KEY_F11,        // COL 12
  KEY_RIGHT_CTRL,  KEY_RIGHT_SHIFT, KEY_ENTER,       KEY_BACKSLASH,   KEY_BACKSPACE,      KEY_F12,        // COL 13

  KEY_LEFT,        NA,              NA,              KEY_DELETE,      KEY_INSERT,         KEY_PRINTSCREEN,// COL 14
  KEY_DOWN,        KEY_UP,          NA,              KEY_END,         KEY_HOME,           KEY_SCROLL_LOCK,// COL 15
  KEY_RIGHT,       NA,              NA,              KEY_PAGE_DOWN,   KEY_PAGE_UP,        KEY_PAUSE,      // COL 16
};

const uint16_t layer6[NKEY] = {
//ROW 0            ROW 1            ROW 2            ROW 3            ROW 4               ROW 5
  KEY_LEFT_CTRL,   KEY_LEFT_SHIFT,  KEY_CAPS_LOCK,   KEY_TAB,         KEY_1,              KEY_ESC,        // COL  0
  KEY_LEFT_GUI,    KEY_PIPE,        KEY_A,           KEY_Q,           KEY_2,              KEY_TILDE,      // COL  1
  KEY_LEFT_ALT,    KEY_Z,           KEY_S,           KEY_W,           KEY_3,              KEY_F1,         // COL  2
  NA,              KEY_X,           KEY_D,           KEY_E,           KEY_4,              KEY_F2,         // COL  3
  NA,              KEY_C,           KEY_F,           KEY_R,           KEY_5,              KEY_F3,         // COL  4
  NA,              KEY_V,           KEY_G,           KEY_T,           KEY_6,              KEY_F4,         // COL  5
  NA,              KEY_B,           KEY_H,           KEY_Y,           KEY_7,              KEY_F5,         // COL  6
  KEY_SPACE,       KEY_N,           KEY_J,           KEY_U,           KEY_8,              KEY_F6,         // COL  7
  NA,              KEY_M,           KEY_K,           KEY_I,           KEY_9,              KEY_F7,         // COL  8
  NA,              KEY_COMMA,       KEY_L,           KEY_O,           KEY_0,              KEY_F8,         // COL  9
  NA,              KEY_PERIOD,      KEY_SEMICOLON,   KEY_P,           KEY_MINUS,          KEY_F9,         // COL 10
  KEY_RIGHT_ALT,   KEY_SLASH,       KEY_QUOTE,       KEY_LEFT_BRACE,  KEY_EQUAL,          KEY_F10,        // COL 11
  KEY_APPLICATION, NA,              KEY_BACKSLASH,   KEY_RIGHT_BRACE, NA,                 KEY_F11,        // COL 12
  KEY_RIGHT_CTRL,  KEY_RIGHT_SHIFT, KEY_ENTER,       KEY_BACKSLASH,   KEY_BACKSPACE,      KEY_F12,        // COL 13

  KEY_LEFT,        NA,              NA,              KEY_DELETE,      KEY_INSERT,         KEY_PRINTSCREEN,// COL 14
  KEY_DOWN,        KEY_UP,          NA,              KEY_END,         KEY_HOME,           KEY_SCROLL_LOCK,// COL 15
  KEY_RIGHT,       NA,              NA,              KEY_PAGE_DOWN,   KEY_PAGE_UP,        KEY_PAUSE,      // COL 16
};

const uint16_t layer7[NKEY] = {
//ROW 0            ROW 1            ROW 2            ROW 3            ROW 4               ROW 5
  KEY_LEFT_CTRL,   KEY_LEFT_SHIFT,  KEY_CAPS_LOCK,   KEY_TAB,         KEY_1,              KEY_ESC,        // COL  0
  KEY_LEFT_GUI,    KEY_PIPE,        KEY_A,           KEY_Q,           KEY_2,              KEY_TILDE,      // COL  1
  KEY_LEFT_ALT,    KEY_Z,           KEY_S,           KEY_W,           KEY_3,              KEY_F1,         // COL  2
  NA,              KEY_X,           KEY_D,           KEY_E,           KEY_4,              KEY_F2,         // COL  3
  NA,              KEY_C,           KEY_F,           KEY_R,           KEY_5,              KEY_F3,         // COL  4
  NA,              KEY_V,           KEY_G,           KEY_T,           KEY_6,              KEY_F4,         // COL  5
  NA,              KEY_B,           KEY_H,           KEY_Y,           KEY_7,              KEY_F5,         // COL  6
  KEY_SPACE,       KEY_N,           KEY_J,           KEY_U,           KEY_8,              KEY_F6,         // COL  7
  NA,              KEY_M,           KEY_K,           KEY_I,           KEY_9,              KEY_F7,         // COL  8
  NA,              KEY_COMMA,       KEY_L,           KEY_O,           KEY_0,              KEY_F8,         // COL  9
  NA,              KEY_PERIOD,      KEY_SEMICOLON,   KEY_P,           KEY_MINUS,          KEY_F9,         // COL 10
  KEY_RIGHT_ALT,   KEY_SLASH,       KEY_QUOTE,       KEY_LEFT_BRACE,  KEY_EQUAL,          KEY_F10,        // COL 11
  KEY_APPLICATION, NA,              KEY_BACKSLASH,   KEY_RIGHT_BRACE, NA,                 KEY_F11,        // COL 12
  KEY_RIGHT_CTRL,  KEY_RIGHT_SHIFT, KEY_ENTER,       KEY_BACKSLASH,   KEY_BACKSPACE,      KEY_F12,        // COL 13

  KEY_LEFT,        NA,              NA,              KEY_DELETE,      KEY_INSERT,         KEY_PRINTSCREEN,// COL 14
  KEY_DOWN,        KEY_UP,          NA,              KEY_END,         KEY_HOME,           KEY_SCROLL_LOCK,// COL 15
  KEY_RIGHT,       NA,              NA,              KEY_PAGE_DOWN,   KEY_PAGE_UP,        KEY_PAUSE,      // COL 16
};

//Layer 8 is just for FN+# style layer selection. Accessed via KEY_FN_SWITCH
const uint16_t layer8[NKEY] = {
//ROW 0            ROW 1            ROW 2            ROW 3            ROW 4               ROW 5
  NA,              NA,              NA,              NA,              KEY_FN_1,           NA,             // COL  0
  NA,              NA,              NA,              NA,              KEY_FN_2,           NA,             // COL  1
  NA,              NA,              NA,              NA,              KEY_FN_3,           NA,             // COL  2
  NA,              NA,              NA,              NA,              KEY_FN_4,           NA,             // COL  3
  NA,              NA,              NA,              NA,              KEY_FN_5,           NA,             // COL  4
  NA,              NA,              NA,              NA,              KEY_FN_6,           NA,             // COL  5
  NA,              NA,              NA,              NA,              KEY_FN_7,           NA,             // COL  6
  NA,              NA,              NA,              NA,              NA,                 NA,             // COL  7
  NA,              NA,              NA,              NA,              NA,                 NA,             // COL  8
  NA,              NA,              NA,              NA,              KEY_FN_0,           NA,             // COL  9
  NA,              NA,              NA,              NA,              NA,                 NA,             // COL 10
  NA,              NA,              NA,              NA,              NA,                 NA,             // COL 11
  NA,              NA,              NA,              NA,              NA,                 NA,             // COL 12
  KEY_FN_SWITCH,   NA,              NA,              NA,              NA,                 NA,             // COL 13

  NA,              NA,              NA,              NA,              NA,                 NA,             // COL 14
  NA,              NA,              NA,              NA,              NA,                 NA,             // COL 15
  NA,              NA,              NA,              NA,              NA,                 NA,             // COL 16
};
