// L1-Q16:

#include <stdio.h>

int main() {
    float salario, ha;
    short int ht;
    printf("Digite o Valor da Hora-Aula: ");
    scanf("%f", &ha);
    printf("Digite Quantas Horas-Aula trabalhadas durante o mês: ");
    scanf("%hd", &ht);
    salario = ht * ha;
    printf("Salário Bruto: R$ %.2f\n", salario);

    if (salario <= 1300.00) {
        printf("Classificado na 1ª Faixa:\nSalário Líquido: R$ %.2f\n", salario*0.925);
    } else if (salario <= 2571.29) {
        printf("Classificado na 2ª Faixa:\nSalário Líquido: R$ %.2f\n", salario*0.91);
    } else if (salario <= 3856.94) {
        printf("Classificado na 3ª Faixa:\nSalário Líquido: R$ %.2f\n", salario*0.88);
    } else {
        printf("Classificado na 4ª Faixa:\nSalário Líquido: R$ %.2f\n", salario*0.86);
    }
    
    return 0;
}