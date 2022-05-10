#include <stdio.h> 
#include <math.h>

int main(){
    int altura;
    float massa, imc;
    scanf("%d", &altura);
    scanf("%f", &massa);
    imc = massa/pow(altura, 2);
    if(imc <= 18,5) printf("Magreza");
     if(imc > 18,5 || imc <= 24,9) printf("Saudavel");
     if(imc > 25 || imc <= 29,9) printf("Sobrepeso");
     if(imc > 30 || imc <= 34,5) printf("Ob 1");
     if(imc > 35 || imc <= 39,9) printf("Ob 2");
     if(imc >= 40) printf("Ob 3");

    return 0;
}