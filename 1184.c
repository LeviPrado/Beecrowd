#include <stdio.h>

int main(){

    double M[12][12];
    double soma = 0;
    int contador = 0;
    char C;
    scanf(" %c", &C); 

    // Lê a Matriz
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    // implemanta a logica principal do programa
    for(int i = 0; i < 12; i++){
        for(int j = i + 1; j < 12; j++){
            soma += M[j][i];
            contador++;
        }
    }

    // Faz a soma ou a media
    if(C == 'S'){
        printf("%.1lf\n", soma);
    } else if(C == 'M'){
        printf("%.1lf\n", soma / contador);
    }

    return 0;
}