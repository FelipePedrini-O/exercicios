#include "crivo.h"

struct crivo{
    int qtd;
    tNumber** numeros;
};

tCrivo* criaCrivo(int n){
    tCrivo* cri = malloc(sizeof(*cri));
    cri->qtd = n-2;

    cri->numeros = malloc(sizeof(tNumber*)*(n-2));

    for(int i=2; i<n; i++){
        cri->numeros[i-2] = criaNum(i);
    }

    return cri;
}

static void marcaNumeros(int idx, int qtd, tNumber** nums){
    for(int j=idx; j<qtd; j++){
        if(retornaNum(nums[j]) % idx == 0 && retornaNum(nums[j]) != idx){
            marcaNum(nums[j]);
        }
    }
}

void executaCrivo(tCrivo* cri){
    for(int i=0; i<cri->qtd; i++){
        marcaNumeros(i+2, cri->qtd, cri->numeros);
    }

    imprimeCrivo(cri);
}

void imprimeCrivo(tCrivo* cri){
    for(int i=0; i<cri->qtd; i++){
        if(!marcadoNum(cri->numeros[i]))
            printf("%d\n", retornaNum(cri->numeros[i]));
    }
}

void liberaCrivo(tCrivo* cri){
    if(cri){
        for(int i=0; i<cri->qtd; i++){
            //printf("%d\n", retornaNum(cri->numeros[i]));
            liberaNum(cri->numeros[i]);
        }

        free(cri->numeros);
        free(cri);
        cri = NULL;
    }
}

