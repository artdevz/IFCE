// L1-Q10:

#include <stdio.h>

int main() {
    int c, l, a;
    
    printf("Digite o Comprimento: ");
    scanf("%d", &c);
    printf("Digite a Largura: ");
    scanf("%d", &l);
    printf("Digite a Altura: ");
    scanf("%d", &a);

    printf("Volume: %d\n", c*l*a);
    
    return 0;
}