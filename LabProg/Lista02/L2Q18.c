//L2-Q18:

#include <stdio.h>
#include <math.h>

int main() {
    double soma = 0;
    for (int i = 0; i <= 63; i++) {
        soma += (pow(2, i));
    }
    printf("%.0f Grãos", soma);

    return 0;
}