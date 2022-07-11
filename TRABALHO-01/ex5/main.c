#include "tad.h"

#define tam 3

int main()
{
  int option = 1, continuar = 1, tmp = 0, tmp2 = 0, qnt_lista = 0;
  int elem;
  Lista lst[tam];
  int lst_ocupados[tam] = {0};
  while (continuar)
  {
    printf("1: Criar lista\n2: Insere no inicio da lista\n3: Insere no final da lista\n4: Insere em uma posicao\n5: Remove no inicio da lista\n6: Remove no final da lista\n7: Remove em uma posicao\n8: Imprimir lista\n9: Tamanho de uma lista\n10: Exibir maior elemento de uma lista\n11: Remover pares\n12: Sair\n\nOpcao: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      /* Criar lista */
      if (qnt_lista < tam)
      {
        int i;
        for (i = 0; i < tam; i++)
        {
          if (lst_ocupados[i] == 0)
            break;
        }

        lst[i] = cria_lista();
        printf("Lista %d criada com sucesso\n", i);
        lst_ocupados[i]++;
        qnt_lista++;
      }
      else
      {
        printf("Quantidade maximas de listas criadas tente outro comando\n");
      }
      break;

    case 2:
      /* Insere no inicio da lista */

      printf("Em qual lista deseja inserir");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);
      printf("Insira a elem que deseja inserir na lista %d: ", tmp);
      setbuf(stdin, NULL);
      scanf("%d", &elem);
      if (insere_inicio(&lst[tmp], elem))
      {
        printf("Sucesso");
      }
      else
      {
        printf("Erro");
      }

      break;
    case 3:
      /* Insere no inicio da lista */

      printf("Em qual lista deseja inserir");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);
      printf("Insira a elem que deseja inserir na lista %d: ", tmp);
      setbuf(stdin, NULL);
      scanf("%d", &elem);
      if (insere_final(&lst[tmp], elem))
      {
        printf("Sucesso");
      }
      else
      {
        printf("Erro");
      }

      break;
    case 4:
      /* Insere no inicio da lista */

      printf("Em qual lista deseja inserir");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);
      printf("Insira a elem que deseja inserir na lista %d: ", tmp);
      setbuf(stdin, NULL);
      scanf("%d", &elem);
      printf("Insira em que posicao deseja inserir na lista %d: ", tmp);
      scanf("%d", &tmp2);
      if (insere_pos(&lst[tmp], tmp2, elem))
      {
        printf("Sucesso");
      }
      else
      {
        printf("Erro");
      }

      break;
    case 5:
      printf("Em qual lista deseja remover");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);
      remove_inicio(&lst[tmp], &elem);
      printf("%d Removido da lista %d\n", elem, tmp);

      break;
    case 6:
      printf("Em qual lista deseja remover");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);
      remove_final(&lst[tmp], &elem);
      printf("%d Removido da lista %d\n", elem, tmp);

      break;
    case 7:
      /* REMOVENDO POSIÇÃO */
      printf("Em qual lista deseja remover");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);

      printf("Insira a posicao que deseja remover: ");
      scanf("%d", &tmp2);
      if (remove_pos(&lst[tmp], tmp2, &elem))
        printf("%d foi removido\n", elem);
      else
        printf("Erro ao remover na posicao %d\n", tmp2);
      break;
    case 8:
      /* IMPRIMINDO LISTA */
      printf("Qual lista deseja imprimir");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);
      int i = 0;
      while (obtem_valor_elem(&(lst[tmp]), i, &elem))
      {
        printf("%d ", elem);
        i++;
      }
      printf("\n");
      break;

    case 9:
      // TAMANHO
      printf("Qual lista deseja ver o tamanho");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);
      printf("Tamanho da lista %d: %d", tmp, lista_tam(&lst[tmp]));

      break;
    case 10:
      // MAIOR ELEMENTO
      printf("Qual lista deseja ver o maior elemento");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);
      if (maior_elem(&lst[tmp], &elem))
        printf("Maior elemento %d\n", elem);
      else
        printf("Nao consegui achar o maior elemento\n");
      break;
    case 11:
      printf("Qual lista deseja imprimir");
      for (int i = 0; i < qnt_lista; i++)
        printf(" %d", i);
      printf(": ");
      scanf("%d", &tmp);
      remove_pares(&lst[tmp]);
      int j = 0;
      while (obtem_valor_elem(&(lst[tmp]), j, &elem))
      {
        printf("%d ", elem);
        j++;
      }
      printf("\n");
      break;
    case 12:
      // SAIR DO LOOP
      continuar = 0;
      break;
    default:
      printf("Opcao invalida, tente novamente\n");
      break;
    }
  }
  return 0;
}
