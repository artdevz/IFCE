// L1-Q13:

#include <stdio.h>

int main() {
    int a, b;
    printf("Digite o Valor de A: ");
    scanf("%d", &a);
    printf("Digite o Valor de B: ");
    scanf("%d", &b);
    
    puts("\nAntes da Troca:");
    printf("Valor de A: %d ; Valor de B: %d", a, b);
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    puts("\nDepois da Troca:");
    printf("Valor de A: %d ; Valor de B: %d\n", a, b);
    
    return 0;
}