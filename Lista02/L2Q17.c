//L2-Q17:

#include <stdio.h>

int main() {
    for (float c = 10; c <= 100; c+=10) {
        printf("%.1f°C = %.1f°F\n", c, c*1.8+32);
    }

    return 0;
}