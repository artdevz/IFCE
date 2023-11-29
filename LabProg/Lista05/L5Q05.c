//L5-Q5:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));

    if (argc != 2) {
        puts("ERRO! Número de Argumentos Inválido.");
        exit(1);
    }
    
    int tam = atoi(argv[1]);

    float *vetor = malloc(sizeof(float) * tam);
    if (!vetor) {
        puts("ERRO! Memória no Vetor não Alocada.");
        exit(2);
    }

    for (int i = 0; i < tam; i++) {
        *(vetor+i) = rand();
        printf("-> %f\n", *(vetor+i));
    }
    
    return 0;
}