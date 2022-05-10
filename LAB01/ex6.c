#include <stdio.h> 
#include <math.h>

int main(){
    int n, i, aux;
    long long fat;
    printf("Informe o valor limiete: ");
    scanf("%d", &n);
    aux = n;
    for(i = n; i > 0; i--){
        for(fat = 1; n > 1; n = n - 1)fat = fat * n;
        printf("\nFatorial de %d eh: %lld",aux, fat);
        aux = aux - 1;
        n = aux;
    }
    return 0;
}