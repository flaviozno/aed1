#include <stdio.h>
#include <stdlib.h>

typedef struct no *Lista;

Lista criar_lista();
int lista_vazia(Lista list);
int insere_ord(Lista *lista, float elem);
int remove_ord(Lista *lista, float elem);
int obtem_valor(Lista *lista, float *elem, int pos);
int esvaziar_lista(Lista *lista);
int remove_pos(Lista *lista, int pos, float *elem);
int listas_iguais(Lista *lista_1, Lista *lista_2);
int media(Lista *lista);
int tamanho_lista(Lista *lista);
int intercalar_listas(Lista *lista_1, Lista *lista_2, Lista *lista_3);