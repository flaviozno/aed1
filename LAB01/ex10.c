#include <stdio.h> 
#include <stdlib.h>

int main(){
    int mat[6][6] = {{1,2,3,4,5,6}, 
                     {1,2,3,4,5,6},
                     {1,2,3,4,5,6},
                     {1,2,3,4,5,6},
                     {1,2,3,4,5,6},
                     {1,2,3,4,5,6}},
    soma = 0, i, j ,p ,x;
    printf("Original\n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++)printf("%d ",mat[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("Acima da diagonal principal\n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(i != j && i < j) printf("%d ",mat[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }
    printf("Acima da diagonal secundaria\n");
    for(i=0;i<6;i++){
     
            if(i < j && i < 5) printf("%d ",mat[i][j]);
            else printf("0 ");
        printf("\n");
    }
    // printf("\n");
    // for(i=0;i<6;i++){
    //     for(j=0;j<6;j++){
    //         if(i < j) printf("%d ",mat[i][j]);
    //         else printf(" ");
    //     }
    //     printf("\n");
    // }
    return 0;
}