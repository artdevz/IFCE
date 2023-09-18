// L1-Q18:

#include <stdio.h>
#include <math.h>
const float pi = 3.14159;

int main() {
    float raio;
    printf("Digite o Raio do Círculo: ");
    scanf("%f", &raio);
    printf("\nDiâmetro: %.3f", 2*raio);
    printf("\nCircunferência: %.3f", 2*pi*raio);
    printf("\nÁrea: %.3f\n", pi*(pow(raio, 2)));
    
    return 0;
}