#include <stdio.h>
#include <stdlib.h>

int main(){

    int *array = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("\n Informe o valor para a posicao %d do vetor: ", i+1);
        scanf("%d",&array[i]);
    }

    for (int i = 0;i < 5; i++)
    {
        printf("%d\n",array[i]);
    }

    free(array);
    array = NULL;
    
    return 0;
}