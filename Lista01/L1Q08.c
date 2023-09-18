// L1-Q8:

#include <stdio.h>
#include <math.h>

int main() {
    short int num;
    printf("Digite um Número: ");
    scanf("%hd", &num);
    printf("Este Número ao Quadrado: %.0f\n", pow(num, 2));
    
    return 0;
}
