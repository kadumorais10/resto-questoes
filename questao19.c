#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("digite um valor\n");
    int valor;
    scanf("%d", &valor);
    printf("(se o resultado que aparecer na sua tela for 0, o seu numero eh par, se for 1, o seu numero eh impar)\n");
    int resto = valor % 2;
    int par = 0;
    int impar = 1;
    printf("o resultado eh %d", resto);
 
            

return 0;
}