#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "ssd1306.h"

#define YELLOW_BUTTON 9
#define BLUE_BUTTON 10
#define BLACK_BUTTON 11
#define RED_BUTTON 12
#define GREEN_BUTTON 13

int submit_char_flag = 0;

char* init_gpio_buttons()
{
  gpio_init(YELLOW_BUTTON);
  gpio_set_dir(YELLOW_BUTTON, GPIO_IN);
  gpio_pull_up(YELLOW_BUTTON);
  gpio_init(BLUE_BUTTON);
  gpio_set_dir(BLUE_BUTTON, GPIO_IN);
  gpio_pull_up(BLUE_BUTTON);
  gpio_init(BLACK_BUTTON);
  gpio_set_dir(BLACK_BUTTON, GPIO_IN);
  gpio_pull_up(BLACK_BUTTON);
  gpio_init(RED_BUTTON);
  gpio_set_dir(RED_BUTTON, GPIO_IN);
  gpio_pull_up(RED_BUTTON);
  gpio_init(GREEN_BUTTON);
  gpio_set_dir(GREEN_BUTTON, GPIO_IN);
  gpio_pull_up(GREEN_BUTTON);
}

void button_input_proc(char* p_c, char* p_button_string, const int* p_BUTTON_STRING_SIZE, int* p_x, int* p_y)
{
  if(!gpio_get(YELLOW_BUTTON))
  {
    if(*p_x == -7)
      *p_x = 0;
    if(*p_c < 'z')
    {
      *p_c = *p_c + 1;;
      draw_letter_at(*p_x, *p_y, *p_c); 
      show_scr();
      submit_char_flag = 1;
    }
    sleep_ms(250);
  }
  if(!gpio_get(BLUE_BUTTON))
  {
    if(*p_x == -7)
      *p_x = 0;
    if(*p_c > 'a')
    {
      *p_c = *p_c - 1;;
      draw_letter_at(*p_x, *p_y, *p_c); 
      show_scr();
      submit_char_flag = 1;
    }
    sleep_ms(250);
  }
  if(!gpio_get(BLACK_BUTTON))
  {
    if(*p_x < 70 && submit_char_flag)
    {
      *p_x = *p_x + 7;
      strncat(p_button_string, p_c, 1);
      submit_char_flag = 0;   
    }   
    sleep_ms(250);
  }
  if(!gpio_get(RED_BUTTON))
  {
    if(*p_x >= 0)
    {
      *p_x = *p_x - 7;
      if(p_button_string[0] != '\0')
      {
        p_button_string[strlen(p_button_string)-1] = '\0';
      }
      draw_letter_at(*p_x+7, *p_y, ' ');
      draw_letter_at(*p_x, *p_y, ' ');
      show_scr();
    }
    sleep_ms(250);
  }
  if(!gpio_get(GREEN_BUTTON))
  {
    fill_scr(0);
    *p_x = 0;
    *p_c = 'a';
    draw_letter_at(*p_x, *p_y, *p_c);
    show_scr();
    p_button_string[0] = '\0';
    ssd1306_print("\n");
    ssd1306_print(p_button_string);
    show_scr();
    sleep_ms(250);
  }
}
