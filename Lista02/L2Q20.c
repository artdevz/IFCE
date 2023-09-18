//L2-Q20:

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2) {
            int fat = 1, num = i;
            for (num; num > 0; num--) {
                fat *= num;
            }
            printf("Fatorial de %d = %d\n", i, fat); 
        }
    }

    return 0;
}