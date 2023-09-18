// L1-Q27:

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Digite o Primeiro Número: ");
    scanf("%f", &a);
    printf("Digite o Segundo Número: ");
    scanf("%f", &b);
    printf("Digite o Terceiro Número: ");
    scanf("%f", &c);
    
    printf("Média Aritmétrica: %f\n", (a+b+c)/3);
    printf("Média Geométrica: %f\n", cbrt(a*b*c));

    return 0;
}