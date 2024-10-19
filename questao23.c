#include <stdio.h>

int main() {
    int x, n, resultado;

    // Solicita ao usuário que insira os valores de x e n
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcula 2^n usando o operador de deslocamento à esquerda
    int pot2 = 1 << n; // 2^n é equivalente a 1 deslocado n bits para a esquerda

    // Calcula o produto
    resultado = x * pot2;

    // Exibe o resultado
    printf("O resultado de %d * 2^%d é: %d\n", x, n, resultado);

    return 0;
}
