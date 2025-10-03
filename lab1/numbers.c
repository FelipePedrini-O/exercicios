#include "numbers.h"

struct number{
    int dado;
    int mark;
};

tNumber* criaNum(int a){
    tNumber* n = malloc(sizeof(*n));
    n->dado = a;
    n->mark = 0;//N marcado

    return n;
}

void marcaNum(tNumber* num){
    num->mark = 1;
}

int marcadoNum(tNumber* num){
    return num->mark == 1;
}

int retornaNum(tNumber* num){
    return num->dado;
}

void liberaNum(tNumber* num){
    if(num){
        free(num);
        num = NULL;
    }
}