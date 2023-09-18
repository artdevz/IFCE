//L2-Q16:

#include <stdio.h>

int main() {
    short int multi3, multi5;
    for (int i = 0; i <= 200; i++) {
        if (!(i % 3) && i < 100) {
            multi3+= i;
        }
        if (!(i % 5) && i >= 100) {
            multi5+= i;
        }
    }
    printf("Somatório dos Múltiplos de Três: %hd\nSomatório dos Múltiplos de Cinco: %hd\n", multi3, multi5);

    return 0;
}