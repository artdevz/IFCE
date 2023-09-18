//L2-Q23:

#include <stdio.h>

int main() {
    int num = 10;
    printf("Número Inicial: %d\n", num);
    
    printf("\nPré-Incrementação: %d\n", ++num);
    printf("Número Final: %d\n", num);
    num--;
    printf("\nPós-Incrementação: %d\n", num++);
    printf("Número Final: %d\n", num);

    return 0;
}