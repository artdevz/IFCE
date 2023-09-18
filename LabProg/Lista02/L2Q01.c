//L2-Q1:

#include <stdio.h>

int main() {
    char loop = '0';
    short int day;
    while (loop == '0') {
        printf("Digite um Número da Semana de 1 a 7 (Digite 0 para Encerrar.): ");
        scanf("%hd", &day);
        switch (day) {
            case 1:
                puts("Domingo!");
                break;
            case 2:
                puts("Segunda-Feira!");
                break;
            case 3:
                puts("Terça-Feira!");
                break;
            case 4:
                puts("Quarta-Feira!");
                break;
            case 5:
                puts("Quinta-Feira!");
                break;
            case 6:
                puts("Sexta-Feira!");
                break;
            case 7:
                puts("Sábado!");
                break;
            case 0:
                puts("Encerrando...");
                loop = '1';
                break;
            default:
                puts("Número da Semana Inválido.");
                break;
        }
    }

    return 0;
}