//L7-Q2:

// AINDA VOU TERMINAR...

#include <stdio.h>
#include <stdlib.h>

#define TAMREGISTER 100
#define MAXCHAR 30

int main() {

    FILE *fp;
    fp = fopen("hardware.dat", "w");

    if (!fp) {
        puts("[ERRO] Não foi possível Abrir o Arquivo.");
        exit(1);
    }

    for (int i = 0; i < TAMREGISTER; i++) {

        fprintf(fp, "#%d -> Vazio\n", i+1);

    }

    fclose(fp);

    return 0;
}
