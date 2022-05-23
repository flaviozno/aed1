#include <stdio.h>
#include <stdlib.h>

double* to_double(int *v, int tam);

int main(){
    int vet[10] = {2,4,8,16,32,64,128,256,512,1024};
    double *vet_double = to_double(vet, 10);
    
    for(int i=0;i<10;i++) printf("\n%lf ",vet_double[i]);

    return 0;
}

double* to_double(int *v, int tam){
    double *vet = (double *) malloc (tam * sizeof(double));

    if(vet == NULL)
        printf("Erro ao alocar memoria");

    for(int i=0;i<tam;i++) vet[i] = v[i];
    
    return vet;

    free(vet);
    vet = NULL;
}

