//L3-Q10:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main() {
    srand(time(NULL));
    int matriz[TAM][TAM];

    // Gerar e Exibir Matriz:    
    for (int i = 0; i < TAM; i++) {
        printf("\n-> ");
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 10;
            printf("%d  ", matriz[i][j]);
        }
        puts("");
    }

    int x;
    puts("\nDigite um Número para Pesquisar na Matriz: ");
    scanf("%d", &x);

    int count = 0;
    for (int i = 0; i < TAM; i++) {        
        for (int j = 0; j < TAM; j++) {
            if (x == matriz[i][j]) count++;
        }
    }
    printf("\nQuantidade de Números %d na Matriz -> %d\n", x, count);

    return 0;
}
