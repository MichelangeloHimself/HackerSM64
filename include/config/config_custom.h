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
#define WATERMARK_STRING "SlidesTesting V0.025"


// Draws a custom logo on the hud.
// #define HUD_CUSTOM_LOGO      // not yet implemented