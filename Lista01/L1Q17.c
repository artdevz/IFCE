// L1-Q17:

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Digite um Número Inteiro: ");
    scanf("%d", &num);
    num = sqrt(pow(num, 2));
    printf("Módulo do Número Digitado: %d\n", num);
    
    return 0;
}