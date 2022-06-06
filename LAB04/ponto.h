#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ponto Ponto;

Ponto *gera_pto();
float set_pto(Ponto *pto, float N1, float N2);
float get_pto(Ponto *pto, float *N1, float *N2);
void libera_pto(Ponto **pto);
float distancia_pto(Ponto *pto1, Ponto *pto2);