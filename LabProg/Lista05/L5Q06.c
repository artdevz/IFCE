//L5-Q6:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 100

//PF:
void media(int*, int);
void mediana(int*, int);
void ordenar(int*, int);
void moda(int*, int);
void exibirVetor(int*, int);

int main() {
    srand(time(NULL));

    int tam;
    puts("Digite o Tamanho do Vetor: ");
    scanf("%d", &tam);
    int *vetor = malloc(sizeof(int) * tam);
    if (!vetor) {
        puts("ERRO! Memória do Vetor não Alocada.");
        exit(1);
    }   
    
    puts("============");
    for (int i = 0; i < tam; i++) {
        *(vetor+i) = rand() % MAXRANGE;
        exibirVetor(vetor, i+1);
        
        puts("============");
        media(vetor, i+1);
        mediana(vetor, i+1);
        moda(vetor, i+1);
        puts("============");
    } 

    return 0;
}

void media(int* vetor, int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += *(vetor+i);
    }
    printf("Média: %.2f\n", (float)soma/tam);
}

void mediana(int* vetor, int tam) {
    ordenar(vetor, tam);
    if (tam % 2) printf("Mediana: %d\n", *(vetor+(tam/2)));
    if (!(tam % 2)) printf("Mediana: %d e %d\n", *(vetor+(tam/2-1)), *(vetor+(tam/2)));
}

void ordenar(int* vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = i+1; j < tam; j++) {
            if (*(vetor+i) > *(vetor+j)) {
                
                *(vetor+i) = *(vetor+i) ^ *(vetor+j);
                *(vetor+j) = *(vetor+i) ^ *(vetor+j);
                *(vetor+i) = *(vetor+i) ^ *(vetor+j);
            }
        }
    }
}

void moda(int* vetor, int tam) {    
    int *totnumbers = calloc(MAXRANGE, sizeof(int));    
    
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < MAXRANGE; j++) {
            if (*(vetor+i) == j) totnumbers[j]++;
        }
    }

    int moda, quant;
    for (int i = 0; i < MAXRANGE; i++) {
        if (i == 0 || *(totnumbers+i) > quant) {
            quant = *(totnumbers+i);
            moda = i;
        }        
    }
    printf("Moda: %d\n", moda);
}

void exibirVetor(int* vetor, int tam) {
    ordenar(vetor, tam);    
    for (int i = 0; i < tam; i++) {        
        printf("-> %d ", *(vetor+i));        
    }
    puts("");
}