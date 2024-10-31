#include <stdio.h>

int ContaOcorrencias(int* vet, int numElementos, int numeroProcurado);

int main(){
    int n, i, j, tam, alvo;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d", &alvo, &tam);
        int vet[tam];
        for(j=0; j<tam; j++){
            scanf("%d", &vet[j]);
        }
        printf("%d\n", ContaOcorrencias(vet, tam, alvo));
    }
}

int ContaOcorrencias(int* vet, int numElementos, int numeroProcurado){
    if(numElementos == 0){
        return 0;
    }

    if(vet[0] == numeroProcurado){
        return 1+ContaOcorrencias(vet+1, numElementos-1, numeroProcurado);
    }else{
        return ContaOcorrencias(vet+1, numElementos-1, numeroProcurado);
    }
}