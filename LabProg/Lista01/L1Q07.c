// L1-Q7:

#include <stdio.h>

int main() {
    int h, m, s;
    printf("Digite a Quantidade de Horas: ");
    scanf("%d", &h);
    printf("Digite a Quantidade de Minutos: ");
    scanf("%d", &m);
    printf("Digite a Quantidade de Segundos: ");
    scanf("%d", &s);
    
    printf("\nTotal: %d Segundos.\n", 3600*h + 60*m + s);    
    
    return 0;
}