//L2-Q9:

#include <stdio.h>
#define TERMOS 20

int main() {
    int num1 = 0, num2 = 1, num3;
    printf("%d\n%d\n", num1, num2);
    for (int i = 0; i < TERMOS-2; i++) {
        printf("%d\n", num1+num2);
        
        num3 = num1+num2;
        num1 = num2;
        num2 = num3;
    }

    return 0;
}