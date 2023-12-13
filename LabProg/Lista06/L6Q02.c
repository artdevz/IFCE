//L6-Q2:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXCHAR 50
#define MAXRANGE 10000

struct estoque {
    char* nomePeca;
    int id;
    float price;
    int codPedido;
};

int main() {
    
    srand(time(NULL));

    struct estoque Peca;

    char nome[MAXCHAR];
    puts("Digite o Nome da Peça: ");
    fgets(nome, MAXCHAR, stdin);

    float preco;
    puts("Digite o Preço da Peça: ");
    scanf("%f", &preco);

    int code = rand() % MAXRANGE;

    Peca.nomePeca = nome;
    Peca.id = 1000+1;
    Peca.price = preco;
    Peca.codPedido = code;

    printf("\nNome da Peça: ");
    for (int i = 0; (*(Peca.nomePeca+i)) != '\0'; i++) printf("%c", *(Peca.nomePeca+i));    
    printf("ID: #%d\n", Peca.id);
    printf("Preço: R$ %.2f\n", Peca.price);
    printf("Número do Pedido: #%.4d\n\n", Peca.codPedido); 

    return 0;
}
