#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct lista *Lista;

int lista_vazia(Lista *);
Lista cria_lista();

int insere_ord(Lista *, int);
int remove_ord(Lista *, int);
int remove_pos(Lista *, int, int *);

int obtem_valor_elem(Lista *, int, int *);
int obtem_tamanho(Lista *);

int listas_iguais(Lista *, Lista *);
int media(Lista *);
int esvazia_lista(Lista *);
int intercalar(Lista *, Lista *, Lista *);