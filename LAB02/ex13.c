#include <stdio.h>
#include <stdlib.h>

int * aloca_inteiro(int n);
void imprime_vet(int *p,int n);

int main(){

    int *pto, n = 10;

    pto = aloca_inteiro(10);
    printf("\n\nImprimindo...\n");
    imprime_vet(pto,n);

    free(pto);
    pto = NULL;

    return 0;
}

int * aloca_inteiro(int n){
    int *pto = (int*)malloc(n * sizeof(int));

    if(pto==NULL)
        printf("Erro ao alocar memoria");

    for(int i=0;i<n;i++) pto[i]= 0;

    return pto;

    free(pto);
    pto = NULL;
}

void imprime_vet(int *p,int n){
    for(int i=0;i<n;i++) printf("\n%d ",p[i]);
}

