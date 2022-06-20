#include "tad.h"

struct aluno
{
    int mat;
    float n1, n2, n3;
    char nome[30];
};

struct lista
{
    int qtd;
    struct aluno alunos[MAX];
};

Lista *createLista()
{
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    if (lista != NULL)
        lista->qtd = 0;
    return lista;
}

void freeLista(Lista *lista)
{
    free(lista);
}

int lista_size(Lista *lista)
{
    if (lista == NULL)
        return -1;
    else
        return lista->qtd;
}

int isFull(Lista *lista)
{
    if (lista == NULL)
        return -1;
    return (lista->qtd == MAX);
}

int isEmpty(Lista *lista)
{
    if (lista == NULL)
        return -1;
    return (lista->qtd == 0);
}

int insereFinal(Lista *lista, Aluno aluno)
{
    if (lista == NULL)
        return 0;
    if (isEmpty(lista))
        return 0;
    lista->alunos[lista->qtd] = aluno;
    lista->qtd++;
    return 1;
}

int insereInicio(Lista *lista, Aluno aluno)
{
    if (lista == NULL)
        return 0;
    if (isFull(lista))
        return 0;
    for (int i = lista->qtd - 1; i >= 0; i--)
        lista->alunos[i + 1] = lista->alunos[i];
    lista->alunos[0] = aluno;
    lista->qtd++;
    return 1;
}

int insereOrdenado(Lista *lista, Aluno aluno)
{
    if (lista == NULL)
        return 0;
    if (isFull(lista))
        return 0;
    int i = 0, k;
    while (i < lista->qtd && lista->alunos[i].mat < aluno.mat)
        i++;
    for (k = lista->qtd - 1; k >= i; k--)
        lista->alunos[k + 1] = lista->alunos[k];
    lista->alunos[i] = aluno;
    lista->qtd++;
    return 1;
}

int remove(Lista *lista, int mat)
{
    if (lista == NULL)
        return 0;
    if (lista->qtd == 0)
        return 0;
    int i = 0;
    while (i < lista->qtd && lista->alunos[i].mat < mat)
        i++;
    if (i == lista->qtd) // elemento nao existe
        return 0;
    lista->qtd--;
    lista->alunos[i] = lista->alunos[lista->qtd];
    return 1;
}

int removeInicio(Lista *lista)
{
    if (lista == NULL)
        return 0;
    if (lista->qtd == 0)
        return 0;
    for (int i = 0; i < lista->qtd - 1; i++)
    {
        lista->alunos[i] = lista->alunos[i + 1];
    }
    lista->qtd--;
    return 1;
}

int removeFinal(Lista *lista)
{
    if (lista == NULL)
        return 0;
    if (lista->qtd == 0)
        return 0;
    lista->qtd--;
    return 1;
}

void imprime_lista(Lista *lista)
{
    if (lista == NULL)
        return;
    for (int i = 0; i < lista->qtd; i++)
    {
        printf("Matricula: %d\n", lista->alunos[i].mat);
        printf("Nome: %s\n", lista->alunos[i].nome);
        printf("Notas: %f %f %f\n", lista->alunos[i].n1,
               lista->alunos[i].n2,
               lista->alunos[i].n3);
    }
}