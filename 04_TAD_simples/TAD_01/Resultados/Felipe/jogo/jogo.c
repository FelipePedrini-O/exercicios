#include "jogo.h"
#include <stdio.h>

tJogo CriaJogo(){
    tJogo jogo;

    jogo.tabuleiro = CriaTabuleiro();
    jogo.jogador1 = CriaJogador(ID_JOGADOR_1);
    jogo.jogador2 = CriaJogador(ID_JOGADOR_2);

    return jogo;
}

void ComecaJogo(tJogo jogo){
    
}

int AcabouJogo(tJogo jogo){
    
    if(!TemPosicaoLivreTabuleiro(jogo.tabuleiro)){
        return 1;
    }
    return 0;
}

int ContinuaJogo(){
    char resp; 

    scanf("%*c");
    printf("Jogar novamente? (s,n)\n");
    scanf("%c", &resp);

    if(resp == 's'){
        return 1;
    }

    return 0;
}