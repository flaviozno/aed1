#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    int x, y;
}Ponto;

void inc_dir(Ponto *p1);

int main(){
    Ponto pto;

    pto.x = 1;
    pto.y = 2;

    inc_dir(&pto);

    return 0;
}

void inc_dir(Ponto *p1){

    Ponto *pto = (Ponto *) malloc (1 * sizeof(Ponto));

    if(pto == NULL)
        printf("Erro ao alocar memoria");

    (*pto).x = (p1->x + 1);
    (*pto).y = (p1->y + 0);
    printf("\n+1 Leste");
           
    (*pto).x = p1->x - 1;
    (*pto).y = p1->y - 0;
    printf("\n+1 Oeste");
              
    (*pto).y = p1->y + 1;
    (*pto).x = p1->y + 0;
    printf("\n+1 Norte");
                
    (*pto).y = p1->y - 1;
    (*pto).x = p1->x - 0;
    printf("\n+1 Sul");

    free(pto); 
    pto = NULL;    
}

