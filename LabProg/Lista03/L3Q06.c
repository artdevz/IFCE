//L3-Q6:

#include <stdio.h>
#include <string.h>
#define MAX_STR 50

int main() {
    char string[MAX_STR];
    puts("Digite uma Frase: ");
    fgets(string, MAX_STR, stdin);

    puts("Inverso:");
    for (int i = strlen(string)-1; i >= 0; i--) printf("%c", string[i]);    

    return 0;
}