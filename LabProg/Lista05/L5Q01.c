//L5-Q1:

#include <stdio.h>
#include <stdlib.h>

#define MODES 2

//PF:
void somar(int, int, int*);
void multiplicar(int, int, int*);

int main(int argc, char *argv[]) {
    void ( *pFunc[] )(int, int, int*) = {somar, multiplicar};
    

    if (argc != 4) {
        puts("\nERRO! Número de Argumentos Inválidos.\n\nDigite [Modo] - [N1] - [N2]\n");        
        exit(1);
    }

    int mode = atoi(argv[1]);
    if ( (mode < 0) || (mode > 1)) {
        puts("\nERRO! Operação Inválida.\n\nDigite 0 ou 1.\n");
        exit(2);
    }

    int n1, n2, res;
    n1 = atoi(argv[2]);
    n2 = atoi(argv[3]);
    (*pFunc[mode])(n1, n2, &res);
    printf("Resultado: %d\n", res);

    return 0;
}

void somar(int n1, int n2, int *result) {
    *result = n1 + n2;
}

void multiplicar(int n1, int n2, int *result) {
    *result = n1 * n2;
}