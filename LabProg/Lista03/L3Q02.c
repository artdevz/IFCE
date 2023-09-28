//L3-Q2:

#include <stdio.h>
#define MAX_STR 50

int main() {
    char string[MAX_STR];
    char caractere;

    puts("Digite uma Frase: ");
    fgets(string, MAX_STR, stdin);
    puts("Digite um Caractere: ");
    scanf("%c", &caractere);

    int count = 0;
    while (string[count] != '\0') {
        if (string[count] == caractere) {
            printf("A Frase possui o Caractere %c!\n", caractere);
            break;
        } 
        count++;
        if (string[count] == '\0') printf("A Frase não possui o Caractere %c.\n", caractere);
    }

    return 0;
}