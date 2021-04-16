#include <stdio.h>
#include "pico/stdlib.h"

int main() 
{
  stdio_init_all();

  while(1) 
  {
    double x = 40.5;
        
    printf("%f\n", x);
    sleep_ms(1000);
  }
    
  return 0;
}
