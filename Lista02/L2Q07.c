//L2-Q7:

#include <stdio.h>

int main() {
    float n1, n2;
    printf("Digite o Primeiro Valor: ");
    scanf("%f", &n1);
    while(1) {
        printf("Digite o Segundo Valor: ");
        scanf("%f", &n2);
        if (n2 == 0) {
            puts("ERRO! Digite um Valor diferente de Zero.");
        } else {
            break;
        }
    }
    printf("%.1f/%.1f = %.2f", n1, n2, n1/n2);
    
    return 0;
}