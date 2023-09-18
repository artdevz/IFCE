//L2-Q8:

#include <stdio.h>

int main() {
    float price;
    int prestacao;
    
    printf("Digite o Valor Total do Produto: R$ ");
    scanf("%f", &price);
    prestacao = price/3;

    printf("\nValor de Entrada: R$ %.2f\nPrestações: 2x R$ %.2f", price-2*prestacao, (float)prestacao);

    return 0;
}