#include <stdio.h>

int main(){

    int N;

    while(scanf("%d", &N) ==1 && N != 0){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                int cima = i;
                int esq = j;
                int baixo = N - 1 - i;
                int dir = N - 1 - j;

                int menor = cima;
                // comparacoes! 
                if (esq < menor){
                    menor = esq;
                }
                if(baixo < menor){
                    menor = baixo;
                }
                if(dir < menor){
                    menor = dir;
                }
                
                int valor = menor + 1;

                if(j > 0){
                    printf(" ");
                }
                printf("%3d", valor);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}