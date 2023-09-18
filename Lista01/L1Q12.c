// L1-Q12:

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite o Primeiro Valor: ");
    scanf("%d", &n1);
    printf("Digite o Segundo Valor: ");
    scanf("%d", &n2);

    printf("Somatório: %d", n1+n2);
    printf("\nProduto: %d", n1*n2);
    printf("\nDiferença: |%d|", n1-n2);
    printf("\nQuociente: %.2f", n1/(n2/1.0)); // Dividir por 1.0: "Transforma" em Float.
    printf("\nResto da Divisão: %d\n", n1%n2);
    
    return 0;
}