#include <stdio.h>

int main() {
    int numero, unidade, dezena, centena, numeroInvertido;

    
    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    
    if (numero < 100 || numero > 999) {
        printf("Por favor, digite um número de três dígitos.\n");
        return 1;
    }

    
    unidade = numero % 10;           
    dezena = (numero / 10) % 10;     
    centena = numero / 100;          

    
    numeroInvertido = (unidade * 100) + (dezena * 10) + centena;

    
    printf("Número invertido: %d\n", numeroInvertido);

    return 0;
}
