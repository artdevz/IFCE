// L1-Q9:

#include <stdio.h>

int main() {
    short int num;
    printf("Digite um Número: ");
    scanf("%hd", &num);
    printf("Seu Antecessor: %hd\nSeu Sucessor: %hd\n", num-1, num+1);
    
    return 0;
}