// L1-Q11:

#include <stdio.h>

int main() {
    float cot, quant;
    
    printf("Digite a Cotação Atual do Dólar: ");
    scanf("%f", &cot);
    printf("Digite a Quantidade que deseja Converter: ");
    scanf("%f", &quant);

    printf("Conversão de %.2f BRL -> USD: \nU$ %.2f\n", quant, quant/cot);
    
    return 0;
}