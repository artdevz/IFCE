// L1-Q25:

#include <stdio.h>

int main() {
    int seg;
    printf("Digite um Tempo em Segundos: ");
    scanf("%d", &seg);
    printf("\nPossuindo %d Hora(s).\nPossuindo %d Minuto(s).\nPossuindo %d Segundo(s).\n", seg / 3600, seg / 60, seg);
    printf("\nSendo %dh:%dm:%ds.\n", seg / 3600, (seg / 60) % 60, seg % 60);

    return 0;
}