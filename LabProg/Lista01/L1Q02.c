// L1-Q2:

#include <stdio.h>

int main() {
    short int num;
    printf("Digite um Número Inteiro: ");
    scanf("%hd", &num);
    printf("Hexadecimal: %X\nOctal: %o\n", num, num);
    return 0;
}