#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Variáveis Globais:
unsigned char option, armario = 0, mask = 1;

int status() {
    unsigned char t;
    mask = 1;
    puts("\n==Armários Ocupados==");
    for (int i = 0; i < 8; i++) {
        t = (armario>>i) & mask;
        if (t) printf("-> Armário [%d]\n", i);
    }
}

int menu() { 
    puts("\nDigite uma Opção:\n\n[1] - Ocupar Armário.\n[2] - Liberar Armário.\n[3] - Sair.\n");
    scanf("%s", &option);
    puts("\n-----------------------------------------------------");    
}

int main() {
    srand(time(NULL));    
    while (option != '3') {
        status();
        menu();
        unsigned char choice;
        switch (option) {

            case '1':
                if (armario == 255) {puts("\n\nERRO!! Todos os Armários estão Ocupados."); break;}
                short int bit = rand() % 8;
                mask = 1;
                printf("\n-> Bit Randomicamente Escolhido: %hd\n", bit);
                mask = (mask<<bit);
                if ( (armario | mask) == armario) puts("ERRO! Armário já Ocupado.");
                else armario = armario ^ mask;                               
                break;
            
            case '2':
                mask = 1;
                status();
                puts("\nDigite qual Armário Liberar [0-7]:");
                scanf("%d", &choice);
                mask = (mask<<choice);
                if ( (armario ^ mask) > armario) {
                    printf("\n-> Armário %d já está Vazio.\n", choice);
                    break;
                } else {
                    armario = armario ^ mask; 
                    printf("\n-> Armário %d foi Liberado.\n", choice);
                }              
                break;        
            
            case '3':
                break;

            default:
                puts("ERRO! Opção Inválida.");
                break;
        }
    }
    puts("Saindo..");

    return 0;
}
