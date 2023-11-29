//L5-Q4:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 100

int main() {
    // x' = x-min(x) / max(x) - min(x)
    srand(time(NULL));

    int *vetor, tam;
    puts("Digite o Tamanho do Vetor: ");
    scanf("%d", &tam);

    vetor = malloc(sizeof(int) * tam);
    if (!vetor) {
        puts("ERRO! Memória do Vetor não foi Alocada.");
        exit(1);
    }

    int max, min;
    for (int i = 0; i < tam; i++) {
        *(vetor+i) = rand() % MAXRANGE;
        printf("-> %d\n", *(vetor+i));
        if (i == 0 || *(vetor+i) > max) max = *(vetor+i);
        if (i == 0 || *(vetor+i) < min) min = *(vetor+i);
    }
    printf("\n\nValor Máximo: %d\nValor Mínimo: %d\n", max, min);
    float xlinha = (float)(tam - min) / (max - min);
    printf("X' = %.3f", xlinha);

    return 0;
}