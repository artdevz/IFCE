#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 9
#define MINRANGE 1
#define MAXNUMOPTIONS 2
#define MAXMEMORY 100
#define INITIAL 0
#define VEZ 0

struct Memoria {
    char status;
    int start;
    int range;
    struct Memoria *prox;
};

struct Armazenamento {
    char totalStatus[MAXMEMORY];
    int totalStart[MAXMEMORY];
    int totalRange[MAXMEMORY];
};

int gerarMemoria(struct Memoria *, int, int, struct Armazenamento *);
void gerarProcesso(struct Memoria *);
int gerarIntervalo(struct Memoria *);
void exibirMemoria(struct Armazenamento *, int);
void alocarMemoria(struct Armazenamento *, int);

int main() {
    srand(time(NULL));
    
    struct Memoria n;
    struct Armazenamento atual;    
    int vezes = gerarMemoria(&n, INITIAL, VEZ, &atual);      

    int retorno = 1;
    while(retorno != 0) {

        puts("\nArmazenamento:\n");
        exibirMemoria(&atual, vezes);

        alocarMemoria(&atual, vezes);

        puts("Digite [0] para Sair.");
        scanf("%d", &retorno);               
    }    

    return 0;
}

int gerarMemoria(struct Memoria *p, int inicial, int vez, struct Armazenamento *atual) {    
    
    if (inicial >= MAXMEMORY) return vez;

    p->start = inicial;
    gerarProcesso(p);
    int range = gerarIntervalo(p);     
    
    atual->totalStatus[vez] = p->status;    
    atual->totalStart[vez] = p->start;    
    atual->totalRange[vez] = p->range;    

    struct Memoria *n;
    n = malloc(sizeof(struct Memoria));
    n->prox = p->prox;
    p->prox = n;
    if (inicial+range >= MAXMEMORY) p->prox = NULL;
    
    return gerarMemoria(p->prox, (inicial + range), vez+=1, atual);
            
}

void gerarProcesso(struct Memoria *p) {  

    if ( (rand() % MAXNUMOPTIONS) ) {
        p->status = 'P';
    } else {
        p->status = 'L';
    } 
}

int gerarIntervalo(struct Memoria *p) {

    p->range = (rand() % MAXRANGE + MINRANGE);    
    if (p->start + p->range > MAXMEMORY) p->range = MAXMEMORY - p->start;       
    
    return p->range;
}

void exibirMemoria(struct Armazenamento *espaco, int vezes) {
    
    for (int i = 0; i < vezes; i++) printf("Status:  [%c]\nInicio:  [%d]\nTamanho: [%d]\n\n", espaco->totalStatus[i], espaco->totalStart[i], espaco->totalRange[i]);    
}

void alocarMemoria(struct Armazenamento *espaco, int vezes) {

    int alocacao;
    char alocado = '0';
    puts("Quantos Espaços deseja Alocar?");
    scanf("%d", &alocacao);

    for (int i = 0; i < vezes; i++) {

        if ( ( (espaco->totalStatus[i]) == 'L' ) && ( (alocacao <= espaco->totalRange[i]) ) ) {
            printf("->%d\n", espaco->totalRange[i]);
            espaco->totalStatus[i] = 'P';
            espaco->totalRange[i] = alocacao;
            alocado = '1';
            break;
        }
    }
    if (alocado == '0') puts("ERRO! Não houve Espaço na Memória :(\n");
}