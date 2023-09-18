//L2-Q19:

#include <stdio.h>

int main() {
    int a, b, soma = 0;
    float med;
    
    puts("Digite o Início do Intervalo: ");
    scanf("%d", &a);
    puts("Digite o FInal do Intervalo: ");
    scanf("%d", &b);

    if (a == b) {
        med = a;
    } else if (a < b) {
        for (int i = a; i <= b; i++) {
            soma+=i;
        }
        med = soma / (b-a);
    } else {
        for (int i = a; i > b; i--) {
            soma+=i;
        }
        med = soma / (a-b);
    }

    printf("Média Aritmética: %.2f", med);

    return 0;
}