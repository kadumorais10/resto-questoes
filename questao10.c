#include <stdio.h>

int main(void) {
  printf("digite a cotacao atual do dolar (ex:1 dolar = 5,67 reais)\n");
  float dolar;
  scanf("%f", &dolar);
  printf("digite o valor em reais que deseja converter\n");
  float reais;
  scanf("%f", &reais);
  float conversao = reais / dolar;
  printf("o valor em dolar eh: %0.2f", conversao);
  
 
  
  return 0;
}