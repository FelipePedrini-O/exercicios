#include "jogada.h"
#include <stdio.h>

tJogada LeJogada(){
    tJogada jogada;

    if(scanf("%d %d", &jogada.x, &jogada.y) == 2){
        jogada.sucesso = 1;
    }else{
        jogada.sucesso = 0;
        printf("Jogada invalida!\n");
    }

    return jogada;
}

int ObtemJogadaX(tJogada jogada){
    return jogada.x;
}

int ObtemJogadaY(tJogada jogada){
    return jogada.y;
}

int FoiJogadaBemSucedida(tJogada jogada){
    return jogada.sucesso;
}
