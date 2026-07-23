#include <stdio.h>

int main(){

    double M[12][12];
    double soma = 0.0;
    int contador = 0;
    char C;

    scanf(" %c", &C);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if(j > i && j > 11 - i){
                soma += M[i][j];
                contador++;
            }
        }
    }

    if(C == 'S'){
        printf("%.1lf\n", soma);
    } else if(C =='M'){
        printf("%.1lf\n", soma / contador);
    }

    return 0;
}