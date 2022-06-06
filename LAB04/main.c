#include "ponto.h"

int main()
{
    Ponto *pto1, *pto2;

    pto1 = gera_pto();
    pto2 = gera_pto();

    if (pto1 == NULL || pto2 == NULL)
    {
        printf("Não foi possivel criar os pontos");
        return -1;
    }

    set_pto(pto1, 2, 3);
    set_pto(pto2, 5, 6);

    printf("A distancia entre os pontos eh: %0.2f", distancia_pto(pto1, pto2));

    libera_pto(&pto1);
    libera_pto(&pto2);

    return 0;
}