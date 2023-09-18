// L1-Q26:

#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2;
    printf("Digite as Coordenadas de X1: ");
    scanf("%f", &x1);
    printf("Digite as Coordenadas de Y1: ");
    scanf("%f", &y1);
    printf("Digite as Coordenadas de X2: ");
    scanf("%f", &x2);
    printf("Digite as Coordenadas de Y2: ");
    scanf("%f", &y2);

    float d = sqrt((pow(x2-x1, 2) + pow(y2-y1, 2)));
    printf("Distância dos Pontos: %.1f\n", d);

    return 0;
}