#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista *Lista;

Lista *createLista();
void freeLista(Lista *lista);

int size(Lista *lista);
int lista_vazia(Lista *lista);
void imprime_lista(Lista *lista);

int insereFinal(Lista *lista, int elem);
int insereInicio(Lista *lista, int elem);
int insereOrdenada(Lista *lista, int elem);

int remove(Lista *lista, int elem);
int removeInicio(Lista *lista);
int removeFinal(Lista *lista);
