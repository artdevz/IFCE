// L1-Q24:

#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    printf("Digite um Valor x: ");
    scanf("%d", &x);
    printf("Digite um Valor n: ");
    scanf("%d", &n);

    x = (x<<1);
    x = pow(x, n);
    printf("Valor de x: %d\n", x);
    
    return 0;
}