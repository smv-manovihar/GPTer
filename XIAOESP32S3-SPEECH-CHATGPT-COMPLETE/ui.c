// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.2.0
// Project name: chatgpt

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_mainScreen;
lv_obj_t *ui_questionBox;
lv_obj_t *ui_question;
lv_obj_t *ui_answeBox;
lv_obj_t *ui_answer;
void ui_event_stratButton( lv_event_t * e);
lv_obj_t *ui_stratButton;
lv_obj_t *ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_stratButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      i2s_adc( e );
}
}

///////////////////// SCREENS ////////////////////
void ui_mainScreen_screen_init(void)
{
ui_mainScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_mainScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_questionBox = lv_obj_create(ui_mainScreen);
lv_obj_set_width( ui_questionBox, 240);
lv_obj_set_height( ui_questionBox, 180);
lv_obj_set_x( ui_questionBox, 0 );
lv_obj_set_y( ui_questionBox, -125 );
lv_obj_set_align( ui_questionBox, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_questionBox, lv_color_hex(0x0099FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_clear_flag( ui_questionBox, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_border_color(ui_questionBox, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_questionBox, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_questionBox, lv_color_hex(0xFFFFFF), LV_PART_SCROLLBAR | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_questionBox, 255, LV_PART_SCROLLBAR| LV_STATE_DEFAULT);

ui_question = lv_label_create(ui_questionBox);
lv_obj_set_width( ui_question, 180);
lv_obj_set_height( ui_question, 15);
lv_obj_set_align( ui_question, LV_ALIGN_BOTTOM_MID );
lv_label_set_long_mode(ui_question,LV_LABEL_LONG_SCROLL_CIRCULAR);
lv_label_set_text(ui_question,"Hello! Ask me anything!..................");
lv_obj_set_style_text_color(ui_question, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_question, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_question, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_question, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_answeBox = lv_obj_create(ui_mainScreen);
lv_obj_set_width( ui_answeBox, 190);
lv_obj_set_height( ui_answeBox, 140);
lv_obj_set_x( ui_answeBox, 8 );
lv_obj_set_y( ui_answeBox, 30 );
lv_obj_set_align( ui_answeBox, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_answeBox, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_style_bg_color(ui_answeBox, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_answeBox, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_answeBox, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_answeBox, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_border_color(ui_answeBox, lv_color_hex(0x000000), LV_PART_SCROLLBAR | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_answeBox, 0, LV_PART_SCROLLBAR| LV_STATE_DEFAULT);

ui_answer = lv_label_create(ui_answeBox);
lv_obj_set_width( ui_answer, 170);
lv_obj_set_height( ui_answer, 130);
lv_label_set_text(ui_answer,"Tap the screen and ask your question!");
lv_obj_set_style_text_color(ui_answer, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_answer, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_answer, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_answer, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_stratButton = lv_imgbtn_create(ui_mainScreen);
lv_imgbtn_set_src(ui_stratButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_chatgpt_png, NULL);
lv_obj_set_height( ui_stratButton, 30);
lv_obj_set_width( ui_stratButton, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_stratButton, -90 );
lv_obj_set_y( ui_stratButton, -5 );
lv_obj_set_align( ui_stratButton, LV_ALIGN_CENTER );

lv_obj_add_event_cb(ui_stratButton, ui_event_stratButton, LV_EVENT_ALL, NULL);

}

void ui_init( void ){
LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_mainScreen_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_mainScreen);
}
