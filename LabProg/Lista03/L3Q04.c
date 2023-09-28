//L3-Q4:

#include <stdio.h>
#include <string.h>
#define MAX_STR 50

int main() {
    char str1[MAX_STR];
    char str2[MAX_STR];

    puts("Digite a Primeira Frase: ");
    fgets(str1, MAX_STR, stdin);
    puts("Digite a Segunda Frase: ");
    fgets(str2, MAX_STR, stdin);

    // COM strcmp():
    strcmp(str1, str2)? puts("\nDiferentes!") : puts("\nIguais!");

    // SEM strcmp():
    int equals = 0, count = 0;
    while (str1[count] != '\0') {
        if (str1[count] == str2[count]) equals++;
        count++;
    }
    count != equals? puts("\nDiferentes!") : puts("\nIguais!");

    return 0;
}