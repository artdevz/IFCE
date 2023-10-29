//L4-Q9:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANGE 60

// Prototype Functions:
void gerarVetor(int*, int);
void exibirVetor(int*, int, char);
void ordenarVetor(int*, int, char);

int main() {
    srand(time(NULL));
    
    int *x = NULL, tam;
    
    puts("Digite o Tamanho do Vetor: ");
    scanf("%d", &tam);
    x = malloc(sizeof(int) * tam);
    if (!x) exit(1); 

    gerarVetor(x, tam);

    free(x);
    return 0;
}

void gerarVetor(int* vetor, int tamanho) {
    puts("Vetor Gerado: ");
    for (int i = 0; i < tamanho; i++) {
        *(vetor+i) = 1 + rand() % MAX_RANGE;        
    }
    char ordem = '0';
    exibirVetor(vetor, tamanho, ordem);
}

void exibirVetor(int* vetor, int tamanho, char ordem) {
    for (int i = 0; i < tamanho; i++) {
        printf("-> %d\n", *(vetor+i));
    }
    if (ordem == '0') ordenarVetor(vetor, tamanho, ordem);
}

void ordenarVetor(int* vetor, int tamanho, char ordem) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho-1; j++) {
            if ( *(vetor+j) > *(vetor+(j+1)) ) {
                *(vetor+j) = *(vetor+j) ^ *(vetor+(j+1));
                *(vetor+(j+1)) = *(vetor+j) ^ *(vetor+(j+1));
                *(vetor+j) = *(vetor+j) ^ *(vetor+(j+1));
            }
        }
    }    
    puts("Vetor Ordenado: ");
    exibirVetor(vetor, tamanho, '1');
}
