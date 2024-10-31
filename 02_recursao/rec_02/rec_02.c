#include <stdio.h>

int SomaElementosPares(int* vet, int numElementos);

int main(){
    int n, i, j, tam;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &tam);
        int vet[tam];
        for(j=0; j<tam; j++){
            scanf("%d", &vet[j]);
        }
        printf("%d\n", SomaElementosPares(vet, tam));
    }
}

int SomaElementosPares(int* vet, int numElementos){
    if(numElementos == 0){
        return 0;
    }

    if(vet[0]%2 == 0){
        return vet[0]+SomaElementosPares(vet+1, numElementos-1);
    }else{
        return SomaElementosPares(vet+1, numElementos-1);
    }
}