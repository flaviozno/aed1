#include "tad.h"

struct lista
{
    int eleme;
    struct lista *prox;
};

typedef struct lista Elem;

Lista *createLista()
{
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    if (lista != NULL)
        *lista = NULL;
    return lista;
}

void freeLista(Lista *lista)
{
    if (lista != NULL)
    {
        Elem *aux;
        while ((*lista) != NULL)
        {
            aux = *lista;
            *lista = (*lista)->prox;
            free(aux);
        }
        free(lista);
    }
}

int size(Lista *lista)
{
    if (lista == NULL)
        return 0;
    int cont = 0;
    Elem *aux = *lista;
    while (aux != NULL)
    {
        cont++;
        aux = aux->prox;
    }
    free(aux);
    return cont;
}

int insereFinal(Lista *lista, int elem)
{
    if (lista == NULL)
        return 0;
    Elem *aux = (Elem *)malloc(sizeof(Elem));
    if (aux == NULL)
        return 0;
    aux->eleme = elem;
    aux->prox = NULL;
    if ((*lista) == NULL) // lista vazia, insere inicio
        *lista = aux;
    else
    {
        Elem *aux2 = *lista;
        while (aux2->prox != NULL)
        {
            aux2 = aux2->prox;
        }
        aux2->prox = aux;
    }
    return 1;
}
int insereInicio(Lista *lista, int elem)
{
    if (lista == NULL)
        return 0;
    Elem *aux = (Elem *)malloc(sizeof(Elem));
    if (aux == NULL)
        return 0;
    aux->eleme = elem;
    aux->prox = NULL;
    *lista = aux;
    return 1;
}
int insereOrdenada(Lista *lista, int elem)
{
    if (lista == NULL)
        return 0;
    Elem *aux = (Elem *)malloc(sizeof(Elem));
    if (aux == NULL)
        return 0;
    aux->eleme = elem;
    if ((*lista) == NULL)
    { // lista vazia, insere inicio
        aux->prox = NULL;
        *lista = aux;
        return 1;
    }
    else
    {
        Elem *ant, *atual = *lista;
        while (atual != NULL && atual->eleme < elem)
        {
            ant = atual;
            atual = atual->prox;
        }
        if (atual == *lista)
        { // primerio elemento
            aux->prox = *lista;
            *lista = aux;
        }
        else
        {
            aux->prox = atual;
            ant->prox = aux;
        }
        return 1;
    }
}

int remove(Lista *lista, int elem)
{
    if (lista == NULL)
        return 0;
    if ((*lista) == NULL)
        return 0;
    Elem *ant, *aux = *lista;
    while (aux != NULL && aux->eleme != elem)
    {
        ant = aux;
        aux = aux->prox;
    }
    if (aux == NULL) // elemento nao existe
        return 0;
    if (aux == *lista) // primeiro elemento
        *lista = aux->prox;
    else
        ant->prox = aux->prox;
    free(aux);
    return 1;
}
int removeInicio(Lista *lista)
{
    if (lista == NULL)
        return 0;
    if ((*lista) == NULL)
        return 0;
    Elem *aux = *lista;
    *lista = aux->prox;
    free(aux);
    return 1;
}
int removeFinal(Lista *lista)
{
    if (lista == NULL)
        return 0;
    if ((*lista) == NULL) // lista vazia
        return 0;

    Elem *ant, *aux = *lista;
    while (aux->prox != NULL)
    {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == (*lista)) // remover o primeiro
        *lista = aux->prox;
    else
        ant->prox = aux->prox;
    free(aux);
    return 1;
}

int lista_vazia(Lista *lista)
{
    if (lista == NULL)
        return 1;
    if (*lista == NULL)
        return 1;
    return 0;
}

void imprime_lista(Lista *lista)
{
    if (lista == NULL)
        return;
    Elem *aux = *lista;
    while (aux != NULL)
    {
        printf("%d\n", aux->eleme);
        aux = aux->prox;
    }
    free(aux);
}