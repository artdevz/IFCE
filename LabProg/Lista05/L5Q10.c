//L5-Q10:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n, t;
    puts("Digite o Intervalo da Matriz M: ");
    scanf("%d", &n);
    puts("Digite o Tamanho dos Vetores: ");
    scanf("%d", &t);    
    int *x = malloc(sizeof(int) * t);
    int *y = malloc(sizeof(int) * t);
    if ((!x) && (!y)) {
        puts("ERRO! Memória do Vetor não Alocada.");
        exit(1);
    }

    int *m[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = 0;
        }
    }

    for (int i = 0; i < t; i++) {
        
        *(x+i) = rand() % (n-1);
        *(y+i) = rand() % (n-1);
        printf("X -> %d  ", *(x+i));
        printf("Y -> %d\n", *(y+i));

        if ( x[i] == y[i] ) {
            m[ x[i] ][ y[i] ]++;                    
        }
    }       
    
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("[%d] ", m[i][j]);
            }
            puts("\n");
        }   

    return 0;
}