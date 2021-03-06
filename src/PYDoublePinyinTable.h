/* vim:set et ts=4 sts=4:
 *
 * ibus-pinyin - The Chinese PinYin engine for IBus
 *
 * Copyright (c) 2008-2010 Peng Huang <shawn.p.huang@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 */
#ifndef __PY_DOUBLE_PINYIN_TABLE_H_
#define __PY_DOUBLE_PINYIN_TABLE_H_

#define DOUBLE_PINYIN_MSPY  (0)
#define DOUBLE_PINYIN_ZRM   (1)
#define DOUBLE_PINYIN_ABC   (2)
#define DOUBLE_PINYIN_ZGPY  (3)
#define DOUBLE_PINYIN_PYJJ  (4)
#define DOUBLE_PINYIN_XHE   (5)
#define DOUBLE_PINYIN_LAST  (5)

#ifdef DEFINE_DOUBLE_PINYIN_TABLES

#define PINYIN_ID_AEO PINYIN_ID_ZERO

static const gint8 double_pinyin_mspy_sheng[] = {
    PINYIN_ID_AEO,  // A
    PINYIN_ID_B,    // B
    PINYIN_ID_C,    // C
    PINYIN_ID_D,    // D
    PINYIN_ID_AEO,  // E
    PINYIN_ID_F,    // F
    PINYIN_ID_G,    // G
    PINYIN_ID_H,    // H
    PINYIN_ID_CH,   // I
    PINYIN_ID_J,    // J
    PINYIN_ID_K,    // K
    PINYIN_ID_L,    // L
    PINYIN_ID_M,    // M
    PINYIN_ID_N,    // N
    PINYIN_ID_ZERO, // O
    PINYIN_ID_P,    // P
    PINYIN_ID_Q,    // Q
    PINYIN_ID_R,    // R
    PINYIN_ID_S,    // S
    PINYIN_ID_T,    // T
    PINYIN_ID_SH,   // U
    PINYIN_ID_ZH,   // V
    PINYIN_ID_W,    // W
    PINYIN_ID_X,    // X
    PINYIN_ID_Y,    // Y
    PINYIN_ID_Z,    // Z
    PINYIN_ID_VOID, // ;
};
static const gint8 double_pinyin_mspy_yun[][2] = {
    { PINYIN_ID_A,    PINYIN_ID_VOID }, // A
    { PINYIN_ID_OU,   PINYIN_ID_VOID }, // B
    { PINYIN_ID_IAO,  PINYIN_ID_VOID }, // C
    { PINYIN_ID_UANG, PINYIN_ID_IANG }, // D
    { PINYIN_ID_E,    PINYIN_ID_VOID }, // E
    { PINYIN_ID_EN,   PINYIN_ID_VOID }, // F
    { PINYIN_ID_ENG,  PINYIN_ID_NG   }, // G
    { PINYIN_ID_ANG,  PINYIN_ID_VOID }, // H
    { PINYIN_ID_I,    PINYIN_ID_VOID }, // I
    { PINYIN_ID_AN,   PINYIN_ID_VOID }, // J
    { PINYIN_ID_AO,   PINYIN_ID_VOID }, // K
    { PINYIN_ID_AI,   PINYIN_ID_VOID }, // L
    { PINYIN_ID_IAN,  PINYIN_ID_VOID }, // M
    { PINYIN_ID_IN,   PINYIN_ID_VOID }, // N
    { PINYIN_ID_UO,   PINYIN_ID_O    }, // O
    { PINYIN_ID_UN,   PINYIN_ID_VOID }, // P
    { PINYIN_ID_IU,   PINYIN_ID_VOID }, // Q
    { PINYIN_ID_UAN,  PINYIN_ID_ER   }, // R
    { PINYIN_ID_ONG,  PINYIN_ID_IONG }, // S
    { PINYIN_ID_UE,   PINYIN_ID_VOID }, // T
    { PINYIN_ID_U,    PINYIN_ID_VOID }, // U
    { PINYIN_ID_UI,   PINYIN_ID_UE   }, // V
    { PINYIN_ID_IA,   PINYIN_ID_UA   }, // W
    { PINYIN_ID_IE,   PINYIN_ID_VOID }, // X
    { PINYIN_ID_UAI,  PINYIN_ID_V    }, // Y
    { PINYIN_ID_EI,   PINYIN_ID_VOID }, // Z
    { PINYIN_ID_ING,  PINYIN_ID_VOID }, // ;
};
static const gint8 double_pinyin_zrm_sheng[] = {
    PINYIN_ID_AEO,  // A
    PINYIN_ID_B,    // B
    PINYIN_ID_C,    // C
    PINYIN_ID_D,    // D
    PINYIN_ID_AEO,  // E
    PINYIN_ID_F,    // F
    PINYIN_ID_G,    // G
    PINYIN_ID_H,    // H
    PINYIN_ID_CH,   // I
    PINYIN_ID_J,    // J
    PINYIN_ID_K,    // K
    PINYIN_ID_L,    // L
    PINYIN_ID_M,    // M
    PINYIN_ID_N,    // N
    PINYIN_ID_ZERO, // O
    PINYIN_ID_P,    // P
    PINYIN_ID_Q,    // Q
    PINYIN_ID_R,    // R
    PINYIN_ID_S,    // S
    PINYIN_ID_T,    // T
    PINYIN_ID_SH,   // U
    PINYIN_ID_ZH,   // V
    PINYIN_ID_W,    // W
    PINYIN_ID_X,    // X
    PINYIN_ID_Y,    // Y
    PINYIN_ID_Z,    // Z
    PINYIN_ID_VOID, // ;
};
static const gint8 double_pinyin_zrm_yun[][2] = {
    { PINYIN_ID_A,    PINYIN_ID_VOID }, // A
    { PINYIN_ID_OU,   PINYIN_ID_VOID }, // B
    { PINYIN_ID_IAO,  PINYIN_ID_VOID }, // C
    { PINYIN_ID_UANG, PINYIN_ID_IANG }, // D
    { PINYIN_ID_E,    PINYIN_ID_VOID }, // E
    { PINYIN_ID_EN,   PINYIN_ID_VOID }, // F
    { PINYIN_ID_ENG,  PINYIN_ID_NG   }, // G
    { PINYIN_ID_ANG,  PINYIN_ID_VOID }, // H
    { PINYIN_ID_I,    PINYIN_ID_VOID }, // I
    { PINYIN_ID_AN,   PINYIN_ID_VOID }, // J
    { PINYIN_ID_AO,   PINYIN_ID_VOID }, // K
    { PINYIN_ID_AI,   PINYIN_ID_VOID }, // L
    { PINYIN_ID_IAN,  PINYIN_ID_VOID }, // M
    { PINYIN_ID_IN,   PINYIN_ID_VOID }, // N
    { PINYIN_ID_UO,   PINYIN_ID_O    }, // O
    { PINYIN_ID_UN,   PINYIN_ID_VOID }, // P
    { PINYIN_ID_IU,   PINYIN_ID_VOID }, // Q
    { PINYIN_ID_UAN,  PINYIN_ID_ER   }, // R
    { PINYIN_ID_ONG,  PINYIN_ID_IONG }, // S
    { PINYIN_ID_UE,   PINYIN_ID_VOID }, // T
    { PINYIN_ID_U,    PINYIN_ID_VOID }, // U
    { PINYIN_ID_UI,   PINYIN_ID_V    }, // V
    { PINYIN_ID_IA,   PINYIN_ID_UA   }, // W
    { PINYIN_ID_IE,   PINYIN_ID_VOID }, // X
    { PINYIN_ID_UAI,  PINYIN_ID_ING  }, // Y
    { PINYIN_ID_EI,   PINYIN_ID_VOID }, // Z
    { PINYIN_ID_VOID, PINYIN_ID_VOID }, // ;
};
static const gint8 double_pinyin_abc_sheng[] = {
    PINYIN_ID_ZH,   // A
    PINYIN_ID_B,    // B
    PINYIN_ID_C,    // C
    PINYIN_ID_D,    // D
    PINYIN_ID_CH,   // E
    PINYIN_ID_F,    // F
    PINYIN_ID_G,    // G
    PINYIN_ID_H,    // H
    PINYIN_ID_VOID, // I
    PINYIN_ID_J,    // J
    PINYIN_ID_K,    // K
    PINYIN_ID_L,    // L
    PINYIN_ID_M,    // M
    PINYIN_ID_N,    // N
    PINYIN_ID_ZERO, // O
    PINYIN_ID_P,    // P
    PINYIN_ID_Q,    // Q
    PINYIN_ID_R,    // R
    PINYIN_ID_S,    // S
    PINYIN_ID_T,    // T
    PINYIN_ID_VOID, // U
    PINYIN_ID_SH,   // V
    PINYIN_ID_W,    // W
    PINYIN_ID_X,    // X
    PINYIN_ID_Y,    // Y
    PINYIN_ID_Z,    // Z
    PINYIN_ID_VOID, // ;
};
static const gint8 double_pinyin_abc_yun[][2] = {
    { PINYIN_ID_A,    PINYIN_ID_VOID }, // A
    { PINYIN_ID_OU,   PINYIN_ID_VOID }, // B
    { PINYIN_ID_IN,   PINYIN_ID_UAI  }, // C
    { PINYIN_ID_IA,   PINYIN_ID_UA   }, // D
    { PINYIN_ID_E,    PINYIN_ID_VOID }, // E
    { PINYIN_ID_EN,   PINYIN_ID_VOID }, // F
    { PINYIN_ID_ENG,  PINYIN_ID_NG   }, // G
    { PINYIN_ID_ANG,  PINYIN_ID_VOID }, // H
    { PINYIN_ID_I,    PINYIN_ID_VOID }, // I
    { PINYIN_ID_AN,   PINYIN_ID_VOID }, // J
    { PINYIN_ID_AO,   PINYIN_ID_VOID }, // K
    { PINYIN_ID_AI,   PINYIN_ID_VOID }, // L
    { PINYIN_ID_UE,   PINYIN_ID_UI   }, // M
    { PINYIN_ID_UN,   PINYIN_ID_VOID }, // N
    { PINYIN_ID_UO,   PINYIN_ID_O    }, // O
    { PINYIN_ID_UAN,  PINYIN_ID_VOID }, // P
    { PINYIN_ID_EI,   PINYIN_ID_VOID }, // Q
    { PINYIN_ID_ER,   PINYIN_ID_IU   }, // R
    { PINYIN_ID_ONG,  PINYIN_ID_IONG }, // S
    { PINYIN_ID_IANG, PINYIN_ID_UANG }, // T
    { PINYIN_ID_U,    PINYIN_ID_VOID }, // U
    { PINYIN_ID_V,    PINYIN_ID_UE   }, // V
    { PINYIN_ID_IAN,  PINYIN_ID_VOID }, // W
    { PINYIN_ID_IE,   PINYIN_ID_VOID }, // X
    { PINYIN_ID_ING,  PINYIN_ID_VOID }, // Y
    { PINYIN_ID_IAO,  PINYIN_ID_VOID }, // Z
    { PINYIN_ID_VOID, PINYIN_ID_VOID }, // ;
};
static const gint8 double_pinyin_zgpy_sheng[] = {
    PINYIN_ID_CH,   // A
    PINYIN_ID_B,    // B
    PINYIN_ID_C,    // C
    PINYIN_ID_D,    // D
    PINYIN_ID_AEO,  // E
    PINYIN_ID_F,    // F
    PINYIN_ID_G,    // G
    PINYIN_ID_H,    // H
    PINYIN_ID_SH,   // I
    PINYIN_ID_J,    // J
    PINYIN_ID_K,    // K
    PINYIN_ID_L,    // L
    PINYIN_ID_M,    // M
    PINYIN_ID_N,    // N
    PINYIN_ID_ZERO, // O
    PINYIN_ID_P,    // P
    PINYIN_ID_Q,    // Q
    PINYIN_ID_R,    // R
    PINYIN_ID_S,    // S
    PINYIN_ID_T,    // T
    PINYIN_ID_ZH,   // U
    PINYIN_ID_VOID, // V
    PINYIN_ID_W,    // W
    PINYIN_ID_X,    // X
    PINYIN_ID_Y,    // Y
    PINYIN_ID_Z,    // Z
    PINYIN_ID_VOID, // ;
};
static const gint8 double_pinyin_zgpy_yun[][2] = {
    { PINYIN_ID_A,    PINYIN_ID_VOID }, // A
    { PINYIN_ID_IAO,  PINYIN_ID_VOID }, // B
    { PINYIN_ID_VOID, PINYIN_ID_VOID }, // C
    { PINYIN_ID_IE,   PINYIN_ID_VOID }, // D
    { PINYIN_ID_E,    PINYIN_ID_VOID }, // E
    { PINYIN_ID_IAN,  PINYIN_ID_VOID }, // F
    { PINYIN_ID_IANG, PINYIN_ID_UANG }, // G
    { PINYIN_ID_ONG,  PINYIN_ID_IONG }, // H
    { PINYIN_ID_I,    PINYIN_ID_VOID }, // I
    { PINYIN_ID_ER,   PINYIN_ID_IU   }, // J
    { PINYIN_ID_EI,   PINYIN_ID_VOID }, // K
    { PINYIN_ID_UAN,  PINYIN_ID_VOID }, // L
    { PINYIN_ID_UN,   PINYIN_ID_VOID }, // M
    { PINYIN_ID_UE,   PINYIN_ID_UI   }, // N
    { PINYIN_ID_UO,   PINYIN_ID_O    }, // O
    { PINYIN_ID_AI,   PINYIN_ID_VOID }, // P
    { PINYIN_ID_AO,   PINYIN_ID_VOID }, // Q
    { PINYIN_ID_AN,   PINYIN_ID_VOID }, // R
    { PINYIN_ID_ANG,  PINYIN_ID_VOID }, // S
    { PINYIN_ID_ENG,  PINYIN_ID_NG   }, // T
    { PINYIN_ID_U,    PINYIN_ID_VOID }, // U
    { PINYIN_ID_V,    PINYIN_ID_VOID }, // V
    { PINYIN_ID_EN,   PINYIN_ID_VOID }, // W
    { PINYIN_ID_IA,   PINYIN_ID_UA   }, // X
    { PINYIN_ID_IN,   PINYIN_ID_UAI  }, // Y
    { PINYIN_ID_OU,   PINYIN_ID_VOID }, // Z
    { PINYIN_ID_ING,  PINYIN_ID_VOID }, // ;
};
static const gint8 double_pinyin_pyjj_sheng[] = {
    PINYIN_ID_ZERO, // A
    PINYIN_ID_B,    // B
    PINYIN_ID_C,    // C
    PINYIN_ID_D,    // D
    PINYIN_ID_AEO,  // E
    PINYIN_ID_F,    // F
    PINYIN_ID_G,    // G
    PINYIN_ID_H,    // H
    PINYIN_ID_SH,   // I
    PINYIN_ID_J,    // J
    PINYIN_ID_K,    // K
    PINYIN_ID_L,    // L
    PINYIN_ID_M,    // M
    PINYIN_ID_N,    // N
    PINYIN_ID_ZERO, // O
    PINYIN_ID_P,    // P
    PINYIN_ID_Q,    // Q
    PINYIN_ID_R,    // R
    PINYIN_ID_S,    // S
    PINYIN_ID_T,    // T
    PINYIN_ID_CH,   // U
    PINYIN_ID_ZH,   // V
    PINYIN_ID_W,    // W
    PINYIN_ID_X,    // X
    PINYIN_ID_Y,    // Y
    PINYIN_ID_Z,    // Z
    PINYIN_ID_VOID, // ;
};
static const gint8 double_pinyin_pyjj_yun[][2] = {
    { PINYIN_ID_A,    PINYIN_ID_VOID }, // A
    { PINYIN_ID_IA,   PINYIN_ID_UA   }, // B
    { PINYIN_ID_UAN,  PINYIN_ID_VOID }, // C
    { PINYIN_ID_AO,   PINYIN_ID_VOID }, // D
    { PINYIN_ID_E,    PINYIN_ID_VOID }, // E
    { PINYIN_ID_AN,   PINYIN_ID_VOID }, // F
    { PINYIN_ID_ANG,  PINYIN_ID_VOID }, // G
    { PINYIN_ID_IANG, PINYIN_ID_UANG }, // H
    { PINYIN_ID_I,    PINYIN_ID_VOID }, // I
    { PINYIN_ID_IAN,  PINYIN_ID_VOID }, // J
    { PINYIN_ID_IAO,  PINYIN_ID_VOID }, // K
    { PINYIN_ID_IN,   PINYIN_ID_VOID }, // L
    { PINYIN_ID_IE,   PINYIN_ID_VOID }, // M
    { PINYIN_ID_IU,   PINYIN_ID_VOID }, // N
    { PINYIN_ID_UO,   PINYIN_ID_O    }, // O
    { PINYIN_ID_OU,   PINYIN_ID_VOID }, // P
    { PINYIN_ID_ER,   PINYIN_ID_ING  }, // Q
    { PINYIN_ID_EN,   PINYIN_ID_VOID }, // R
    { PINYIN_ID_AI,   PINYIN_ID_VOID }, // S
    { PINYIN_ID_ENG,  PINYIN_ID_NG   }, // T
    { PINYIN_ID_U,    PINYIN_ID_VOID }, // U
    { PINYIN_ID_V,    PINYIN_ID_UI   }, // V
    { PINYIN_ID_EI,   PINYIN_ID_VOID }, // W
    { PINYIN_ID_UAI,  PINYIN_ID_UE   }, // X
    { PINYIN_ID_ONG,  PINYIN_ID_IONG }, // Y
    { PINYIN_ID_UN,   PINYIN_ID_VOID }, // Z
    { PINYIN_ID_VOID, PINYIN_ID_VOID }, // ;
};
static const gint8 double_pinyin_xhe_sheng[] = {
    PINYIN_ID_AEO,  // A
    PINYIN_ID_B,    // B
    PINYIN_ID_C,    // C
    PINYIN_ID_D,    // D
    PINYIN_ID_AEO,  // E
    PINYIN_ID_F,    // F
    PINYIN_ID_G,    // G
    PINYIN_ID_H,    // H
    PINYIN_ID_CH,   // I
    PINYIN_ID_J,    // J
    PINYIN_ID_K,    // K
    PINYIN_ID_L,    // L
    PINYIN_ID_M,    // M
    PINYIN_ID_N,    // N
    PINYIN_ID_ZERO, // O
    PINYIN_ID_P,    // P
    PINYIN_ID_Q,    // Q
    PINYIN_ID_R,    // R
    PINYIN_ID_S,    // S
    PINYIN_ID_T,    // T
    PINYIN_ID_SH,   // U
    PINYIN_ID_ZH,   // V
    PINYIN_ID_W,    // W
    PINYIN_ID_X,    // X
    PINYIN_ID_Y,    // Y
    PINYIN_ID_Z,    // Z
    PINYIN_ID_VOID, // ;
};
static const gint8 double_pinyin_xhe_yun[][2] = {
    { PINYIN_ID_A,    PINYIN_ID_VOID }, // A
    { PINYIN_ID_IN,   PINYIN_ID_VOID }, // B
    { PINYIN_ID_AO,   PINYIN_ID_VOID }, // C
    { PINYIN_ID_AI,   PINYIN_ID_VOID }, // D
    { PINYIN_ID_E,    PINYIN_ID_VOID }, // E
    { PINYIN_ID_EN,   PINYIN_ID_VOID }, // F
    { PINYIN_ID_ENG,  PINYIN_ID_NG   }, // G
    { PINYIN_ID_ANG,  PINYIN_ID_VOID }, // H
    { PINYIN_ID_I,    PINYIN_ID_VOID }, // I
    { PINYIN_ID_AN,   PINYIN_ID_VOID }, // J
    { PINYIN_ID_UAI,  PINYIN_ID_ING  }, // K
    { PINYIN_ID_IANG, PINYIN_ID_UANG }, // L
    { PINYIN_ID_IAN,  PINYIN_ID_VOID }, // M
    { PINYIN_ID_IAO,  PINYIN_ID_VOID }, // N
    { PINYIN_ID_UO,   PINYIN_ID_O    }, // O
    { PINYIN_ID_IE,   PINYIN_ID_VOID }, // P
    { PINYIN_ID_IU,   PINYIN_ID_VOID }, // Q
    { PINYIN_ID_UAN,  PINYIN_ID_ER   }, // R
    { PINYIN_ID_ONG,  PINYIN_ID_IONG }, // S
    { PINYIN_ID_UE,   PINYIN_ID_VOID }, // T
    { PINYIN_ID_U,    PINYIN_ID_VOID }, // U
    { PINYIN_ID_V,    PINYIN_ID_UI   }, // V
    { PINYIN_ID_EI,   PINYIN_ID_VOID }, // W
    { PINYIN_ID_IA,   PINYIN_ID_UA   }, // X
    { PINYIN_ID_UN,   PINYIN_ID_VOID }, // Y
    { PINYIN_ID_OU,   PINYIN_ID_VOID }, // Z
    { PINYIN_ID_VOID, PINYIN_ID_VOID }, // ;
};

static const struct {
    const gint8  (&sheng)[27];
    const gint8  (&yun)[27][2];
} double_pinyin_map [] = {
    { double_pinyin_mspy_sheng, double_pinyin_mspy_yun },
    { double_pinyin_zrm_sheng,  double_pinyin_zrm_yun  },
    { double_pinyin_abc_sheng,  double_pinyin_abc_yun  },
    { double_pinyin_zgpy_sheng, double_pinyin_zgpy_yun },
    { double_pinyin_pyjj_sheng, double_pinyin_pyjj_yun },
    { double_pinyin_xhe_sheng,  double_pinyin_xhe_yun  },
};
#endif //DEFINE_DOUBLE_PINYIN_TABLE

#endif //__PY_DOUBLE_PINYIN_TABLE_H_
