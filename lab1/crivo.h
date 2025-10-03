#ifndef CRIVO_H
#define CRIVO_H

#include "numbers.h"

typedef struct crivo tCrivo;

tCrivo* criaCrivo(int n);

void executaCrivo(tCrivo* cri);

void liberaCrivo(tCrivo* cri);

void imprimeCrivo(tCrivo* cri);

#endif