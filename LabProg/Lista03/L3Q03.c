//L3-Q3:

#include <stdio.h>
#define MAX_STR 50

int main() {
    char string[MAX_STR];
    puts("Digite uma Frase: ");
    fgets(string, MAX_STR, stdin);

    int count = 0;
    while (string[count] != '\0') count++;
    printf("Quantidade de Caracteres: %d", count-1); // Removendo o '\0' da Contagem.

    return 0;
}