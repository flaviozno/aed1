#include <stdio.h> 
#include <stdlib.h>

int main(){
    float x[2];
    float x2[2] = {0, 0};
    float distance;
    int i = 0;
    while(i < 2){
        printf("Informe o valor da %dª coordenada: ", i+1);
        scanf("%f", &x[i]);
        i++;
    }
    distance = sqrt(pow((x[0] - 0),2) + pow((x[1] - 0),2));
    printf("%f", distance);
    return 0;
}
