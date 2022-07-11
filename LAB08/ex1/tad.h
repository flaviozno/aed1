#include <stdio.h>
#include <stdlib.h>

typedef struct no *Lista;

int lista_vazia(Lista *);
Lista cria_lista();
int insere_final(Lista *, int);
int insere_inicio(Lista *, int);
int remove_inicio(Lista *, int *);
int remove_final(Lista *, int *);
int obtem_valor_elem(Lista *, int, int *);
int insere_pos(Lista *, int, int);
int remove_pos(Lista *, int, int *);
int lista_tam(Lista *);
int maior_elem(Lista *, int *);
int remove_pares(Lista *);