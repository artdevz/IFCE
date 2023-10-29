//L4-Q10:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int *x = NULL, *f = NULL, tam, n;
    
    puts("Digite o Tamanho do Vetor: ");
    scanf("%d", &tam);
    x = malloc(sizeof(int) * tam);
    if (!x) exit(1);

    puts("Digite o Intervalo dos Números do Vetor: ");
    scanf("%d", &n);
    f = malloc(sizeof(int) * n);
    if (!n) exit(1);

    for (int i = 0; i < tam; i++) {
        int num = rand() % n;
        *(x+i) = num;
        printf("-> %d\n", *(x+i));
        (*(f+num))++;            
    }

    for (int i = 0; i < n; i++) printf("\n%d -> [%d]", i, *(f+i));

    free(x);
    free(f);
    return 0;
}
