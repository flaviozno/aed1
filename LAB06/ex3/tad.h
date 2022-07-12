#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista *Lista;
typedef struct bebida Bebida;

Lista *createLista();
void freeLista(Lista *lista);

int size(Lista *lista);
int lista_vazia(Lista *lista);
void imprime_lista(Lista *lista);

int insereFinal(Lista *lista, Bebida bebida);
int insereInicio(Lista *lista, Bebida bebida);
int insereOrdenada(Lista *lista, Bebida bebida);

int remove(Lista *lista, int vol);
int removeInicio(Lista *lista);
int removeFinal(Lista *lista);
