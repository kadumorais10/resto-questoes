#include <stdio.h>

int main(void) {
  printf("digite o numero de dias trabalhados\n");
  int dias;
  scanf("%d", &dias);
  float diaria = 50.25;
  int salario;
  
  if(dias < 10){
    salario = dias * diaria - (dias * diaria *0.1);
    printf("o salario é %d", salario);
    
  }
  if(10<=dias && dias<=20){
    salario = dias * diaria + (dias * diaria * 0.2) - (dias * diaria * 0.1);
    printf("o salario é %d", salario);
    
    
  }
  if(dias>20){
    salario = dias * diaria + (dias * diaria * 0.3) - (dias * diaria * 0.1);
  }
  
 
  
  return 0;
}