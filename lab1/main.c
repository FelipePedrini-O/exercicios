#include "crivo.h"

int main(int argc, char** argv){
    if(argc < 1){
        printf("Erro de argumentos!");
        exit(1);
    }

    int N = atoi(argv[1]);
    tCrivo* cri = criaCrivo(N);
    executaCrivo(cri);
    liberaCrivo(cri);

    return 0;
}