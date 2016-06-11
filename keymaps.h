#ifndef _INFONES_KEYMAPS_H
#define _INFONES_KEYMAPS_H
#endif

/* Keymaps copied from Rockboy */

#include <plugin.h>

#ifdef HAVE_TOUCHSCREEN
#define NES_BUTTON_LEFT         BUTTON_MIDLEFT
#define NES_BUTTON_RIGHT        BUTTON_MIDRIGHT
#else
#define NES_BUTTON_LEFT         BUTTON_LEFT
#define NES_BUTTON_RIGHT        BUTTON_RIGHT
#endif

#ifdef HAVE_TOUCHSCREEN
#define NES_BUTTON_UP           BUTTON_TOPMIDDLE
#define NES_BUTTON_DOWN         BUTTON_BOTTOMMIDDLE
#define NES_BUTTON_START        BUTTON_TOPRIGHT
#define NES_BUTTON_SELECT       BUTTON_CENTER
#if CONFIG_KEYPAD != COWOND2_PAD
#define NES_BUTTON_A            BUTTON_BOTTOMLEFT
#define NES_BUTTON_B            BUTTON_BOTTOMRIGHT
#define NES_BUTTON_MENU         BUTTON_TOPLEFT
#endif
#endif

#if CONFIG_KEYPAD == IRIVER_H100_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_ON
#define NES_BUTTON_B            BUTTON_OFF
#define NES_BUTTON_START        BUTTON_REC
#define NES_BUTTON_SELECT       BUTTON_SELECT
#define NES_BUTTON_MENU         BUTTON_MODE

#elif CONFIG_KEYPAD == IRIVER_H300_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_REC
#define NES_BUTTON_B            BUTTON_MODE
#define NES_BUTTON_START        BUTTON_ON
#define NES_BUTTON_SELECT       BUTTON_SELECT
#define NES_BUTTON_MENU         BUTTON_OFF

#elif CONFIG_KEYPAD == RECORDER_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_F1
#define NES_BUTTON_B            BUTTON_F2
#define NES_BUTTON_START        BUTTON_F3
#define NES_BUTTON_SELECT       BUTTON_PLAY
#define NES_BUTTON_MENU         BUTTON_OFF

#elif CONFIG_KEYPAD == IPOD_4G_PAD

#define NES_BUTTON_UP           BUTTON_NONE
#define NES_BUTTON_DOWN         BUTTON_NONE
#define NES_BUTTON_A            BUTTON_SELECT
#define NES_BUTTON_B            BUTTON_PLAY
#define NES_BUTTON_START        BUTTON_MENU
#define NES_BUTTON_SELECT       BUTTON_NONE
#define NES_BUTTON_MENU         BUTTON_MENU

#elif CONFIG_KEYPAD == IRIVER_IFP7XX_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_PLAY
#define NES_BUTTON_B            BUTTON_EQ
#define NES_BUTTON_START        BUTTON_MODE
#define NES_BUTTON_SELECT       (BUTTON_SELECT | BUTTON_REL)
#define NES_BUTTON_MENU         (BUTTON_SELECT | BUTTON_REPEAT)

#elif CONFIG_KEYPAD == GIGABEAT_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_VOL_UP
#define NES_BUTTON_B            BUTTON_VOL_DOWN
#define NES_BUTTON_START        BUTTON_A
#define NES_BUTTON_SELECT       BUTTON_SELECT
#define NES_BUTTON_MENU         BUTTON_MENU
   
#elif CONFIG_KEYPAD == SANSA_E200_PAD

#define INFONES_SCROLLWHEEL
#define SCROLL_CC               BUTTON_SCROLL_BACK
#define SCROLL_CW               BUTTON_SCROLL_FWD
#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_SELECT
#define NES_BUTTON_B            BUTTON_SCROLL_BACK
#define NES_BUTTON_START        BUTTON_SCROLL_FWD
#define NES_BUTTON_SELECT       BUTTON_REC
#define NES_BUTTON_MENU		BUTTON_POWER

#elif CONFIG_KEYPAD == SANSA_FUZE_PAD

#define INFONES_SCROLLWHEEL
#define SCROLL_CC               BUTTON_SCROLL_BACK
#define SCROLL_CW               BUTTON_SCROLL_FWD
#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_SELECT
#define NES_BUTTON_B            BUTTON_HOME
#define NES_BUTTON_START        BUTTON_SCROLL_BACK
#define NES_BUTTON_SELECT       BUTTON_SCROLL_FWD
#define NES_BUTTON_MENU         BUTTON_POWER

#elif CONFIG_KEYPAD == SANSA_FUZEPLUS_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_VOL_UP
#define NES_BUTTON_B            BUTTON_VOL_DOWN
#define NES_BUTTON_START        BUTTON_PLAYPAUSE
#define NES_BUTTON_SELECT       BUTTON_BACK
#define NES_BUTTON_MENU         BUTTON_POWER

#elif CONFIG_KEYPAD == SANSA_C200_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_SELECT
#define NES_BUTTON_B            BUTTON_REC
#define NES_BUTTON_START        BUTTON_VOL_DOWN
#define NES_BUTTON_SELECT       BUTTON_VOL_UP
#define NES_BUTTON_MENU         BUTTON_POWER

#elif CONFIG_KEYPAD == SANSA_CLIP_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_SELECT
#define NES_BUTTON_B            BUTTON_HOME
#define NES_BUTTON_START        BUTTON_VOL_DOWN
#define NES_BUTTON_SELECT       BUTTON_VOL_UP
#define NES_BUTTON_MENU         BUTTON_POWER

#elif CONFIG_KEYPAD == IAUDIO_X5M5_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_PLAY
#define NES_BUTTON_B            BUTTON_REC
#define NES_BUTTON_START        BUTTON_SELECT
#define NES_BUTTON_SELECT       BUTTON_NONE
#define NES_BUTTON_MENU         BUTTON_POWER  

#elif CONFIG_KEYPAD == IRIVER_H10_PAD

#define NES_BUTTON_UP           BUTTON_SCROLL_UP
#define NES_BUTTON_DOWN         BUTTON_SCROLL_DOWN
#define NES_BUTTON_A            BUTTON_PLAY
#define NES_BUTTON_B            BUTTON_FF
#define NES_BUTTON_START        BUTTON_REW
#define NES_BUTTON_SELECT       BUTTON_NONE
#define NES_BUTTON_MENU         BUTTON_POWER
  
#elif CONFIG_KEYPAD == MROBE500_PAD

#define NES_BUTTON_UP           BUTTON_RC_PLAY
#define NES_BUTTON_DOWN         BUTTON_RC_DOWN
#define NES_BUTTON_LEFT         BUTTON_RC_REW
#define NES_BUTTON_RIGHT        BUTTON_RC_FF
#define NES_BUTTON_A            BUTTON_RC_VOL_DOWN
#define NES_BUTTON_B            BUTTON_RC_VOL_UP
#define NES_BUTTON_START        BUTTON_RC_HEART
#define NES_BUTTON_SELECT       BUTTON_RC_MODE
#define NES_BUTTON_MENU         BUTTON_POWER

#elif CONFIG_KEYPAD == COWOND2_PAD

#define NES_BUTTON_A            BUTTON_PLUS
#define NES_BUTTON_B            BUTTON_MINUS
#define NES_BUTTON_MENU         BUTTON_MENU

#elif CONFIG_KEYPAD == GIGABEAT_S_PAD
#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_VOL_UP
#define NES_BUTTON_B            BUTTON_VOL_DOWN
#define NES_BUTTON_START        BUTTON_PLAY
#define NES_BUTTON_SELECT       BUTTON_SELECT
#define NES_BUTTON_MENU         BUTTON_MENU

#elif CONFIG_KEYPAD == CREATIVEZVM_PAD
#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_CUSTOM
#define NES_BUTTON_B            BUTTON_PLAY
#define NES_BUTTON_START        BUTTON_BACK
#define NES_BUTTON_SELECT       BUTTON_SELECT
#define NES_BUTTON_MENU         BUTTON_MENU

#elif CONFIG_KEYPAD == PHILIPS_HDD1630_PAD

#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_VOL_UP
#define NES_BUTTON_B            BUTTON_VOL_DOWN
#define NES_BUTTON_START        BUTTON_VIEW
#define NES_BUTTON_SELECT       BUTTON_SELECT
#define NES_BUTTON_MENU         BUTTON_MENU

#elif CONFIG_KEYPAD == ONDAVX747_PAD
#define NES_BUTTON_A            BUTTON_VOL_UP
#define NES_BUTTON_B            BUTTON_VOL_DOWN
#define NES_BUTTON_MENU         BUTTON_MENU

#elif CONFIG_KEYPAD == SAMSUNG_YH920_PAD
#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_PLAY
#define NES_BUTTON_B            BUTTON_FFWD
#define NES_BUTTON_START        BUTTON_REW
#define NES_BUTTON_SELECT       BUTTON_NONE
#define NES_BUTTON_MENU         BUTTON_REC_SW_ON

#elif CONFIG_KEYPAD == SAMSUNG_YH820_PAD
#define NES_BUTTON_UP           BUTTON_UP
#define NES_BUTTON_DOWN         BUTTON_DOWN
#define NES_BUTTON_A            BUTTON_PLAY
#define NES_BUTTON_B            BUTTON_FFWD
#define NES_BUTTON_START        BUTTON_REW
#define NES_BUTTON_SELECT       BUTTON_NONE
#define NES_BUTTON_MENU         BUTTON_REC

#else 
#error No keymap defined!
#endif