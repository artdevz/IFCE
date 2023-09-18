//L2-Q6:

#include <stdio.h>

int main() {
    short int voto, c1 = 0, c2 = 0, branco = 0, null = 0;
    while(1) {
        puts("\nPaulo -  [5]\nRenata - [7]\nBranco - [0]\n\nEncerrar - [Número Negativo]");
        printf("Digite seu Voto: ");
        scanf("%hd", &voto);

        if (voto < 0) {
                puts("Encerrando...\n");
                break;
        }
        
        switch (voto) {
            case 5:
                puts("Voto Efetuado ao Candidato Paulo.");
                c1++;
                break;
            case 7:
                puts("Voto Efetuado à Candidata Renata.");
                c2++;
                break;
            case 0:
                puts("Voto Branco Efetuado.");
                branco++;
                break;
            default:
                puts("Voto Nulo Efetuado.");
                null++;
                break;
        }
    }

    printf("Tabela Geral da Eleição:\n\nPaulo:   %hd Voto(s).\nRenata:  %hd Voto(s).\nBrancos: %hd Voto(s).\nNulos:   %hd Voto(s).\n", c1, c2, branco, null);
    printf("\nPorcentagem de Votos Válidos:\nPaulo:   %.1f%%\nRenata:  %.1f%%\n", (c1*1.0)/(c1+c2)*100, (c2*1.0)/(c1+c2)*100);
    printf("\nPorcentagem do Total de Votos:\nPaulo:   %.1f%%\nRenata:  %.1f%%\nBrancos: %.1f%%\nNulos:   %.1f%%\n", (c1*1.0)/(c1+c2+branco+null)*100, (c2*1.0)/(c1+c2+branco+null)*100, (branco*1.0)/(c1+c2+branco+null)*100, (null*1.0)/(c1+c2+branco+null)*100);
    puts("\nResultado Final da Eleição: ");

    if (c1 > c2) {
        printf("O Candidato Paulo foi Eleito com %hd Votos!\n", c1);
    }
    if (c1 < c2) {
        printf("A Candidata Renata foi Eleita com %hd Votos!\n", c2);
    }
    if (c1 == c2) {
        puts("Houve um Empate na Eleição.");
    }

    return 0;
}