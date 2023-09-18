// L1-Q21:

#include <stdio.h>

int main() {
    short int n1, n2;
    printf("Digite o 1º Número: ");
    scanf("%hd", &n1);
    printf("Digite o 2º Número: ");
    scanf("%hd", &n2);
    
    (n1%n2)? puts("Não é Múltiplo."): puts("Múltiplo!");
    
    return 0;
}