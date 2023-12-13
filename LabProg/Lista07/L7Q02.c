//L7-Q2:

#include <stdio.h>
#include <stdlib.h>

#define TAMREGISTER 100
#define TAM 3

int main() {

    FILE *fp;
    char num[TAM];

    fp = fopen(hardware.txt, "w");
    if (fp == NULL) {
        puts("ERRO! Arquivo não pode ser Aberto.");
        exit(1);
    }

    for (int i = 0; i < TAMREGISTER; i++) {
        
        fwrite(&i, sizeof(int), 1, fp);

        /*int num = i;
        putw(num, fp);
        putc("\n", fp);*/

    }

    fclose(fp);

    return 0;
}