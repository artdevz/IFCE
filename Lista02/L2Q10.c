//L2-Q10:

#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 15; i <= 90; i++) {
        if (!(i % 4)) {
            printf("Quadrado de %d = %.0f\n", i, (pow(i, 2)));
        }
    }
    return 0;
}