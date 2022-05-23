#include <stdio.h>

int main()
{

    double *vet[3] = {0.0, 1.0, 2.0};
    int i;
    double maior, menor;

    for (i = 0; i < 2; i++)
    {
        printf("v[%d]: %.1f", i, vet[i]);
    }

    for (i = 0; i < 3; i++)
    {
        maior = vet[0];
        if (vet[i] > maior)
        {
            maior = vet[i];
            printf("Maior: %.1f", vet[i]);
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        menor = vet[0];
        if (vet[i] < menor)
        {
            menor = vet[i];
            printf("Menor: %.1f", menor);
        }
    }

    return 0;
}