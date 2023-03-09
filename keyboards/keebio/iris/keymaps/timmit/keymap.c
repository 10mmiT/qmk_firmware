#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //,--------+--------+--------+--------+--------+--------.                          ,--------+--------+--------+--------+--------+--------.
	   KC_ESC  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,               			       KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,KC_MINS ,
  //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
	   KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,               			       KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , NO_ARNG,
  //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
	   KC_LSFT , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,               			       KC_H   , KC_J   , KC_K   , KC_L   ,NO_OSTR , NO_AE  ,
  //|--------+--------+--------+--------+--------+--------+--------.        ,--------|--------+--------+--------+--------+--------+--------|
	   KC_LCTL , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,KC_NUBS ,		     KC_SLSH , KC_N   , KC_M   ,KC_COMM , KC_DOT ,KC_LGUI , KC_ENT ,
  //`--------+--------+--------+----+---+--------+--------+--------/        \--------+--------+--------+---+----+--------+--------+--------'
									                   KC_LALT ,  LOWER , KC_SPC ,     			       KC_BSPC ,  RAISE ,KC_RALT
  //                                `--------+--------+--------'                `--------+--------+--------'
  ),

  [_LOWER] = LAYOUT(
  //,--------+--------+--------+--------+--------+--------.                          ,--------+--------+--------+--------+--------+--------.
	   KC_DEL  ,NO_PIPE , _______, _______, _______, _______,         			 	          KC_PAST , KC_P7  , KC_P8  , KC_P9  ,KC_PMNS , _______,
  //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
	   KC_TAB  , _______, _______, _______,KC_INS  ,KC_SCRL ,         				          KC_PSLS , KC_P4  , KC_P5  , KC_P6  ,KC_PPLS ,KC_RBRC ,
  //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
	   KC_LSFT , _______,KC_PSCR , _______,KC_HOME ,KC_PGUP ,         				          KC_NUM  , KC_P1  , KC_P2  , KC_P3  , _______,KC_NUHS ,
  //|--------+--------+--------+--------+--------+--------+--------.        ,--------|--------+--------+--------+--------+--------+--------|
	   KC_LCTL , _______, _______, _______,KC_END  ,KC_PGDN , _______,   		    _______, _______, KC_P0  , _______,KC_PDOT ,KC_LGUI ,KC_ENT  ,
  //`--------+--------+--------+----+---+--------+--------+--------/        \--------+--------+--------+--------+--------+--------+--------'
									                   KC_LALT , _______, KC_SPC ,     			       KC_BSPC , _______,KC_RALT
  //                                `--------+--------+--------'                `--------+--------+--------'
  ),

  [_RAISE] = LAYOUT(
  //,--------+--------+--------+--------+--------+--------.                          ,--------+--------+--------+--------+--------+--------.
      KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,        					           KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
  //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
     KC_TAB  , _______, KC_UP  , _______, _______, _______,         				          KC_VOLU ,KC_MNXT ,KC_MSTP , _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
     KC_LSFT ,KC_LEFT ,KC_DOWN ,KC_RGHT , _______, _______,     					            KC_VOLD ,KC_MPRV ,KC_MPLY , _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------.        ,--------|--------+--------+--------+--------+--------+--------|
	   KC_LCTL , _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,KC_LGUI , KC_ENT ,
  //`--------+--------+--------+----+---+--------+--------+--------/        \--------+--------+--------+---+----+--------+--------+--------'
									                   KC_LALT , _______, KC_SPC ,     			       KC_BSPC , _______,KC_RALT
  //                                `--------+--------+--------'                `--------+--------+--------'
  ),

  [_ADJUST] = LAYOUT(
  //,--------+--------+--------+--------+--------+--------.                          ,--------+--------+--------+--------+--------+--------.
      _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______,                            _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
      _______, DB_TOGG, RGB_HUD, RGB_SAD, RGB_VAD, _______,                            _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------.        ,--------|--------+--------+--------+--------+--------+--------|
      BL_STEP, QK_RBT , _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //`--------+--------+--------+----+---+--------+--------+--------/        \--------+--------+--------+---+----+--------+--------+--------'
                                      _______, _______, _______,                  _______, _______, _______
  //                                `--------+--------+--------'                `--------+--------+--------'
  )

};

#define LAYER_VAL 120

const rgblight_segment_t PROGMEM lower_segments[] = RGBLIGHT_LAYER_SEGMENTS(
	{4, 2, 10, 255, LAYER_VAL}
);
const rgblight_segment_t PROGMEM raise_segments[] = RGBLIGHT_LAYER_SEGMENTS(
	{6, 2, 100, 255, LAYER_VAL}
);
const rgblight_segment_t PROGMEM adjust_segments[] = RGBLIGHT_LAYER_SEGMENTS(
	{4, 4, 60, 255, LAYER_VAL}
);

const rgblight_segment_t* const PROGMEM mod_led_layers[] = RGBLIGHT_LAYERS_LIST(
	lower_segments,
	raise_segments,
	adjust_segments
);

void keyboard_post_init_user(void) {
	rgblight_layers = mod_led_layers;
}

#define BIT_SET(intval, bitnum) ((intval & (1 << bitnum)) > 0)

layer_state_t layer_state_set_user(layer_state_t state) {
	uprintf("layer state: %d\n", state);
	rgblight_set_layer_state(0, BIT_SET(state, _LOWER));
	rgblight_set_layer_state(1, BIT_SET(state, _RAISE));
	rgblight_set_layer_state(2, BIT_SET(state, _ADJUST));
	rgblight_set();
  	return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}