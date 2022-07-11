#include "tad.h"

int main()
{

    int sair = 0;
    int pos;
    int elem;
    Lista listas[3];
    listas[0] = criar_lista(); // Lista 1
    listas[1] = criar_lista(); // Lista 2
    listas[2] = criar_lista(); // Lista 3
    while (sair != 1)
    {
        int op = 0;
        printf("\n\n[1] Imprimir lista");
        printf("\n[2] Inserir elemento");
        printf("\n[3] Remover elemento");
        printf("\n[4] Tamanho da lista");
        printf("\n[5] Remover todas as ocorrencias de um elemento");
        printf("\n[6] Remover o maior elemento da lista");
        printf("\n[7] Esvaziar lista");
        printf("\n[8] Inverter lista 1");
        printf("\n[9] Inserir multiplos de 3 da lista 1 na lista 2");
        printf("\n[10] Media");
        printf("\n[11] Iguais");
        printf("\n[12] Sair\n");
        scanf("%d", &op);

        switch (op)
        {
            int lista, ind, removidos;
        // Imprimir lista
        case 1:
            printf("Qual lista deseja imprimir (1, 2 ou 3): \n");
            scanf("%d", &lista);
            ind = lista - 1;

            if (lista_vazia(listas[ind]) == 1)
            {
                printf("A lista esta vazia!!");
            }
            else
            {
                printf("Lista %d: [", lista);
                size_t pos = 0;
                while (obtem_valor(&listas[ind], &elem, pos) == 1)
                {
                    printf(" %d ", elem);
                    pos++;
                }
                printf("]");
            }
            break;
        // Inserir elemento
        case 2:
            printf("Deseja inserir na lista 1 ou 3: \n");
            scanf("%d", &lista);
            ind = lista - 1;
            printf("\nQual o elemento que deseja inserir: ");
            scanf(" %d", &elem);
            if (insere_elem(&listas[ind], elem) == 0)
                printf("Nao foi possivel inserir o elemento!");
            else
                printf("Elemento inserido!");
            break;
        case 3:
            printf("Deseja remover na lista 1, 2 ou 3");
            scanf(" %d", &lista);
            ind = lista - 1;
            printf("Qual elemento deseja remover: ");
            scanf(" %d", &elem);
            if (remove_elem(&listas[ind], elem) == 0)
                printf("Falha ao remover elemento. Ele pode nao estar na lista!!");
            else
                printf("Elemento removido!");

            break;
        // Tamanho da lista
        case 4:
            printf("Deseja saber o tamanho na lista 1, 2 ou 3");
            scanf(" %d", &lista);
            ind = lista - 1;
            int tam = tamanho_lista(&listas[ind]);
            if ((tam) == 0)
                printf("A lista esta vazia!");
            else
                printf("A lista %d tem %d elementos.", lista, tam);
            break;
        // Remove todos as ocorrências de um elemento na lista
        case 5:
            printf("Em qual lista deseja REMOVER TODAS as ocorrencias de um elemento (1, 2 ou 3): ");
            scanf(" %d", &lista);
            ind = lista - 1;
            printf("Qual elemento deseja remover: ");
            scanf(" %d", &elem);
            removidos = remover_todos(&listas[ind], elem);
            if (removidos == 0)
                printf("Falha ao remover elemento. Ele pode nao estar na lista!!");
            else
                printf("Foram removidos %d elementos!", removidos);
            break;
        // Remove o maior elemendo da lista indicada
        case 6:
            printf("Deseja REMOVER o maior elemento de qual lista (1, 2 ou 3): ");
            scanf(" %d", &lista);
            ind = lista - 1;
            if (remove_maior(&listas[ind]) == 0)
                printf("Erro: Nao foi possivel encontrar o maior elemento");
            else
                printf("O maior elemento foi removido!");
            break;
        // Limpar lista
        case 7:
            printf("Qual lista deseja LIMPAR (1, 2 ou 3): ");
            scanf(" %d", &lista);
            ind = lista - 1;
            if (esvaziar_lista(&listas[ind]) == 0)
                printf("Erro! A lista pode ja estar limpa!");
            else
                printf("Lista limpa!");
            break;
        // Insere os elementos de lista 1 na lista 2 em ordem inversa
        case 8:
            if (inverter_lista(&listas[0], &listas[1]) == 0)
                printf("Nao foi possivel inverter a lista 1");
            else
                printf("Lista 1 invertida com sucesso. Resultado armazenado na lista 2");
            break;
        // Insere os multiplos de 3 em lista 1 na lista 2
        case 9:
            printf("Se a lista 2 possuir algum conteudo, ele sera limpo!");
            if (multiplos_tres(&listas[0], &listas[1]) == 0)
                printf("\nNao foi possivel realizar a operacao!");
            else
                printf("\nMultiplos de 3 em lista 1 foram armazenados na lista 2!");
            break;
        // Sair do programa
        case 10:
            printf("De qual lista deseja saber a media (1, 2 ou 3): ");
             scanf(" %d", &lista);
            ind = lista - 1;
            if ((tamanho_lista(&listas[ind])) == 0)
                printf("A lista esta vazia!");
            else
                printf("A lista %d tem media %.2f", lista, media(&listas[ind]));
            break;
        case 11:
            if (iguais(&listas[0], &listas[2]) == 0)
                printf("As listas 1 e 3 não são iguais");
            else
                printf("As listas 1 e 3 são iguais");
            break;
        case 12:
            sair = 1;
            break;
        default:
            printf("Opcao invalida!");
            break;
        }
    };

    return 0;
}