#include "tad.h" //inclui os Prot�tipos

// Defini��o do tipo Pilha
struct pilha
{
    int qtd;
    int elem[MAX];
};

Pilha *cria_Pilha()
{
    Pilha *pi;
    pi = (Pilha *)malloc(sizeof(struct pilha));
    if (pi != NULL)
        pi->qtd = 0;
    return pi;
}

void libera_Pilha(Pilha *pi)
{
    free(pi);
}

int consulta_topo_Pilha(Pilha *pi, int *eleme)
{
    if (pi == NULL || pi->qtd == 0)
        return 0;
    *eleme = pi->elem[pi->qtd - 1];
    return 1;
}

int insere_Pilha(Pilha *pi, int eleme)
{
    if (pi == NULL)
        return 0;
    if (pi->qtd == MAX) // pilha cheia
        return 0;
    pi->elem[pi->qtd] = eleme;
    pi->qtd++;
    return 1;
}

int remove_Pilha(Pilha *pi)
{
    if (pi == NULL || pi->qtd == 0)
        return 0;
    pi->qtd--;
    return 1;
}

int tamanho_Pilha(Pilha *pi)
{
    if (pi == NULL)
        return -1;
    else
        return pi->qtd;
}

int Pilha_cheia(Pilha *pi)
{
    if (pi == NULL)
        return -1;
    return (pi->qtd == MAX);
}

int Pilha_vazia(Pilha *pi)
{
    if (pi == NULL)
        return -1;
    return (pi->qtd == 0);
}

void imprime_Pilha(Pilha *pi)
{
    if (pi == NULL)
        return;
    int i;
    for (i = pi->qtd - 1; i >= 0; i--)
    {
        printf("%d\n", pi->elem[i]);
    }
}
