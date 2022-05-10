#include <stdio.h> 
#include <math.h>

int main(){
    float values[5], sum, desvioPadrao = 0;
    int i;
    for(i = 0; i<5; i++){
        printf("Informe o %do valor: ", i+1);
        scanf("%f", &values[i]);
    }
    i = 0;
    for(i = 0; i<5; i++) sum += values[i];
    printf("A media eh: %.2f", sum/5);
    i = 0;
    for(i = 0; i < 5; i++) desvioPadrao += pow((values[i] - (sum/5)), 2);
    printf("\nO desvio padrao eh: %f", sqrt(desvioPadrao/4));
    return 0;
}