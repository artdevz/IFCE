//L2-Q11:

#include <stdio.h>
#include <math.h>

int main() {
    short int a, b;
    
    printf("Digite o Limite A: ");
    scanf("%hd", &a);
    printf("Digite o Limite B: ");
    scanf("%hd", &b);

    if (a <= b) {
        for (int i = a; i <= b; i++) {
            if (!(i % 4)) {
                printf("Quadrado de %d = %.0f\n", i, (pow(i, 2)));
            }
        }
    }
    else {
        for (int i = b; i <= a; i++) {
            if (!(i % 4)) {
                printf("Quadrado de %d = %.0f\n", i, (pow(i, 2)));
            }
        }
    }
    
    return 0;
}