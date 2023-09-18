//L2-Q14:

#include <stdio.h>

int main() {
    short int a, b, multi;
    
    printf("Digite o Limite A: ");
    scanf("%hd", &a);
    printf("Digite o Limite B: ");
    scanf("%hd", &b);

    if (a <= b) {
        for (int i = a; i <= b; i++) {
            if (!(i % 3)) {
                multi++;
            }
        }
    }
    else {
        for (int i = b; i <= a; i++) {
            if (!(i % 3)) {
                multi++;
            }
        }
    }
    printf("Total de Números Múltiplos de Três: %hd", multi);
    
    return 0;
}