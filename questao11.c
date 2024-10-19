#include <stdio.h>

int main(void) {
  printf("digite o primeiro numero\n");
  int a;
  scanf("%d", &a);
  printf("digite o segundo numero\n");
  int b;
  scanf("%d", &b);
  int soma = a + b;
  printf("a soma dos numeros é: %d\n", soma);
  int subtração = a - b;
  printf("a subtração dos numeros é: %d\n", subtração);
  int multiplicação = a * b;
  printf("a multiplicação dos numeros é: %d\n", multiplicação);
  float divisao = a / b;
  printf("a divisão dos numeros é: %0.2f\n", divisao);
  int resto = a % b;
  printf("o resto da divisão dos numeros é: %d\n", resto);
  
  
  return 0;
}