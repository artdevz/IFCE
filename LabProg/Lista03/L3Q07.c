//L3-Q7:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX_VETOR 3
#define RANGE 20 // [0, 19]

int main() {
    srand(time(NULL));
    int numbers[MAX_VETOR];
    float ari = 0, geo = 1;
    for (int i = 0; i < MAX_VETOR; i++) {
        numbers[i] = rand() % RANGE;
        printf("-> %d\n", numbers[i]);
        ari += (float)numbers[i]/MAX_VETOR;
        geo *= pow( (float)numbers[i], (1.0/MAX_VETOR) );        
    }
    printf("\nMédia Aritmética: %.2f\nMédia Geométrica: %.2f\n", ari, geo);    

    return 0;
}