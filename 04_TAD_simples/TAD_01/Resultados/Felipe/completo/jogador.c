#include "jogador.h"

tJogador CriaJogador(int idJogador){
    tJogador jogador;

    jogador.id = idJogador;

    return jogador;
}

tTabuleiro JogaJogador(tJogador jogador, tTabuleiro tabuleiro){

}

int VenceuJogador(tJogador jogador, tTabuleiro tabuleiro){
    if(jogador.id == ID_JOGADOR_1){
        for(int i=0; i<TAM_TABULEIRO; i++){
            if(EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 0, i, tabuleiro.peca1) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 1, i, tabuleiro.peca1) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 2, i, tabuleiro.peca1)){
                return 1;
            }

            if(EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, i, 0, tabuleiro.peca1) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, i, 1, tabuleiro.peca1) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, i, 2, tabuleiro.peca1)){
                return 1;
            }
        }

        if(EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 0, 0, tabuleiro.peca1) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 1, 1, tabuleiro.peca1) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 2, 2, tabuleiro.peca1)){
            return 1;
        }
    }else{
        for(int i=0; i<TAM_TABULEIRO; i++){
            if(EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 0, i, tabuleiro.peca2) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 1, i, tabuleiro.peca2) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 2, i, tabuleiro.peca2)){
                return 1;
            }

            if(EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, i, 0, tabuleiro.peca2) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, i, 1, tabuleiro.peca2) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, i, 2, tabuleiro.peca2)){
                return 1;
            }
        }

        if(EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 0, 0, tabuleiro.peca2) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 1, 1, tabuleiro.peca2) && EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, 2, 2, tabuleiro.peca2)){
            return 1;
        }
    }

    return 0;
}