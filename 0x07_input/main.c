#include <stdio.h>
#include "pico/stdlib.h"
#include "print.h"
#include "input.h"

int main()
{
  stdio_init_all();

  const int USB_STRING_SIZE = 100;
  char usb_char;
  usb_char = '\0';
  char usb_string[USB_STRING_SIZE];
  usb_string[0] = '\0';
  
  while(1)
  { 
    input_proc('f', &usb_char, usb_string, &USB_STRING_SIZE);
    print_proc(&usb_char, usb_string);
  }

  return 0;
}

