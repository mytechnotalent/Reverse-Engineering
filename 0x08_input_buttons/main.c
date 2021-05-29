#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "button_input.h"
#include "ssd1306.h"

int main()
{
  char c = 'a';
  const int BUTTON_STRING_SIZE = 10;
  char button_string[BUTTON_STRING_SIZE];
  button_string[0] = '\0'; 
  int x = 0;
  int y = 0; 
  char* result;
  init_display(64);
  fill_scr(0);
  draw_letter_at(x, y, c); 
  show_scr(); 

  init_gpio_buttons();

  while(1)
  { 
    button_input_proc(&c, button_string, &BUTTON_STRING_SIZE, &x, &y);

    if(!strcmp(button_string, "hi"))
    {
      ssd1306_print("\n");
      ssd1306_print("yay");
      show_scr();
    }
  }

  return 0;
}

