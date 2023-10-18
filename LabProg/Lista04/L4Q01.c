//L4-Q1:

#include <stdio.h>

int main() {
    int a, b, res;
    int *pa = &a, *pb = &b, *pres = &res;
    
    puts("Digite o Primeiro Número: ");
    scanf("%d", &a);    
    puts("Digite o Segundo Número: ");
    scanf("%d", &b);    
    res = *pa + *pb;
    *pres = res;

    printf("Resultado: [%p] -> %d\n", &pres, *pres);
    
    return 0;
}