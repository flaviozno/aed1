#include "tad.h"

struct aluno
{
    int mat;
    float n1, n2, n3;
    char nome[30];
};

struct lista
{
    struct aluno alunos;
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

int insereFinal(Lista *lista, Aluno aluno)
{
    if (lista == NULL)
        return 0;
    Elem *aux = (Elem *)malloc(sizeof(Elem));
    if (aux == NULL)
        return 0;
    aux->alunos = aluno;
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
int insereInicio(Lista *lista, Aluno aluno)
{
    if (lista == NULL)
        return 0;
    Elem *aux = (Elem *)malloc(sizeof(Elem));
    if (aux == NULL)
        return 0;
    aux->alunos = aluno;
    aux->prox = NULL;
    *lista = aux;
    return 1;
}
int insereOrdenada(Lista *lista, Aluno aluno)
{
    if (lista == NULL)
        return 0;
    Elem *aux = (Elem *)malloc(sizeof(Elem));
    if (aux == NULL)
        return 0;
    aux->alunos = aluno;
    if ((*lista) == NULL)
    { // lista vazia, insere inicio
        aux->prox = NULL;
        *lista = aux;
        return 1;
    }
    else
    {
        Elem *ant, *atual = *lista;
        while (atual != NULL && atual->alunos.mat < aluno.mat)
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

int remove(Lista *lista, int mat)
{
    if (lista == NULL)
        return 0;
    if ((*lista) == NULL)
        return 0;
    Elem *ant, *aux = *lista;
    while (aux != NULL && aux->alunos.mat != mat)
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
        printf("Matricula: %d\n", aux->alunos.mat);
        printf("Nome: %s\n", aux->alunos.nome);
        printf("Notas: %f %f %f\n", aux->alunos.n1,
               aux->alunos.n2,
               aux->alunos.n3);
        aux = aux->prox;
    }
    free(aux);
}