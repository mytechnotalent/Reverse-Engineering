#include <stdio.h>
#include "pico/stdlib.h"


int main() 
{
  stdio_init_all();

  while(1) 
  {
    int x = 40;
    
    printf("%d\n", x);
    
    sleep_ms(1000);
  }
    
  return 0;
}
