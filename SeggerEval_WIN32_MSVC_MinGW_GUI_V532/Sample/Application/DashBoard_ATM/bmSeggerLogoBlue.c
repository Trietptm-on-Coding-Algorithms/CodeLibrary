/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2015  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.32 - Graphical user interface for embedded applications **
emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only  be used  in accordance  with  a license  and should  not be  re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : bmSeggerLogoBlue.c
Purpose     : Bitmap file
---------------------------END-OF-HEADER------------------------------
*/

#include "GUI.h"

static const GUI_COLOR _ColorsSeggerLogoBlue[] = {
#if (GUI_USE_ARGB)
     0xFFFF0000,0xFF000000,0xFF888888,0xFFFFFFFF
    ,0xFF0000FF,0xFFBBBBBB
#else
     0x0000FF,0x000000,0x888888,0xFFFFFF
    ,0xFF0000,0xBBBBBB
#endif
};

static const GUI_LOGPALETTE _PalSeggerLogoBlue = {
  6,	/* number of entries */
  1, 	/* Has transparency */
  &_ColorsSeggerLogoBlue[0]
};

static const unsigned char _acSeggerLogoBlue[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00,
  0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00,
  0x01, 0x11, 0x12, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x21, 0x11, 0x10,
  0x01, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x53, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x43, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x43, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x43, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x43, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x44, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x53, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x44, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x22, 0x11, 0x12, 0x23, 0x33, 0x33, 0x32, 0x11, 0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x35, 0x22, 0x11, 0x12, 0x53, 0x33, 0x33, 0x33, 0x35, 0x22, 0x11, 0x12, 0x53, 0x33, 0x33, 0x33, 0x21, 0x11, 0x11, 0x11, 0x11, 0x12, 0x33, 0x21, 0x11, 0x11, 0x11, 0x12, 0x53, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x34, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x53, 0x33, 0x33, 0x31, 0x11, 0x11, 0x11, 0x11, 0x53, 0x33, 0x31, 0x11, 0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x21, 0x11, 0x11, 0x11, 0x11, 0x33, 0x33, 0x33, 0x21, 0x11, 0x11, 0x11, 0x11, 0x33, 0x33, 0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 0x15, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x21, 0x12, 0x33, 0x35, 0x11, 0x13, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x32, 0x11, 0x25, 0x33, 0x52, 0x11, 0x13, 0x33, 0x32, 0x11, 0x25, 0x33, 0x52, 0x11, 0x13, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x21, 0x12, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x51, 0x23, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x51, 0x12, 0x33, 0x33, 0x33, 0x21, 0x23, 0x33, 0x51, 0x12, 0x33, 0x33, 0x33, 0x21, 0x23, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x21, 0x12, 0x53, 0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x15, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x15, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x33, 0x31, 0x11, 0x11, 0x12, 0x23, 0x33, 0x33, 0x31, 0x11, 0x11, 0x11, 0x11, 0x12, 0x33, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x11, 0x13, 0x33, 0x33, 0x21, 0x12, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x52, 0x21, 0x11, 0x11, 0x23, 0x33, 0x31, 0x11, 0x11, 0x11, 0x11, 0x12, 0x33, 0x11, 0x13, 0x33, 0x32, 0x11, 0x11, 0x12, 0x33, 0x11, 0x13, 0x33, 0x32, 0x11, 0x11, 0x12, 0x33, 0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x54, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x52, 0x11, 0x12, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x32, 0x11, 0x11, 0x11, 0x33, 0x11, 0x13, 0x33, 0x32, 0x11, 0x11, 0x11, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x35, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x53, 0x33, 0x33, 0x51, 0x11, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x15, 0x33, 0x33, 0x33, 0x31, 0x11, 0x33, 0x21, 0x15, 0x33, 0x33, 0x33, 0x31, 0x11, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x21, 0x12, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x34, 0x44, 0x44, 0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x31, 0x11, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x51, 0x12, 0x33, 0x33, 0x33, 0x21, 0x11, 0x33, 0x51, 0x12, 0x33, 0x33, 0x33, 0x21, 0x11, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x11, 0x53, 0x33, 0x21, 0x12, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x32, 0x11, 0x25, 0x33, 0x32, 0x11, 0x11, 0x33, 0x32, 0x11, 0x25, 0x33, 0x32, 0x11, 0x11, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x13, 0x33, 0x33, 0x31, 0x11, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x45, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x32, 0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x31, 0x11, 0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x21, 0x11, 0x11, 0x11, 0x12, 0x11, 0x33, 0x33, 0x21, 0x11, 0x11, 0x11, 0x12, 0x11, 0x33, 0x33, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x33, 0x11, 0x13, 0x33, 0x33, 0x32, 0x11, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x53, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x52, 0x21, 0x11, 0x25, 0x33, 0x33, 0x32, 0x11, 0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x35, 0x22, 0x11, 0x22, 0x35, 0x12, 0x33, 0x33, 0x35, 0x22, 0x11, 0x22, 0x35, 0x12, 0x33, 0x33, 0x21, 0x11, 0x11, 0x11, 0x11, 0x12, 0x33, 0x21, 0x23, 0x33, 0x33, 0x35, 0x12, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x21, 0x10,
  0x01, 0x12, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x11, 0x10,
  0x01, 0x11, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x35, 0x11, 0x10,
  0x01, 0x11, 0x12, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x21, 0x11, 0x10,
  0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00,
  0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00,
  0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00
};

extern GUI_CONST_STORAGE GUI_BITMAP bmSeggerLogo;

const GUI_BITMAP bmSeggerLogo = {
 138, /* XSize */
 65, /* YSize */
 69, /* BytesPerLine */
 4, /* BitsPerPixel */
 _acSeggerLogoBlue,  /* Pointer to picture data (indices) */
 &_PalSeggerLogoBlue  /* Pointer to palette */
};
