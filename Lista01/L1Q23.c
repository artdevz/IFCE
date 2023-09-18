// L1-Q23:

#include <stdio.h>

int main() {
    char num[3];
    
    printf("Digite um Número de 3 Dígitos: ");
    fgets(num, 4, stdin);
    fflush(stdin);
    
    for (int i = 2; i >= 0; i--) {
        printf("%c", num[i]);
    }

    return 0;
}