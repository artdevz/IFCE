//L6-Q3:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 100

struct Info {
    int* pontArray;
    int quant;
    float media;
};

int main() {
    
    srand(time(NULL));

    int elementos;
    puts("Digite Quantos Elementos Deseja: ");
    scanf("%d", &elementos);

    int* vetor = malloc(sizeof(int) * elementos);

    int media = 0;
    for (int i = 0; i < elementos; i++) {

        *(vetor+i) = rand() % MAXRANGE; 
        printf("%d\n", *(vetor+i)); 
        media += *(vetor+i);
    
    }
    
    struct Info array;
    array.pontArray = vetor;
    array.quant = elementos;
    array.media = ( (float)media / elementos);

    printf("-> [%p] \nQuantidade de Elementos: %d\nMédia: %.1f", array.pontArray, array.quant, array.media);
    
    return 0;
}
