#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista *Lista;
typedef struct aluno Aluno;

Lista *createLista();
void freeLista(Lista *lista);

int size(Lista *lista);
int lista_vazia(Lista *lista);
void imprime_lista(Lista *lista);

int insereFinal(Lista *lista, Aluno aluno);
int insereInicio(Lista *lista, Aluno aluno);
int insereOrdenada(Lista *lista, Aluno aluno);

int remove(Lista *lista, int mat);
int removeInicio(Lista *lista);
int removeFinal(Lista *lista);
