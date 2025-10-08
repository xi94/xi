#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

bool oled_task_user(void) {
  const bool on_main_display = is_keyboard_master();

  if (on_main_display) {
    oled_write_P(PSTR("hello"), false);
  } else {
    oled_write_P(PSTR("there"), false);
  }
  
  return false;
}

#endif // OLED_ENABLE
