#include "jogada.h"

typedef struct{
    int x;
    int y;
    int sucesso;
} tJogada;

tJogada LeJogada(){
    tJogada jogada;

    if(scanf("%d %d", &jogada.x, &jogada.y) == 1){
        jogada.sucesso = 1;
    }else{
        jogada.sucesso = 0;
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
