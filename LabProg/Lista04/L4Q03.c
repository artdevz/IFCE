//L4-Q3:

#include <stdio.h>

int lerValor();

int main() {    
    int num = lerValor(num), menor;
    menor = num;    
    while(!(num < 0) || (num % 2)) {        
        if (menor > num) menor = num;
        printf("Menor Número já Digitado foi: %d\n", menor);
        num = lerValor();        
    }  
    
    return 0;
}

int lerValor(int num) {
    puts("Digite um Número: [Par e Negativo para Encerrar]");
    scanf("%d", &num);
    return num;
}