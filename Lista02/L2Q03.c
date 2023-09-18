//L2-Q3:

#include <stdio.h>

int main() {
    int fat;
    short int num, count = 1;

    printf("Digite um Número: ");
    scanf("%hd", &num);
    fat = num;

    while (count < num) {
        fat*=count;
        count++;
    }
    printf("Fatorial de %hd: %d", num, fat);

    return 0;
}