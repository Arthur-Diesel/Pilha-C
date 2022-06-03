#include <stdio.h>
#include <stdlib.h>
#include <pilha_lista.h>

PILHA* pilha_criar (void) {
    PILHA* p = (PILHA*) malloc(sizeof(PILHA));
    p->topo = NULL;
    return p;
};
void pilha_push (PILHA* p, float info) {
    LISTA_FLOAT* l = (LISTA_FLOAT*) malloc(sizeof(LISTA_FLOAT));
    l->ptr_proximo = p->topo;
    l->info = info;
    p->topo = l;
};
int pilha_vazia (PILHA* p) {
    return p->topo == NULL;
};
float pilha_pop (PILHA* p) {
    LISTA_FLOAT* l;
    float info;
    if(pilha_vazia(p)){
        printf("Pilha vazia. \n");
        return -1;
    }
    l = p->topo;
    info = l->info;
    p->topo = l->ptr_proximo;
    free(l);
    return info;
};
void pilha_libera (PILHA* p) {
    LISTA_FLOAT* l = p-> topo;
    while(l != NULL){
        LISTA_FLOAT* aux = l->ptr_proximo;
        free(l);
        l = aux;
    }
    free(p);
};

void pilha_imprimir(PILHA* p){
    LISTA_FLOAT* l;
    for(l = p->topo; l!= NULL; l = l->ptr_proximo){
        printf("%f\n", l->info);
    }
}

void main () {
}