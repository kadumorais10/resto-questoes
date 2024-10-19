#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("digite o primeiro valor\n");
    int n1;
    scanf("%d", &n1);
    printf("digite o segundo valor\n");
    int n2;
    scanf("%d", &n2);
    int multiplo = n1 % n2;
    printf("se o resultado for 0, o primeiro valor é multiplo do segundo\n");
    printf("o resultado é: %d", multiplo);
  
 
            

return 0;
}