//L3-Q5:

#include <stdio.h>
#include <string.h>
#define MAX_STR 50
#define MAX_DOUBLE_STR 100

int main() {
    char str1[MAX_STR];
    char str2[MAX_STR];
    char str3[MAX_DOUBLE_STR];

    puts("Digite a Primeira Frase: ");
    fgets(str1, MAX_STR, stdin);
    puts("Digite a Segunda Frase: ");
    fgets(str2, MAX_STR, stdin);

    // COM strcat():    
    printf("\n-> Strings Concatenadas COM Strcat: %s\n", strcat(str1, str2));

    // SEM strcat();
    int count = 0;
    
    while (str1[count] != '\0') {
        str3[count] = str1[count];
        count++;
    }
    while (str2[count] != '\0') {
        str3[count] = str1[count];
        count++;
    }
    printf("-> Strings Concatenadas SEM Strcat: %s\n", str3);

    return 0;
}
