#include <stdio.h> 
#include <math.h>

int main(){
    int n = 6;
    int i, j, c = 0;
    for(i = 1; i<= n; i++){
        for(j=1; j<=i; j++){
            c++;
            printf(" %d", c);
        }
        printf("\n");
    }
    return 0;
}