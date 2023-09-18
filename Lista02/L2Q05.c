//L2-Q5:

#include <stdio.h>

int main() {
    short int num, maior, menor, count = 1;
    while(1) {
        printf("Digite um Número (0 para Encerrar): ");
        scanf("%hd", &num);
        
        if (num == 0) {
            puts("Encerrando...");
            break;
        }
        if (count == 1 || num > maior) {
            maior = num;
        }
        if (count == 1 || num < menor) {
            menor = num;
        }
        count++;        
    }
    printf("Maior Número: %hd\nMenor Número: %hd\n", maior, menor);

    return 0;
}