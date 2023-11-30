#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 9
#define MINRANGE 1
#define MAXNUMOPTIONS 2
#define MAXMEMORY 100
#define INITIAL 0

struct Memoria {
    char status;
    int start;
    int range;
    struct Memoria *prox;
};

void gerarMemoria(struct Memoria *, int);
void gerarProcesso(struct Memoria *);
int gerarIntervalo(struct Memoria *);
void exibirMemoria(struct Memoria *);
void imprimir(struct Memoria *);


int main() {
    srand(time(NULL));
    
    struct Memoria n;     
    gerarMemoria(&n, INITIAL);    

    return 0;
}

void gerarMemoria(struct Memoria *p, int inicial) {

    p->start = inicial;
    gerarProcesso(p);
    int range = gerarIntervalo(p);
    exibirMemoria(p);

    struct Memoria *n;
    n = malloc(sizeof(struct Memoria));
    n->prox = p->prox;
    p->prox = n;
    if (inicial+range >= MAXMEMORY) p->prox = NULL;

    gerarMemoria(p->prox, (inicial + range));
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

void exibirMemoria(struct Memoria *p) {
    
    printf("Status:  [%c]\nInicio:  [%d]\nTamanho: [%d]\n\n", p->status, p->start, p->range);    
}
