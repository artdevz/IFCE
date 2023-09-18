// L1-Q4:

#include <stdio.h>
#include <math.h>

int main() {
    short int num;
    printf("Digite um Número: ");
    scanf("%hd", &num);
    printf("Triplo do Número: %hd\nQuadrado do Número: %.0f\nMetade do Número: %.1f\n", num*3, pow(num, 2), num/2.0);
    
    return 0;
}
