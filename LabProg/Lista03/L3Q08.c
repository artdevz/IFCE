//L3-Q8:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main() {
    srand(time(NULL));
    int numbers[TAM];
    int range;
    puts("Digite o Intervalo Máximo: ");
    scanf("%d", &range);

    // SELEÇÃO:

    // Gerar e Exibir o Vetor:
    puts("\nVetor Aleatório:");
    for (int i = 0; i < TAM; i++) {
        if ( !(i%10) ) printf("\n\n-> ");
        numbers[i] = rand() % range; printf("%d  ", numbers[i]);        
    }

    // Processamento: 
    for (int i = 0; i < TAM-1; i++) {
        for (int j = i+1; j < TAM; j++) {
            if (numbers[i] > numbers[j]) {
                // Troca de Valores:
                numbers[i] = numbers[i] ^ numbers[j];
                numbers[j] = numbers[i] ^ numbers[j];
                numbers[i] = numbers[i] ^ numbers[j];
            }
        }
    }

    // Vetor Final:
    puts("\n\nVetor Organizado por Método de Seleção:");
    for (int i = 0; i < TAM; i++) {
        if ( !(i%10) ) printf("\n\n-> ");
        printf("%d  ", numbers[i]);        
    }

    // BOLHA:
    
    // Gerar e Exibir o Vetor:
    puts("\n\nVetor Aleatório:");
    for (int i = 0; i < TAM; i++) {
        if ( !(i%10) ) printf("\n\n-> ");
        numbers[i] = rand() % range; printf("%d  ", numbers[i]);        
    }
    
    // Processamento:
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM-1; j++) {
            if (numbers[j] > numbers[j+1]) {
                // Troca de Valores:
                numbers[j] = numbers[j] ^ numbers[j+1];
                numbers[j+1] = numbers[j] ^ numbers[j+1];
                numbers[j] = numbers[j] ^ numbers[j+1];
            }
        }
    }

    // Vetor Final:
    puts("\n\nVetor Organizado por Método Bolha:");
    for (int i = 0; i < TAM; i++) {
        if ( !(i%10) ) printf("\n\n-> ");
        printf("%d  ", numbers[i]);        
    }
    puts("");

    return 0;
}
