//L2-Q12:

#include <stdio.h>

int main() {
    short int num;
    printf("Digite um Número: ");
    scanf("%hd", &num);
    puts("Tabuada:");
    for (int i = 1; i <= 10; i++) {
        printf("%hd x %d = %hd\n", num, i, num*i);
    }

    return 0;
}