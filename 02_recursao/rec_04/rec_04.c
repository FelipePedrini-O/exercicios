#include <stdio.h>
#include <string.h>

int palindromo(char *string, int tamanho){
    if(tamanho%2==0){
        return 1;
    }
    return 0;
}

int main(){
    char* palavra;

    while(scanf("%s[^\n]", palavra)){
        if(palindromo(palavra, strlen(palavra))){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    }
}