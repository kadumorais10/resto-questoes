#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("digite o raio da circunferencia");
    float raio;
    scanf("%f", &raio);
    float area = 3.14159 * (raio * raio);
    printf("a area da circunferencia eh: %0.5f", area);
    float diametro = 2 * raio;
    printf("o diametro da circunferencia eh: %0.5f", diametro);
    float circunferencia = 2 * 3.14159 * raio;
    printf("a circunferencia da circunferencia eh: %0.5f", circunferencia);

return 0;
}