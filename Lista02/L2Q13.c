//L2-Q13:

#include <stdio.h>

int main() {
    short int a, b, soma;
    
    printf("Digite o Limite A: ");
    scanf("%hd", &a);
    printf("Digite o Limite B: ");
    scanf("%hd", &b);

    if (a <= b) {
        for (int i = a; i <= b; i++) {
            if (!(i % 2)) {
                soma+=i;
            }
        }
    }
    else {
        for (int i = b; i <= a; i++) {
            if (!(i % 2)) {
                soma+=i;
            }
        }
    }
    printf("Somatório de Todos os Pares: %hd", soma);
    
    return 0;
}