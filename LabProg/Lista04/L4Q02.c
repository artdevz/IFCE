//L4-Q2:

#include <stdio.h>

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    puts("Digite o Primeiro Número: ");
    scanf("%d", &a);    
    puts("Digite o Segundo Número: ");
    scanf("%d", &b);   
    printf("Valores Antes da Troca: A: %d B: %d\n", *pa, *pb);
    
    //Troca de Valores:
    *pa = *pa ^ *pb;
    *pb = *pa ^ *pb;
    *pa = *pa ^ *pb;

    printf("Valores Depois da Troca: A: %d B: %d\n", *pa, *pb);
        
    return 0;
}