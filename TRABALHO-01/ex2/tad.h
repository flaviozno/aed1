#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max 20

typedef struct lista *Lista;

void libera(Lista list);

Lista cria();

int cheia(Lista list);

int inserir(Lista list, int value);

int remove_impares(Lista list);

int esvaziar(Lista list);

int menor(Lista list);

int tamanho(Lista list);

int posicao(Lista list, int pos);

Lista inverter(Lista list);

Lista concatenar(Lista l1, Lista l2);

Lista ordenaLista(Lista lista);

int insere_ordernada(Lista lista, int elem)