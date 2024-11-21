#include "tabuleiro.h"
#include <stdio.h>

tTabuleiro CriaTabuleiro(){
    tTabuleiro tabuleiro;

    tabuleiro.peca1 = 'X';
    tabuleiro.peca2 = '0';
    tabuleiro.pecaVazio = '-';

    for(int i=0; i<TAM_TABULEIRO; i++){
        for(int j=0; j<TAM_TABULEIRO; j++){
            tabuleiro.posicoes[i][j] = tabuleiro.pecaVazio;
        }
    }

    return tabuleiro;
}

tTabuleiro MarcaPosicaoTabuleiro(tTabuleiro tabuleiro, int peca, int x, int y){

    if(peca == PECA_1){
        tabuleiro.posicoes[y][x] = tabuleiro.peca1;
    }else{
        tabuleiro.posicoes[y][x] = tabuleiro.peca2;
    }

    return tabuleiro;
}

int TemPosicaoLivreTabuleiro(tTabuleiro tabuleiro){

    for(int i=0; i<TAM_TABULEIRO; i++){
        for(int j=0; j<TAM_TABULEIRO; j++){
            if(tabuleiro.posicoes[i][j] == tabuleiro.pecaVazio){
                return 1;
            }
        }
    }

    return 0;
}

int EstaMarcadaPosicaoPecaTabuleiro(tTabuleiro tabuleiro, int x, int y, int peca){
    
    if(peca == PECA_1){
        if(tabuleiro.posicoes[y][x] == tabuleiro.peca1){
            return 1;
        } 
    }else{
        if(tabuleiro.posicoes[y][x] == tabuleiro.peca2){
            return 1;
        } 
    }

    return 0;
}

int EstaLivrePosicaoTabuleiro(tTabuleiro tabuleiro, int x, int y){
    if(tabuleiro.posicoes[y][x] == tabuleiro.pecaVazio){
        return 1;
    } 
    printf("OCUPADA!\n");
    return 0;
}

int EhPosicaoValidaTabuleiro(int x, int y){
    if(x < TAM_TABULEIRO && x >= 0 && y < TAM_TABULEIRO && y >= 0){
        return 1;
    }
    printf("Nao eh valida!\n");
    return 0;
}

void ImprimeTabuleiro(tTabuleiro tabuleiro){
    for(int i=0; i<TAM_TABULEIRO; i++){
        printf("\t");
        for(int j=0; j<TAM_TABULEIRO; j++){
            printf("%c", tabuleiro.posicoes[i][j]);
        }
        printf("\n");
    }
}