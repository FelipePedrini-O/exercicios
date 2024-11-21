#include "jogador.h"
#include "jogada.h"
#include <stdio.h>

tJogador CriaJogador(int idJogador){
    tJogador jogador;

    jogador.id = idJogador;

    return jogador;
}

tTabuleiro JogaJogador(tJogador jogador, tTabuleiro tabuleiro){
    tJogada jogada;

    jogada = LeJogada();

    if(FoiJogadaBemSucedida(jogada)){
        if(EhPosicaoValidaTabuleiro(ObtemJogadaX(jogada), ObtemJogadaY(jogada)) && EstaLivrePosicaoTabuleiro(tabuleiro, ObtemJogadaX(jogada), ObtemJogadaY(jogada))){
            tabuleiro = MarcaPosicaoTabuleiro(tabuleiro, jogador.id, ObtemJogadaX(jogada), ObtemJogadaY(jogada));
        }
    }else{
        printf("Jogada invalida!\n");
    }

    if(VenceuJogador(jogador, tabuleiro)){
        printf("Jogador %d venceu!\n", jogador.id);
    }

    return tabuleiro;
}

int VenceuJogador(tJogador jogador, tTabuleiro tabuleiro){
    int peca = PECA_1;

    if(jogador.id == ID_JOGADOR_2){
        peca = PECA_2;
    }

    for (int i = 0; i < TAM_TABULEIRO; i++)
    {
        if (EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 0, i, peca) 
        && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 1, i, peca) 
        && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 2, i, peca))
        {
            return 1;
        }

        if (EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, i, 0, peca) 
        && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, i, 1, peca) 
        && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, i, 2, peca))
        {
            return 1;
        }
    }

    if (EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 0, 0, peca) 
    && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 1, 1, peca) 
    && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 2, 2, peca))
    {
        return 1;
    }
    else if (EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 2, 0, peca) 
    && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 1, 1, peca) 
    && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 0, 2, peca))
    {
        return 1;
    }

    return 0;
}