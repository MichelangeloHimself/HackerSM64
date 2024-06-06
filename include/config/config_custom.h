#pragma once

/*******************
 * CUSTOM SETTINGS *
 *******************/

/**
 * Disables Power Meter animations and displays
 *  it on the hud at all times.
 */

#define HUD_STATIC_POWER_METER

/**
 * Enables an on screen watermark, requires puppyprint to be enabled. 
 * ## TODO add an ifdef case to prevent an error in the case puppyprint is disabled.
 */

#define HUD_WATERMARK
#define WATERMARK_STRING "POGO'S SLIPPERY SLIDES V0.024"

// Draws a custom logo on the hud.
// #define HUD_CUSTOM_LOGO      // not yet implemented
/**
 * Puppy Print Colors
 */

// 50% Opacity
#define ppColorWhite "<COL_FFFFFFFF>"
#define ppColorBlack "<COL_000000FF>"
#define ppColorRed "<COL_FF5733A0>"
#define ppColorBlue "<COL_33A1FFA0>"
#define ppColorGreen "<COL_B2FF59A0>"

/**
 * TITLE TEXT
 */
    // Game Paused Header
#define GAMEPAUSED_TXT "<WAVE><COL_33A1FFA0>P<COL_FFEB3BA0>A<COL_FF5733A0>U<COL_E040FBA0>S<COL_B2FF59A0>E<COL_FFA500A0>D<WAVE>"
    // Current Slide Title
#define SLIDE_HEADER_TXT "<COL_FF5733A0>SLIDE:"
/**
 * DIMENSIONS AND COORDINATES
 */
#define COURSENAME_X 120        // Coordinates
#define COURSENAME_Y 40         // coordinates
    // BOX DIMENSIONS
#define STATSBOX_Y1 18
#define STATSBOX_HEIGHT 140
#define STATSBOX_WIDTH 90  

// PAUSE MENU OPTION TXT & COORDS
#define PAUSE_TXT_X1 160
#define OPTIONS_POS_Y 160
#define ICON_POS_X1 40
#define ICON_POS_X2 108
#define ICON_POS_X3 184
#define CAM_OPTION_X 190

#define SELECT_ICON "<COL_FF5733FF>("
#define DOWN_ARROW "<COL_33A1FFFF>+"
#define PAUSE_OPTION_TXT1 "<COL_B2FF59FF>CONTINUE     <COL_808080FF>EXIT SLIDE     SET CAM ANGLE"
#define PAUSE_OPTION_TXT2 "<COL_808080FF>CONTINUE     <COL_B2FF59FF>EXIT SLIDE     <COL_808080FF>SET CAM ANGLE"
#define PAUSE_OPTION_TXT3 "<COL_808080FF>CONTINUE     EXIT SLIDE     <COL_B2FF59FF>SET CAM ANGLE"
// #define PAUSE_CONTINUE_TXT_X
// #define PAUSE_EXIT_TXT_X
// #define PAUSE_CAMERA_TXT_X
// #define PAUSE_CAM_TYPE_TXT_X 

/**
 * CUSTOM COURSE NAMES
 *  ## Try limit course names to 24 Characters ##
 */
#define COURSENONE "COURSE NOT FOUND"
#define COURSENAMEONE "pogo's party playhouse"
