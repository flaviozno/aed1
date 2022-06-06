#include "ponto.h"

struct ponto
{
    float x, y;
};

Ponto *gera_pto()
{
    Ponto *p = (Ponto *)malloc(sizeof(Ponto));
    return p;
}

float set_pto(Ponto *pto, float N1, float N2)
{
    if (pto == NULL)
        return 0;

    pto->x = N1;
    pto->y = N1;

    return 1;
}

float get_pto(Ponto *pto, float *N1, float *N2)
{
    if (pto == NULL)
        return 0;

    *N1 = pto->x;
    *N2 = pto->y;

    return 1;
}

void libera_pto(Ponto **pto)
{
    free(*pto);
    *pto = NULL;
}

float distancia_pto(Ponto *pto1, Ponto *pto2)
{
    return sqrt(pow((pto2->x) - (pto1->x), 2) + pow((pto2->y) - (pto1->x), 2));
}
