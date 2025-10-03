#ifndef NUMBERS_H
#define NUMBERS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct number tNumber;

tNumber* criaNum(int a);

void marcaNum(tNumber* num);

int marcadoNum(tNumber* num);

int retornaNum(tNumber* num);

void liberaNum(tNumber* num);

#endif