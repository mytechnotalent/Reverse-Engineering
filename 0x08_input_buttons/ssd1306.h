#include <stdint.h>

void init_display(int h);
void set_cursor_x(int x);
void set_cursor_y(int y);
void ssd1306_print(const char* str);
void draw_letter_at(uint8_t x, uint8_t y, char c);
void draw_bitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
  int16_t h, uint16_t color);
void show_scr();
void fill_scr(uint8_t v);

