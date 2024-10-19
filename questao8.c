#include <stdio.h>

int main(void) {
  printf("digite o valor\n");
  int valor;
  scanf("%d", &valor);
  int sucessor = valor + 1;
  int antecessor = valor - 1;
  printf("o sucessor é %d\n", sucessor);
  printf("o antecessor é %d\n", antecessor);

  
 
  
  return 0;
}