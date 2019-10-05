#ifdef QMK_KEYBOARD_H
  #include QMK_KEYBOARD_H
#else
  #include "keebio/iris/rev2/rev2.h"
  #define XP(...) KC_NO
  #define X(...) KC_NO
#endif

#define _QWERTY 0
#define _EXTEND 1
#define _SYMBOL 2
#define _MOUSE 3
#define _ADJUST 4

#define KC_EXT  MO(_EXTEND)
#define KC_SYMB MO(_SYMBOL)
#define KC_MOU  MO(_MOUSE)
#define KC_ADJ  MO(_ADJUST)

enum unicode_names {
    SE_SMALL_AO,
    SE_CAPITAL_AO,
    SE_SMALL_AE,
    SE_CAPITAL_AE,
    SE_SMALL_OE,
    SE_CAPITAL_OE,
    DE_ESSET,
    EURO,
    YEN,
    GBP,
    TRADEMARK,
    REGISTERED,
    COPYRIGHT,
    GR_MY,
    PERMILLE,
    DOT,
    ONE_RAISED,
    TWO_RAISED,
    THREE_RAISED,
    QUARTER,
    PLUS_MINUS
};

const uint32_t PROGMEM unicode_map[] = {
    [SE_SMALL_AO]   = 0x00E5,
    [SE_CAPITAL_AO] = 0x00C5,
    [SE_SMALL_AE]   = 0x00E4,
    [SE_CAPITAL_AE] = 0x00C4,
    [SE_SMALL_OE]   = 0x00F6,
    [SE_CAPITAL_OE] = 0x00D6,
    [DE_ESSET]      = 0x0000,
    [EURO]          = 0x0080,
    [YEN]           = 0x00A5,
    [GBP]           = 0x00A3,
    [TRADEMARK]     = 0x0099,
    [REGISTERED]    = 0x00AE,
    [COPYRIGHT]     = 0x00A9,
    [GR_MY]         = 0x00B5,
    [PERMILLE]      = 0x0089,
    [DOT]           = 0x0095,
    [ONE_RAISED]    = 0x00B9,
    [TWO_RAISED]    = 0x00B2,
    [THREE_RAISED]  = 0x00B3,
    [QUARTER]       = 0x00BC,
    [PLUS_MINUS]     = 0x00B1
};

#define EU_AO   RALT(KC_W)
#define EU_AE   RALT(KC_Q)
#define EU_AUML RALT(KC_A)
#define EU_ESS  RALT(KC_S)
#define EU_OE   RALT(KC_P)
#define EU_OUML RALT(KC_O)

#define SE_AO   RALT(KC_W)
#define SE_AE   RALT(KC_Q)
#define SE_OE   RALT(KC_P)
#define DE_ESS  RALT(KC_S)
#define KC_EURO RALT(KC_5)
#define KC_YEN  RALT(KC_MINS)
#define KC_PND  RALT(KC_4)
#define KC_TM   X(TRADEMARK)
#define KC_REG  RALT(KC_R)
#define KC_CPY  RALT(KC_C)
#define KC_MY   RALT(KC_M)
#define KC_PMLE X(PERMILLE)
#define KC_MUL  X(DOT)
#define KC_ONER X(ONE_RAISED)
#define KC_TWOR X(TWO_RAISED)
#define KC_THER X(THREE_RAISED)
#define KC_QUAR X(QUARTER)
#define KC_PLMN X(PLUS_MINUS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT(
  //┌───────┬───────┬───────┬───────┬───────┬───────┐                        ┌───────┬───────┬───────┬───────┬───────┬───────┐
     KC_ESC ,  KC_1 ,  KC_2 ,  KC_3 ,  KC_4 ,  KC_5 ,                          KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_INS ,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
     KC_TAB ,  KC_Q ,  KC_W ,  KC_E ,  KC_R ,  KC_T ,                          KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_QUOT,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
     KC_LCTL,  KC_A ,  KC_S ,  KC_D ,  KC_F ,  KC_G ,                          KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_RSFT,
  //├───────┼───────┼───────┼───────┼───────┼───────┤ ,───────.    ,───────. ┼───────┼───────┼───────┼───────┼───────┼───────┤
     KC_LSFT,  KC_Z ,  KC_X ,  KC_C ,  KC_V ,  KC_B , KC_LALT,        KC_NO  , KC_N  , KC_M  ,KC_COMM, KC_DOT,KC_SLSH,KC_RCTL,
  //└───────┴───────┴───────┴───┬───┴────┬──┴────┬──┴───────/        \───────┴──┬────┴──┬────┴──┬────┴───────┴───────┴───────┘
                                  KC_LGUI,KC_EXT , KC_SPC ,              KC_SPC , KC_ENT,KC_SYMB
  //                            └────────┴───────┴───────'             `────────┴───────┴───────┘
    ),
	[_EXTEND] = LAYOUT(
  //┌───────┬───────┬───────┬───────┬───────┬───────┐                        ┌───────┬───────┬───────┬───────┬───────┬───────┐
     KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                          KC_F6 , KC_F7 , KC_F8 , KC_F9 , KC_F10, KC_F11,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
     KC_CAPS,KC_HOME, KC_UP , KC_END,KC_PGUP, BL_INC,                           KC_7 , KC_8  , KC_9  ,KC_MINS,KC_PAST,KC_NLCK,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
     KC_LCTL,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN, BL_DEC,                           KC_4 , KC_5  , KC_6  ,KC_PPLS,KC_PSLS,KC_PENT,
  //├───────┼───────┼───────┼───────┼───────┼───────┤ ,───────.    ,───────. ┼───────┼───────┼───────┼───────┼───────┼───────┤
     KC_LSFT,KC_MPRV,KC_MNXT,KC_MSTP,KC_MPLY,BL_TOGG, KC_RSFT,        KC_NO ,   KC_1 , KC_2  , KC_3  ,KC_PDOT,KC_EQL ,KC_RALT,
  //└───────┴───────┴───────┴───┬───┴────┬──┴────┬──┴───────/        \───────┴──┬────┴──┬────┴──┬────┴───────┴───────┴───────┘
                                  KC_DEL ,KC_TRNS,KC_BSPC,              KC_BSPC , KC_TAB, KC_0
  //                            └────────┴───────┴───────'             `────────┴───────┴───────┘
    ),
	[_SYMBOL] = LAYOUT(
  //┌───────┬───────┬───────┬───────┬───────┬───────┐                        ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_ESC,KC_ONER,KC_TWOR,KC_THER,KC_QUAR,KC_PMLE,                         UC_M_WI,UC_M_LN, KC_MUL,KC_PAST,KC_BSPC,KC_PSCR,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_NO , KC_NO , SE_AO ,KC_EURO, KC_REG, KC_TM ,                          KC_YEN, KC_NO , KC_NO , SE_OE ,KC_PLMN, KC_GRV,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_NO , SE_AE , DE_ESS,KC_LPRN,KC_LCBR,KC_LBRC,                         KC_RBRC,KC_RCBR,KC_RPRN, KC_NO ,KC_MINS,KC_ALGR,
  //├───────┼───────┼───────┼───────┼───────┼───────┤ ,───────.    ,───────. ┼───────┼───────┼───────┼───────┼───────┼───────┤
     KC_LSFT, KC_NO , KC_NO , KC_NO ,KC_PIPE,KC_QUES, KC_RALT,         KC_NO , KC_NO , KC_MY , KC_MY ,KC_EQL ,KC_BSLS,KC_RSFT,
  //└───────┴───────┴───────┴───┬───┴────┬──┴────┬──┴───────/        \───────┴──┬────┴──┬────┴──┬────┴───────┴───────┴───────┘
                                  KC_DEL , KC_ADJ, KC_BSPC,              KC_NO  , KC_NO ,KC_TRNS
  //                            └────────┴───────┴───────'             `────────┴───────┴───────┘
       ),
	[_MOUSE] = LAYOUT(
  //┌───────┬───────┬───────┬───────┬───────┬───────┐                        ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_ESC, KC_NO ,KC_BTN3, KC_NO , KC_NO , KC_NO ,                          KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , RESET ,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_NO ,KC_BTN1,KC_MS_U,KC_BTN2,KC_WH_U, KC_NO ,                          KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_NO ,KC_MS_L,KC_MS_D,KC_MS_R,KC_WH_D, KC_NO ,                          KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
  //├───────┼───────┼───────┼───────┼───────┼───────┤ ,───────.    ,───────. ┼───────┼───────┼───────┼───────┼───────┼───────┤
      KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,  KC_NO ,        KC_NO  , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
  //└───────┴───────┴───────┴───┬───┴────┬──┴────┬──┴───────/        \───────┴──┬────┴──┬────┴──┬────┴───────┴───────┴───────┘
                                  KC_NO  , KC_NO , KC_NO  ,              KC_NO  , KC_NO ,KC_TRNS
  //                            └────────┴───────┴───────'             `────────┴───────┴───────┘
          ),
	[_ADJUST] = LAYOUT(
  //┌───────┬───────┬───────┬───────┬───────┬───────┐                        ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_NO , KC_NO ,KC_BTN3, KC_NO , KC_NO , KC_NO ,                          BL_INC,BL_BRTG,RGB_SPI,RGB_HUI,RGB_MOD,RGB_M_B,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
     KC_VOLU,KC_BTN1,KC_MS_U,KC_BTN2,KC_WH_U,KC_VOLU,                          BL_DEC, KC_NO ,RGB_SPD,RGB_HUD,RGB_RMOD,RGB_M_R,
  //├───────┼───────┼───────┼───────┼───────┼───────┤                        ├───────┼───────┼───────┼───────┼───────┼───────┤
     KC_VOLD,KC_MS_L,KC_MS_D,KC_MS_R,KC_WH_D,KC_VOLD,                          BL_ON , KC_NO ,RGB_VAI,RGB_SAI,RGB_M_SW,RGB_M_SN,
  //├───────┼───────┼───────┼───────┼───────┼───────┤ ,───────.    ,───────. ┼───────┼───────┼───────┼───────┼───────┼───────┤
     KC_MUTE,KC_MPRV,KC_MNXT,KC_MSTP,KC_MPLY,KC_MUTE, BL_BRTG,         KC_NO , BL_OFF, KC_NO ,RGB_VAD,RGB_SAD,RGB_M_X,RGB_M_G,
  //└───────┴───────┴───────┴───┬───┴────┬──┴────┬──┴───────/        \───────┴──┬────┴──┬────┴──┬────┴───────┴───────┴───────┘
                                  KC_NO  ,KC_TRNS, KC_NO  ,             BL_TOGG ,BL_BRTG,RGB_TOG
  //                            └────────┴───────┴───────'             `────────┴───────┴───────┘
  //
  )
};
