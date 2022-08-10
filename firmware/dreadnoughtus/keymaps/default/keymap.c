#include "dreadnoughtus.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT_ortho(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSPC, 
		KC_COMM, KC_DOT, KC_SLSH, KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_SCLN, KC_COLN, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, KC_BSLS, KC_PIPE, KC_LABK, KC_RABK, 
		KC_7, KC_8, KC_9, KC_TILD, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_UNDS, KC_PLUS, KC_BSPC, KC_HOME, KC_PGUP, 
		KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LCBR, KC_RCBR, KC_BSLS, KC_END, KC_PGDN, 
		KC_1, KC_2, KC_3, KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_MUTE, KC_NO, KC_PAUS, KC_NO, KC_MSTP, KC_G, KC_H, KC_J, KC_K, KC_L, KC_COLN, KC_DQUO, KC_ENT, KC_ENT, KC_INS, KC_DEL, 
		KC_0, KC_NO, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_N, KC_M, KC_LABK, KC_RABK, KC_QUES, KC_LSFT, KC_LSFT, KC_NO, KC_UP, KC_NO, 
		KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_NO, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_LALT, KC_NO, KC_LCTL, KC_LCTL, KC_LCTL, KC_LEFT, KC_DOWN, KC_RGHT)
};