#include <stdio.h>

int main(void) {
  printf("digite a temperatura em celsius\n");
  float celsius;
  scanf("%f", &celsius);
  float fahrenheit = (celsius * 9/5) + 32;
  printf("a temperatura em fahrenheit é %0.2f", fahrenheit);
 
  
  return 0;
}