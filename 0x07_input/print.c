#include <stdio.h>
#include "pico/stdlib.h"
#include "input.h"

#define RETURN 0x0d

void print_proc(char* p_usb_char, char* p_usb_string)
{
  if(*p_usb_char == RETURN)
  {
    if(p_usb_string[0] == '\0')
      printf("\n");
    else
      printf("\n%s\n", p_usb_string);
    flush_input(p_usb_string);
  }
}
