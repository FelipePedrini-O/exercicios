#include "jogo.h"

int main(){
    tJogo jogo;

    jogo = CriaJogo();

    do{
        printf("Jogador 1\n");
        jogo.tabuleiro = JogaJogador(jogo.jogador1, jogo.tabuleiro);
        ImprimeTabuleiro(jogo.tabuleiro);

        if(AcabouJogo(jogo) || VenceuJogador(jogo.jogador1, jogo.tabuleiro) || VenceuJogador(jogo.jogador2, jogo.tabuleiro)){
            if(ContinuaJogo()){
                jogo = CriaJogo();
            }
        }

        printf("Jogador 2\n")
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