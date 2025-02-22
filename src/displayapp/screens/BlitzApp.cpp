#include "displayapp/screens/BlitzApp.h"

using namespace Pinetime::Applications::Screens;

BlitzApp::BlitzApp() {
  lv_obj_t* title = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_static(title, "My test application");
  lv_label_set_align(title, LV_LABEL_ALIGN_CENTER);
  lv_obj_align(title, lv_scr_act(), LV_ALIGN_CENTER, 0, 0);
}

BlitzApp::~BlitzApp() {
  lv_obj_clean(lv_scr_act());
}