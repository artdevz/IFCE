//L7-Q1:

#include <stdio.h>
#include <stdlib.h>

#define MAXCHAR 30

int main() {

    char nome[MAXCHAR];
    puts("Digite seu Primeiro Nome:");
    fgets(nome, MAXCHAR, stdin);

    int age;
    puts("Digite sua Idade:");
    scanf("%d", &age);

    FILE *fp;
    //char arq = "arquivo.csv";
    fp = fopen("arq.csv", "w");
    
    if (!fp) {
        puts("[ERRO] Não foi possível Abrir o Arquivo.");
        exit(1);
    }

    fprintf(fp, "%s, %d", nome, age);

    fclose(fp);

    return 0;

}
