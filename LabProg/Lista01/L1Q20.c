// L1-Q20:

#include <stdio.h>

int main() {
    short int num;
    printf("Digite um Número: ");
    scanf("%hd", &num);

    (num%2)? puts("Ímpar!"): puts("Par!");

    return 0;
}