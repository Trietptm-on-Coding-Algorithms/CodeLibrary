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
File        : LogoBitmap.c
Purpose     : Contains the logo bitmap
---------------------------END-OF-HEADER------------------------------
*/

#include "GUI.h"
#include "Main.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR _ColorsLogoSegger[] = {
   0x0000FF,0x280000,0x500000,0x780000
  ,0xA00000,0xCCCDCD,0xF4F4F4,0xFFFFFF
  ,0xFFCACA,0xFF0000,0xFF9191,0xFF5656
  ,0x9FA0A2,0x606264,0x000000,0x1F1F1F
};

static GUI_CONST_STORAGE GUI_LOGPALETTE _PalLogoSegger = {
  16,	/* number of entries */
  1, 	/* Has transparency */
  &_ColorsLogoSegger[0]
};

static GUI_CONST_STORAGE unsigned char _acLogoSegger[] = {
  0x00, 0x12, 0x34, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x43, 0x21, 0x00,
  0x02, 0x34, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x43, 0x20,
  0x13, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x31,
  0x24, 0x44, 0x56, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x65, 0x44, 0x42,
  0x34, 0x45, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x54, 0x43,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x76, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x89, 0x9A, 0x77, 0x77, 0x77, 0x77, 0x77, 0x69, 0x9A, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x76, 0x99, 0x99, 0x87, 0x77, 0x77, 0x77, 0x77, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x76, 0x99, 0x99, 0x96, 0x77, 0x77, 0x77, 0x77, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0xA9, 0x99, 0x9B, 0x77, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x7B, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x76, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x69, 0x99, 0x99, 0x87, 0x77, 0x77, 0x77, 0x69, 0x99, 0x99, 0x87, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x78, 0x99, 0x99, 0x96, 0x77, 0x77, 0x77, 0x78, 0x99, 0x99, 0xB6, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x77, 0xA9, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x77, 0xA9, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x77, 0x6B, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x6B, 0x99, 0x99, 0x87, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x66, 0x77, 0x77, 0x77, 0x76, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x78, 0x99, 0x99, 0x96, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x6B, 0x67, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0xA9, 0x99, 0x9B, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0xB6, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x7B, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0x9A, 0x77, 0x77, 0x77, 0x76, 0xB9, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x76, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0x99, 0x87, 0x77, 0x77, 0x77, 0x69, 0x99, 0x99, 0x87, 0x77, 0x77, 0x77, 0x89, 0x99, 0x9B, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0x99, 0x96, 0x77, 0x77, 0x77, 0x78, 0x99, 0x99, 0x96, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0x99, 0x9B, 0x77, 0x77, 0x77, 0x77, 0xA9, 0x99, 0x9B, 0x77, 0x77, 0x77, 0x76, 0xB9, 0x99, 0x98, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x6B, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x76, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x67, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0x99, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x67, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0x99, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x69, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0x99, 0x99, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x76, 0xB9, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x67, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0x99, 0x99, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0x99, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x6B, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0x99, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x67, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x76, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x67, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x7B, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0x99, 0x9B, 0x77, 0x77, 0x77, 0x77, 0xA9, 0x99, 0x9B, 0x77, 0x77, 0x77, 0x76, 0xB9, 0x99, 0x98, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0x99, 0x96, 0x77, 0x77, 0x77, 0x78, 0x99, 0x99, 0x97, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0x99, 0x87, 0x77, 0x77, 0x77, 0x69, 0x99, 0x99, 0x87, 0x77, 0x77, 0x77, 0x89, 0x99, 0x9B, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x69, 0x9A, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x76, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x79, 0xB7, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x7B, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x6B, 0x67, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0xA9, 0x99, 0x9B, 0x77, 0x77, 0x77, 0x75, 0xCC, 0xDC, 0xC6, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x67, 0x77, 0x77, 0x75, 0xCC, 0xDC, 0xC6, 0x77, 0x77, 0x77, 0x77, 0x76, 0x5C, 0xDC, 0xCC, 0x67, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x67, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x66, 0x77, 0x77, 0x77, 0x76, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x78, 0x99, 0x99, 0x96, 0x77, 0x77, 0x75, 0xDE, 0xEE, 0xEE, 0xEE, 0xC6, 0x77, 0x7C, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xD7, 0x77, 0x75, 0xDE, 0xEE, 0xEE, 0xEE, 0xD6, 0x77, 0x77, 0x77, 0xCE, 0xEE, 0xEE, 0xEE, 0xEC, 0x77, 0x77, 0x7D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xC7, 0x7C, 0xEE, 0xEE, 0xEE, 0xEE, 0xED, 0x57, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7B, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x6B, 0x99, 0x99, 0x87, 0x77, 0x77, 0x6E, 0xEE, 0xED, 0xDD, 0xEE, 0xED, 0x77, 0x7D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xD7, 0x77, 0xCE, 0xEE, 0xED, 0xDE, 0xEE, 0xED, 0x67, 0x77, 0x7D, 0xEE, 0xEE, 0xDD, 0xEE, 0xEE, 0xD7, 0x77, 0x6F, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xC7, 0x7D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xE5, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x77, 0xA9, 0x99, 0x9B, 0x77, 0x77, 0x77, 0x77, 0xA9, 0x99, 0x9A, 0x77, 0x77, 0x77, 0xCE, 0xED, 0x67, 0x76, 0xCE, 0xEE, 0x67, 0x7D, 0xEE, 0xD5, 0x55, 0x55, 0x55, 0x77, 0x75, 0xEE, 0xED, 0x56, 0x76, 0xCE, 0xEE, 0xC7, 0x77, 0xCE, 0xEE, 0xD6, 0x67, 0x6C, 0xEE, 0xE5, 0x77, 0x6D, 0xEE, 0xC5, 0x55, 0x55, 0x56, 0x77, 0x6D, 0xEE, 0xC5, 0x55, 0x5C, 0xEE, 0xED, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x78, 0x99, 0x99, 0x96, 0x77, 0x77, 0x77, 0x78, 0x99, 0x99, 0xB6, 0x77, 0x77, 0x77, 0xDE, 0xED, 0x77, 0x77, 0x75, 0xDC, 0x77, 0x7D, 0xEE, 0xC7, 0x77, 0x77, 0x77, 0x77, 0x7D, 0xEE, 0xD7, 0x77, 0x77, 0x7C, 0xED, 0x57, 0x76, 0xDE, 0xED, 0x77, 0x77, 0x77, 0xCE, 0xD6, 0x77, 0x6F, 0xEE, 0x57, 0x77, 0x77, 0x77, 0x77, 0x7D, 0xEE, 0xC7, 0x77, 0x77, 0xCE, 0xED, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x69, 0x99, 0x99, 0x87, 0x77, 0x77, 0x77, 0x69, 0x99, 0x99, 0x87, 0x77, 0x77, 0x77, 0xCE, 0xEE, 0xDC, 0x56, 0x77, 0x77, 0x77, 0x7D, 0xEE, 0xC6, 0x66, 0x66, 0x67, 0x77, 0x6E, 0xEE, 0xC7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x75, 0xEE, 0xE5, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7F, 0xEE, 0xC6, 0x66, 0x66, 0x67, 0x77, 0x6D, 0xEE, 0xC7, 0x77, 0x77, 0xDE, 0xED, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x9A, 0x77, 0x77, 0x77, 0x77, 0x6D, 0xEE, 0xEE, 0xED, 0xDC, 0x67, 0x77, 0x7D, 0xEE, 0xEE, 0xEE, 0xEE, 0xED, 0x67, 0x5E, 0xEE, 0x67, 0x77, 0x76, 0x66, 0x66, 0x67, 0x7C, 0xEE, 0xE7, 0x77, 0x77, 0x66, 0x66, 0x67, 0x77, 0x6D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEC, 0x67, 0x7D, 0xEE, 0xDC, 0xCC, 0xCD, 0xEE, 0xE5, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xB7, 0x77, 0x77, 0x77, 0x77, 0x75, 0xCE, 0xEE, 0xEE, 0xEE, 0xEC, 0x77, 0x7D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEF, 0x67, 0xCE, 0xEE, 0x67, 0x77, 0x5E, 0xEE, 0xEE, 0xD6, 0x7C, 0xEE, 0xD7, 0x77, 0x7C, 0xEE, 0xEE, 0xED, 0x67, 0x6F, 0xEE, 0xEE, 0xEE, 0xEE, 0xED, 0x77, 0x6D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x57, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x76, 0x5C, 0xDE, 0xEE, 0xEE, 0xC7, 0x7D, 0xEE, 0xD5, 0xC5, 0xC5, 0x55, 0x77, 0x5E, 0xEE, 0x57, 0x77, 0xCE, 0xEE, 0xEE, 0xE5, 0x7C, 0xEE, 0xE6, 0x77, 0x7C, 0xEE, 0xEE, 0xEE, 0x67, 0x6F, 0xEE, 0xCC, 0x55, 0xC5, 0x56, 0x77, 0x7D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xC6, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x76, 0x99, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0x77, 0x75, 0x57, 0x77, 0x77, 0xCE, 0xEE, 0xD7, 0x7D, 0xEE, 0xC7, 0x77, 0x77, 0x77, 0x77, 0x6E, 0xEE, 0xC7, 0x77, 0x75, 0x55, 0xDE, 0xE5, 0x75, 0xEE, 0xE5, 0x77, 0x76, 0x55, 0x5F, 0xEE, 0x67, 0x6D, 0xEE, 0x57, 0x77, 0x77, 0x77, 0x77, 0x6D, 0xEE, 0xC6, 0x66, 0x6C, 0xEE, 0xE5, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x7B, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x7A, 0x99, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x77, 0x77, 0xCE, 0xEC, 0x77, 0x77, 0x7C, 0xEE, 0xD6, 0x7D, 0xEE, 0xC7, 0x77, 0x77, 0x77, 0x77, 0x7D, 0xEE, 0xD6, 0x77, 0x77, 0x75, 0xEE, 0xE5, 0x77, 0xDE, 0xED, 0x67, 0x77, 0x77, 0xCE, 0xEE, 0x67, 0x6F, 0xEE, 0x57, 0x77, 0x77, 0x77, 0x77, 0x7D, 0xEE, 0xC7, 0x77, 0x76, 0xEE, 0xEC, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0xA9, 0x99, 0x9B, 0x77, 0x77, 0x77, 0x77, 0x89, 0x99, 0x99, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0xCE, 0xEE, 0xC6, 0x76, 0x5D, 0xEE, 0xD7, 0x7D, 0xEE, 0xDC, 0xCC, 0xCC, 0xCC, 0x57, 0x75, 0xEE, 0xED, 0xC6, 0x66, 0xCE, 0xEE, 0xE5, 0x77, 0x5E, 0xEE, 0xD5, 0x66, 0x5C, 0xEE, 0xEE, 0x67, 0x7F, 0xEE, 0xCC, 0xCC, 0xCC, 0xCC, 0x67, 0x6D, 0xEE, 0xC7, 0x77, 0x77, 0xEE, 0xEC, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x76, 0x99, 0x99, 0x96, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0x98, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x6D, 0xEE, 0xEE, 0xDE, 0xEE, 0xEE, 0x67, 0x7D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xF5, 0x77, 0x5E, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xE5, 0x77, 0x7C, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x67, 0x6D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xF7, 0x7F, 0xEE, 0xC7, 0x77, 0x77, 0xDE, 0xED, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x76, 0x99, 0x99, 0x87, 0x77, 0x77, 0x77, 0x77, 0xB9, 0x99, 0xA7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x76, 0xCE, 0xEE, 0xEE, 0xEE, 0xD5, 0x77, 0x75, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xF5, 0x77, 0x75, 0xDE, 0xEE, 0xEE, 0xEC, 0x5E, 0xE5, 0x77, 0x77, 0xCD, 0xEE, 0xEE, 0xEE, 0xC5, 0xEE, 0x67, 0x7D, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xD7, 0x7D, 0xEE, 0x57, 0x77, 0x77, 0xCE, 0xEC, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x89, 0x9A, 0x77, 0x77, 0x77, 0x77, 0x77, 0x6B, 0x9B, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x76, 0xCC, 0xCC, 0xC5, 0x77, 0x77, 0x77, 0x65, 0x55, 0x55, 0x55, 0x55, 0x67, 0x77, 0x77, 0x75, 0xCC, 0xCC, 0x67, 0x75, 0xC7, 0x77, 0x77, 0x77, 0x5C, 0xCC, 0xC6, 0x76, 0xC5, 0x77, 0x77, 0x65, 0x55, 0x55, 0x55, 0x55, 0x77, 0x76, 0x55, 0x77, 0x77, 0x77, 0x65, 0x56, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x76, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x44, 0x46, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x64, 0x44,
  0x34, 0x45, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x54, 0x43,
  0x24, 0x44, 0x56, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x65, 0x44, 0x42,
  0x13, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x31,
  0x02, 0x34, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x43, 0x20,
  0x00, 0x12, 0x34, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x43, 0x21, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmLogoBitmap = {
 140, /* XSize */
 66,  /* YSize */
 70,  /* BytesPerLine */
 4,   /* BitsPerPixel */
 _acLogoSegger,   /* Pointer to picture data (indices) */
 &_PalLogoSegger  /* Pointer to palette */
};

