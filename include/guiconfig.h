
/******************************************************************************
 * GuiConfig struct contains all information about the GUI aspect of the 
 * simulation --that is the clickable buttons and the box surrounding them
******************************************************************************/
#ifndef GUICONFIG_H
#define GUICONFIG_H
#include "raylib.h"


// Contains all gui-level data
typedef struct GuiConfig
{
    Rectangle gui_background;
    Rectangle cursor_btn;
    Rectangle paint_btn;
    Rectangle efunc_btn;
    Rectangle left_btn;
    Rectangle right_btn;
    Rectangle num_btn;

    int slot_capacity;
    float gui_offset;
    float button_offset;
    float gui_height;

    unsigned char selected_cursor;
    unsigned char selected_paint;
    unsigned char selected_left;
    unsigned char selected_right;
    unsigned char selected_evalue;
    
    // char textbox_input[MAX_INPUT_CHARS+1];
    // char textbox_char_count;

    Texture2D cursor_btn_texture;
    Texture2D paint_btn_texture;
    Texture2D left_btn_texture;
    Texture2D right_btn_texture;

} GuiConfig;

// Runs once during initialization
GuiConfig *init_guiconfig();

#endif
