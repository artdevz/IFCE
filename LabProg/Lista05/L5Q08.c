//L5-Q8:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 10

int main() {
    srand(time(NULL));

    int lin, col, t;
    puts("Digite a Quantidade de Linhas: ");
    scanf("%d", &lin);
    puts("Digite a Quantidade de Colunas: ");
    scanf("%d", &col);
    puts("Digite o Valor de T: ");
    scanf("%d", &t);
    
    int matriz[lin][col], binmatriz[lin][col];
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {

            matriz[i][j] = rand() % MAXRANGE;
            printf("[%d]  ", matriz[i][j]);
        }
        printf("-> ");
        for (int j = 0; j < col; j++) {
            
            binmatriz[i][j] = (matriz[i][j] > t)? 1:0;
            printf(" [%d] ", binmatriz[i][j]);
        }
        puts("\n");
    }

    return 0;
}