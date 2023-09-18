// L1-Q5:

#include <stdio.h>

int main() {
    float valor;
    printf("Digite o Valor da Conta: ");
    scanf("%f", &valor);
    printf("Valor Total da Conta: R$%.2f\n", valor*1.10);
    
    return 0;
}