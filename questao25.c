#include <stdio.h>
#include <math.h>

int main() {
    
    float x1, y1, x2, y2, distancia;

    
    printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2, y2): ");
    scanf("%f %f", &x2, &y2);


    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    printf("A distância entre os pontos (%f, %f) e (%f, %f) é: %f\n", x1, y1, x2, y2, distancia);

    return 0;
}
