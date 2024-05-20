// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: Smart_Gadget

#ifndef _SMART_GADGET_UI_H
#define _SMART_GADGET_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"
void Up_Animation(lv_obj_t * TargetObject, int delay);
void hour_Animation(lv_obj_t * TargetObject, int delay);
void min_Animation(lv_obj_t * TargetObject, int delay);
void sec_Animation(lv_obj_t * TargetObject, int delay);
void scrolldot_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_Splash
void ui_Splash_screen_init(void);
void ui_event_Splash(lv_event_t * e);
extern lv_obj_t * ui_Splash;
extern lv_obj_t * ui_Demo;
extern lv_obj_t * ui_UAV_Control;
extern lv_obj_t * ui_Image4;
// SCREEN: ui_Weather
void ui_Weather_screen_init(void);
void ui_event_Weather(lv_event_t * e);
extern lv_obj_t * ui_Weather;
extern lv_obj_t * ui_Weather_Icons;
extern lv_obj_t * ui_shiduIcon;
extern lv_obj_t * ui_PM25Icon;
extern lv_obj_t * ui_fengsuIcon;
extern lv_obj_t * ui_qiyaLabel;
extern lv_obj_t * ui_fengxiangLabel;
extern lv_obj_t * ui_PM25Label;
void ui_event_shiduArc(lv_event_t * e);
extern lv_obj_t * ui_shiduArc;
void ui_event_tempArc(lv_event_t * e);
extern lv_obj_t * ui_tempArc;
void ui_event_fengsuArc(lv_event_t * e);
extern lv_obj_t * ui_fengsuArc;
void ui_event_PM25Arc(lv_event_t * e);
extern lv_obj_t * ui_PM25Arc;
extern lv_obj_t * ui_qiyaIcon;
extern lv_obj_t * ui_tempIcon;
extern lv_obj_t * ui_fengxiangIcon;
extern lv_obj_t * ui_heightIcon;
void ui_event_heightArc(lv_event_t * e);
extern lv_obj_t * ui_heightArc;
void ui_event_fengxiangArc(lv_event_t * e);
extern lv_obj_t * ui_fengxiangArc;
void ui_event_qiyaArc(lv_event_t * e);
extern lv_obj_t * ui_qiyaArc;
extern lv_obj_t * ui_heightLabel;
extern lv_obj_t * ui_shiduLabel;
extern lv_obj_t * ui_tempLabel;
extern lv_obj_t * ui_fengsuLabel;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Panel3;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_wifissid;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_password;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_ipadress;
extern lv_obj_t * ui_port;
extern lv_obj_t * ui_Label12;
extern lv_obj_t * ui_ipadress2;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_uav_png);    // assets\UAV.png
LV_IMG_DECLARE(ui_img_pattern_png);    // assets\pattern.png
LV_IMG_DECLARE(ui_img_logo1_png);    // assets\logo1.png

LV_FONT_DECLARE(ui_font_iconeco30);
LV_FONT_DECLARE(ui_font_iconfont22);
LV_FONT_DECLARE(ui_font_Number);
LV_FONT_DECLARE(ui_font_uavfont);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
