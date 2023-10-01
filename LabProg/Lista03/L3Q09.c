//L3-Q9:

#include <stdio.h>
#define TAM 3

int main() {
    int matriz[TAM][TAM];
    
    // Criar Matriz:
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            int num;
            printf("Digite o Valor da Linha x Coluna -> %d x %d: ", i+1, j+1);
            scanf("%d", &num);
            matriz[i][j] = num;
        }    
    }

    // Exibir Matriz:
    puts("");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d  ", matriz[i][j]);
        }
        puts("\n");
    }

    // Exibir Diagonal Principal:
    printf("Diagonal Principal -> ");
    for (int i = 0; i < TAM; i++) {
        int j = i;
        printf(" %d ", matriz[i][j]);
    }

    return 0;
}
