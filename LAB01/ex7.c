#include <stdio.h> 
#include <math.h>

int main(){
    int fat, n, i, aux;
    n = 15;
    aux = n;
    for(i = n; i > 0; i--){
        if(n < 10) return 0;
        else{
            for(fat = 1; n > 1; n = n - 1)fat = fat * n;
            printf("\nFatorial de %d eh: %d",aux, fat);
            aux = aux - 1;
            n = aux;
        }
    }
    return 0;
}

//irá ocorrer um erro caso fat seja um int, basta alterar seu valor para long long int e o resultado ira aprecer corretamente