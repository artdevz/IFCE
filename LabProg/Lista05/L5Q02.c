//L5-Q2:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 100

int main(int argc, char *argv[]) {
    srand(time(NULL));

    if (argc != 2) {
        puts("\nERRO! Número de Argumentos Inválido.\n");
        exit(1);
    }

    int tam = atoi(argv[1]);
    
    int *vetor = NULL;
    vetor = malloc(sizeof(int) * tam);
    if ( !vetor ) {
        puts("ERRO! Memória no Vetor não alocada.");
        exit(2);
    }

    int menor, *min;
    for (int i = 0; i < tam; i++) {
        *(vetor+i) = rand() % MAXRANGE;
        printf("[%p] -> %d\n", vetor+i, *(vetor+i));
        
        if (i == 0 || menor > *(vetor+i)) {
            menor = *(vetor+i);
            min = vetor+i;
        }
    }

    printf("Endereço do Menor Valor: %p", min);

    return 0;
}