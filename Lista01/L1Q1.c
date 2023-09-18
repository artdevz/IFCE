// L1-Q1:

#include <stdio.h>

int main() {
    short int x1 = 7 + 3*6/2-1;
    puts("x1 = 7 + 3*6/2-1\nPrimeiro a Multplicação/Divisão, depois Soma/Subtração.\n");
    short int x2 = 2%2 + 2*2-2/2;
    puts("x2 = 2%%2 + 2*2-2/2\nPrimeiro a Multiplicação/Divisão, depois Mod, depois Soma/Subtração.\n");
    short int x3 = (3*9*(3 + (9*3/ (3))));
    puts("x3 = (3*9*(3 + (9*3/ (3))))\nPrimeiro as Operações entre  os Parênteses Interiores, sendo Multiplicação/Divisão antes da Soma/Subtração.\n");
    printf("x1 = %hd\nx2 = %hd\nx3 = %hd\n", x1, x2, x3);

    return 0;
}