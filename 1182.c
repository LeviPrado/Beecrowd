#include <stdio.h>

int main(){

    double M[12][12];
    double soma = 0;
    int N;
    scanf("%d", &N);

    char C;
    scanf(" %c", &C);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(int i = 0; i < 12; i++){
        soma += M[i][N];
    }

    if(C == 'S'){
        printf("%.1lf\n", soma);
    } else if(C == 'M'){
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}