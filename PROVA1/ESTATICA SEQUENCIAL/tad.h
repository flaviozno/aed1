#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct lista Lista;
typedef struct aluno Aluno;

Lista *createLista();
void freeLista(Lista *lista);
int lista_size(Lista *lista);
int isFull(Lista *lista);
int isEmpty(Lista *lista);

int insereFinal(Lista *lista, Aluno aluno);
int insereInicio(Lista *lista, Aluno aluno);
int insereOrdenado(Lista *lista, Aluno aluno);

int remove(Lista *lista, int mat);
int removeInicio(Lista *lista);
int removeFinal(Lista *lista);

void imprime_lista(Lista *lista);