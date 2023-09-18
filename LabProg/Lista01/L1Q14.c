// L1-Q14:

#include <stdio.h>

int main() {
    float temp;
    printf("Digite a Temperatura em °C: ");
    scanf("%f", &temp);
    printf("Conversão para °F: %.1f\n", (9 * temp + 160) / 5);
    
    return 0;
}