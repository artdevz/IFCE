// L1-Q6:

#include <stdio.h>

int main() {
    float altura;
    char sexo;
    
    printf("Digite a Altura em METROS: ");
    scanf("%f", &altura);
    printf("Digite o Sexo (M/F): ");
    scanf("%s", &sexo);

    if (sexo == 'M') {
        printf("\nSeu Peso Ideal é: %.1fkg\n", 72.7 * altura - 58);
    }
    if (sexo == 'F') {
        printf("\nSeu Peso Ideal é: %.1fkg\n", 62.1 * altura - 44.7);
    }
    
    return 0;
}