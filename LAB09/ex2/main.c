#include "tad.h"
int main()
{
    int elem[11] = {4, 8, -1, 19, 2, 7, 8, 5, 9, 22, 45};
    Pilha *pi = cria_Pilha();
    printf("Tamanho: %d\n\n\n\n", tamanho_Pilha(pi));
    int i;
    for (i = 0; i < 11; i++)
        insere_Pilha(pi, elem[i]);

    imprime_Pilha(pi);
    printf("Tamanho: %d\n\n\n\n", tamanho_Pilha(pi));

    for (i = 0; i < 4; i++)
        remove_Pilha(pi);
    printf("Tamanho: %d\n\n\n\n", tamanho_Pilha(pi));
    imprime_Pilha(pi);

    for (i = 0; i < 11; i++)
        insere_Pilha(pi, elem[i]);

    printf("Tamanho: %d\n\n\n\n", tamanho_Pilha(pi));
    imprime_Pilha(pi);

    libera_Pilha(pi);
    return 0;
}
