//L5-Q3:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 100
#define NUMVALORES 2

//PF:
void addressMaxMin(int*, int, int**);

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

    for (int i = 0; i < tam; i++) {
        *(vetor+i) = rand() % MAXRANGE;
        printf("[%p] -> %d\n", vetor+i, *(vetor+i));   
    }

    int** valores[NUMVALORES];
    addressMaxMin(vetor, tam, valores[NUMVALORES]);
    printf("\n[%p] -> Endereço do Menor Valor.\n[%p] ->  Endereço do Maior Valor.\n", valores[0], valores[1]);
    // BUG: Endereço Não Linkado.

    return 0;
}

void addressMaxMin(int* vetor, int tam, int** enderecos) {
    int menor, *min, maior, *max;
    for (int i = 0; i < tam; i++) {
                
        if (i == 0 || menor > *(vetor+i)) {
            menor = *(vetor+i);
            min = vetor+i;
        }

        if (i == 0 || maior < *(vetor+i)) {
            maior = *(vetor+i);
            max = vetor+i;
        }
    }
    enderecos[0] = min;
    enderecos[1] = max;    
} 