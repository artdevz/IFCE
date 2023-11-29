//L5-Q9:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 100

int main() {
    srand(time(NULL));

    int dim;
    puts("Digite a Quantidade de Linhas e Colunas: ");
    scanf("%d", &dim);
    int matriz[dim][dim];

    int soma = 0;
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            matriz[i][j] = rand() % MAXRANGE;
            printf("[%.2d] ", matriz[i][j]);
        }
        puts("");
        soma += matriz[i][i];
    }

    (soma%2)? puts("Diagonal é Ímpar!") : puts("Diagonal é Par!");

    return 0;
}