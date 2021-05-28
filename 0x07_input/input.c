#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"

#define ZERO 0x30
#define NINE 0x39
#define PERIOD 0x2e
#define CAPITAL_A 0x41
#define LOWER_CASE_Z 0x7a
#define BACKSPACE 0x08
#define DEL 0x7f

void input_proc(char type, char* p_usb_char, char* p_usb_string, const int* p_USB_STRING_SIZE)
{
  *p_usb_char = '\0';
  *p_usb_char = getchar_timeout_us(0);
  if(*p_usb_char == BACKSPACE || *p_usb_char == DEL)
  {
    if(p_usb_string[0] != '\0')
    {
      printf("\b");
      printf(" ");
      printf("\b");
      p_usb_string[strlen(p_usb_string)-1] = '\0';
    }
  }
  if(type == 'f')
  { 
    char* period;
    while((*p_usb_char >= ZERO && *p_usb_char <= NINE) || *p_usb_char == PERIOD)
    {
      if(*p_usb_char == PERIOD)
        period = strchr(p_usb_string, '.');
      if(period == NULL) 
      {
        if(strlen(p_usb_string) < *p_USB_STRING_SIZE)
        {
          putchar(*p_usb_char);
          strncat(p_usb_string, p_usb_char, 1);
        }
        *p_usb_char = '\0';
      }
      else
        break;
    }
  }
  else if(type == 'd')
  { 
    while(*p_usb_char >= ZERO && *p_usb_char <= NINE)
    {
      if(strlen(p_usb_string) < *p_USB_STRING_SIZE)
      {
        putchar(*p_usb_char);
        strncat(p_usb_string, p_usb_char, 1);
      }
      *p_usb_char = '\0';
    }
  }
  else if(type == 's')
  { 
    while(*p_usb_char >= CAPITAL_A && *p_usb_char <= LOWER_CASE_Z)
    {
      if(strlen(p_usb_string) < *p_USB_STRING_SIZE)
      {
        putchar(*p_usb_char);
        strncat(p_usb_string, p_usb_char, 1);
      }
      *p_usb_char = '\0';
    }
  }
}

void flush_input(char* p_usb_string)
{
  p_usb_string[0] = '\0';
}
