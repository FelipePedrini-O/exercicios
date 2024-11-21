#include <stdio.h>
#include "jogo.h"

int main(){
    tJogo jogo;

    jogo = CriaJogo();

    do{
        jogo.tabuleiro = JogaJogador(jogo.jogador1, jogo.tabuleiro);
        ImprimeTabuleiro(jogo.tabuleiro);

        if(AcabouJogo(jogo) || VenceuJogador(jogo.jogador1, jogo.tabuleiro) || VenceuJogador(jogo.jogador2, jogo.tabuleiro)){
            if(ContinuaJogo()){
                jogo = CriaJogo();
            }
        }

        jogo.tabuleiro = JogaJogador(jogo.jogador2, jogo.tabuleiro);
        ImprimeTabuleiro(jogo.tabuleiro);

        if(AcabouJogo(jogo) || VenceuJogador(jogo.jogador1, jogo.tabuleiro) || VenceuJogador(jogo.jogador2, jogo.tabuleiro)){
            if(ContinuaJogo()){
                jogo = CriaJogo();
            }
        }
    }while(!AcabouJogo(jogo) && !(VenceuJogador(jogo.jogador1, jogo.tabuleiro) || VenceuJogador(jogo.jogador2, jogo.tabuleiro)));

    return 0;
}