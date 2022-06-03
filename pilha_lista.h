typedef struct lista {
    float info;
    lista* ptr_proximo;
} LISTA_FLOAT;

typedef struct pilha {
    LISTA_FLOAT* topo;
} PILHA;

PILHA* pilha_criar(void);
void pilha_push(PILHA* p, float info);
float pilha_pop(PILHA* p);
int pilha_vazia(PILHA* p);
void pilha_libera(PILHA* p);