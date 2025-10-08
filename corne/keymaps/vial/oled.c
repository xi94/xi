bool oled_task_user(void) {
  const bool on_main_display = is_keyboard_master();

  if (on_main_display) {
    oled_write_raw_P(PSTR("hello"), false);
  } else {
    oled_write_raw_P(PSTR("there"), false);
  }
  
  return false;
}

