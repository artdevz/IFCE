//L6-Q1:

#include <stdio.h>

#define QNT_NOTAS 2

struct Aluno {
    float notas[QNT_NOTAS];    
    float media;
};

int main() {
    
    struct Aluno aluno;
    float soma = 0;
    for (int i = 0; i < QNT_NOTAS; i++) {

        float nota;
        printf("Digite a %dª Nota: ", i+1);
        scanf("%f", &nota);
        
        aluno.notas[i] = nota;
        soma += nota;
    }
    aluno.media = soma/QNT_NOTAS;
    
    printf("%.2f , %.2f -> %.2f\n", aluno.notas[0], aluno.notas[1], aluno.media);

    return 0;
}