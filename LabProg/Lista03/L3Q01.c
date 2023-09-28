//L3-Q1:

#include <stdio.h>
#define TAM 15

int main() {
    float numbers[TAM];
    float maior, menor;
    for (int i = 0; i < TAM; i++) {
        float num;
        puts("Digite um Número Real: ");
        scanf("%f", &num);
        numbers[i] = num;
        
        if (i == 0 || maior < numbers[i]) maior = numbers[i];
        if (i == 0 || menor > numbers[i]) menor = numbers[i];
    }
    printf("Somátorio do Maior e do Menor: %.2f", maior + menor);

    return 0;
}