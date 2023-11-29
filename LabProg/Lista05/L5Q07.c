//L5-Q7:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAXRANGE 100

void exibirVetor(float*, int, char);
float calcularMedia(float*, int);
float calcularErroAbsoluto(float*, int, float);
float calcularErroQuadratico(float);

int main() {
    srand(time(NULL));
    
    int tam;
    puts("Digite o Tamanho dos Vetores:");
    scanf("%d", &tam);
    float *vetorA = malloc(sizeof(float) * tam);
    float *vetorB = malloc(sizeof(float) * tam);
    
    if ((!vetorA) || (!vetorB)) {
        
        puts("ERRO! Memória do Vetor não Alocada.");
        exit(1);
    }

    for (int i = 0; i < tam; i++) {
        
        *(vetorA + i) = rand() % MAXRANGE;
        *(vetorB + i) = rand() % MAXRANGE;
    }

    exibirVetor(vetorA, tam, 'A');
    float mediaA = calcularMedia(vetorA, tam);
    float diffA = calcularErroAbsoluto(vetorA, tam, mediaA);    
    
    puts("\n===================================================================================================\n");
    
    exibirVetor(vetorB, tam, 'B');       
    float mediaB = calcularMedia(vetorB, tam);    
    float diffB = calcularErroAbsoluto(vetorB, tam, mediaB);

    puts("\n===================================================================================================\n");
    printf("-> Erro Quadrático Médio de A: %.2f\n", diffA);
    printf("-> Erro Quadrático Médio de B: %.2f\n", diffB);

    if ( diffA > diffB ) {
        puts("\nO Erro Quadrático Médio do Vetor A é maior que o do Vetor B.\n");
    } else {
        puts("\nO Erro Quadrático Médio do Vetor B é maior que o do Vetor A.\n");
    }

    return 0;
}

void exibirVetor(float* vetor, int len, char array) {
    
    printf("\nVetor %c:\n", array);
    for (int i = 0; i < len; i++) {
        *(vetor + i) = rand() % MAXRANGE;        
        printf("-> %.0f\n", *(vetor + i));
    }
}

float calcularMedia(float* vetor, int len) {
    
    float soma = 0;
    for (int i = 0; i < len; i++) {
        soma += *(vetor + i);
    }

    printf("Média: %.2f\n", soma/len);
    
    return (soma/len);
}

float calcularErroAbsoluto(float* vetor, int len, float media) {
    
    float *error = malloc(sizeof(float) * len);    
    for (int i = 0; i < len; i++) *(error+i) = fabs( (*(vetor+i)) - media );
    
    puts("\nErro Absoluto:");
    for (int i = 0; i < len; i++) {
        printf("-> %.2f\n", *(error+i) );
    }

    puts("\nErro Quadrático:");
    float somatorio = 0;
    for (int i = 0; i < len; i++) somatorio += calcularErroQuadratico(*(error+i));
    
    return somatorio;
}

float calcularErroQuadratico(float errorAbs) {   
    
    printf("-> %.2f\n", pow(errorAbs, 2) );
    
    return (pow(errorAbs, 2));    
}