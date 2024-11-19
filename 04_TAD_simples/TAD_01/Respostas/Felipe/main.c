#include <stdio.h>
#include "jogo.h"
#include "jogada.h"

int main(){
    tJogo jogo;

    jogo = CriaJogo();

    do{
        JogaJogador(jogo.jogador1, jogo.tabuleiro);
        ImprimeTabuleiro(jogo.tabuleiro);

        JogaJogador(jogo.jogador2, jogo.tabuleiro);
        ImprimeTabuleiro(jogo.tabuleiro);

        if(AcabouJogo(jogo) || VenceuJogador(jogo.jogador1, jogo.tabuleiro) || VenceuJogador(jogo.jogador2, jogo.tabuleiro)){
            if(ContinuaJogo()){
                if(VenceuJogador(jogo.jogador1, jogo.tabuleiro)){
                    printf("Jogador 1 venceu!\n");
                }else if(VenceuJogador(jogo.jogador2, jogo.tabuleiro)){
                    printf("Jogador 2 venceu!\n");
                }
                jogo = CriaJogo();
            }
        }
    }while(!AcabouJogo(jogo) && !(VenceuJogador(jogo.jogador1, jogo.tabuleiro) || VenceuJogador(jogo.jogador2, jogo.tabuleiro)));

    return 0;
}