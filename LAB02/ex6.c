#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd;
    printf("Informe quantos valores vai usar: ");
    scanf("%d", &qtd);
    int pares = 0, impares = 0;

    int *array = (int *) malloc(qtd * sizeof(int));

    for (int i = 0; i < qtd; i++)
    {
        printf("\n Informe o valor para a posicao %d do vetor: ", i+1);
        scanf("%d",&array[i]);
        if(array[i] % 2 == 0) pares++;
        else impares++;
     }

    printf("\nSao pares: %d dos %d inteiros lidos", pares, qtd);
    printf("\nSao impares: %d dos %d inteiros lidos", impares, qtd);

    free(array);
    array = NULL;

    return 0;
}