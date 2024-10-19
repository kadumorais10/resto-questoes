#include <stdio.h>

int main(void) {
  printf("digite o comprimento\n");
  printf("digite a altura\n");
  printf("digite a largura\n");
  float comprimento;
  float altura;
  float largura;
  scanf("%f", &comprimento);
  scanf("%f", &altura);
  scanf("%f", &largura);
  float volume = comprimento * altura * largura;
  printf("o volume é %0.2f", volume);
  
  
 
  
  return 0;
}