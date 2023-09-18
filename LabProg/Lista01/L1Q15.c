// L1-Q15:

#include <stdio.h>

int main() {
    float salario;
    short int days;
    printf("Digite a Quantidade de Dias Trabalhados: ");
    scanf("%hd", &days);
    salario = 50.25 * days;
    if (days <= 10) {
        printf("Salário Bruto: R$ %.2f\nSalário Líquido: R$ %.2f\n", salario, salario*0.90);
    } else if (days <= 20) {
        salario *= 1.20;
        printf("Salário Bruto: R$ %.2f\nSalário Líquido: R$ %.2f\n", salario, salario*0.90);
    } else {
        salario *= 1.30;
        printf("Salário Bruto: R$ %.2f\nSalário Líquido: R$ %.2f\n", salario, salario*0.90);
    }
    
    return 0;
}