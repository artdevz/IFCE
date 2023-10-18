//L4-Q4:

#include <stdio.h>

#define TAM 5

int main() {
    int inteiros[TAM];
    float floats[TAM];
    char caracteres[TAM];

    for (int i = 0; i < TAM; i++) {
        int input;
        puts("Digite um Número Inteiro: ");
        scanf("%d", &input);
        *(inteiros+i) = input;
    }

    for (int i = 0; i < TAM; i++) {
        float input;
        puts("Digite um Número Flutuante: ");
        scanf("%f", &input);
        *(floats+i) = input;
    }

    for (int i = 0; i < TAM; i++) {
        char inputchar;
        puts("Digite um Caractere: ");
        scanf(" %c ", &inputchar);       
        *(caracteres+i) = inputchar;
    }

    puts("\nVetor de Inteiros: \n");
    for (int i = 0; i < TAM; i++) printf("[%p] -> %d\n", (inteiros+i), *(inteiros+i));    

    puts("\nVetor de Floats: \n");
    for (int i = 0; i < TAM; i++) printf("[%p] -> %.2f\n", (floats+i), *(floats+i));

    puts("\nVetor de Caracteres: \n");
    for (int i = 0; i < TAM; i++) printf("[%p] -> %c\n", (caracteres+i), *(caracteres+i));

    return 0;
}

/*  
    Observo que os Endereços do Vetor de Inteiros e do Vetor de Float são sequenciais
    e espaçados entre 4 e 4 bytes em Hexadecimal.
    Enquanto o Vetor de Caracteres é espaçado de 1 e 1 byte.
*/