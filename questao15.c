#include <stdio.h>

int main(void) {
  printf("digite o valor da hora/aula\n");
  float valor;
  scanf("%f", &valor);
  printf("digite o numero de horas mensais de aula\n");
  int horas;
  scanf("%d", &horas);
  printf("digite o desconto do INSS\n");
  float desconto;
  scanf("%f", &desconto);
  float bruto = valor * horas;
  float liquido = bruto - (bruto * desconto / 100);
  printf("o salario sem desconto é: %.2f\n", bruto);
  printf("o salario com desconto é: %.2f\n", liquido);
  
  return 0;
}