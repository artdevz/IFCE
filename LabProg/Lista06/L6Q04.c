//L6-Q4:

#include <stdio.h>

#define QNT_NOTAS 2
#define QNT_ALUNOS 3

struct Aluno {
    float notas[QNT_NOTAS];    
    float media;
};

float calcularMedia(float, float, int);

int main() {
    
    struct Aluno alunos[QNT_ALUNOS];
    
    for (int i = 0; i < QNT_ALUNOS; i++) {

        printf("Aluno 0%d:\n", i+1);
        float notas[QNT_NOTAS];

        for (int j = 0; j < QNT_NOTAS; j++) {

            float nota;
            printf("Digite a %dª Nota: \n", j+1);
            scanf("%f", &nota);
            alunos[i].notas[j] = nota;

        }
        alunos[i].media = calcularMedia(notas[0], notas[1], QNT_NOTAS);
    }

    return 0;
}

float calcularMedia(float n1, float n2, int totnotas) {

    return (n1 + n2) / totnotas;

}
