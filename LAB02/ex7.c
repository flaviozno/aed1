#include <stdio.h>
#include <stdlib.h>

typedef struct pontos{
    int x,y;
}Pontos;

int main(){
    int qtd;
    printf("Informe quantos valores vai usar: ");
    scanf("%d", &qtd);
    Pontos *p = (Pontos *) malloc(qtd*sizeof(Pontos));
    p[qtd];

    for(int i=0; i<qtd; i++){
        printf("\nInforme o valor de x: ");
        scanf("%d", &p[i].x);
        printf("\nInforme o valor de y: ");
        scanf("%d", &p[i].y);
    }

    for (int i = 0; i<qtd; i++){
        printf("\nx: %d", p[i].x);
        printf("\ny: %d", p[i].y);
    }

    free(p);
    p = NULL;
    return 0;
}