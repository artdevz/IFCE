//L2-Q27:

#include <stdio.h>

int main() {
    short int maior, menor, num, count = 0;
    while (1) {
        printf("Digite um Valor (Negativo e Par para Encerrar): ");
        scanf("%hd", &num);

        if (num < 0 && num % 2 == 0) {
            break;
        }

        if (count == 0 || num > maior) {
            maior = num;
        }
        if (count == 0 || num < menor) {
            menor = num;
        }
        count++;
    }
    printf("Produtório de %hd x %hd = %hd", maior, menor, maior*menor);

    return 0;
}