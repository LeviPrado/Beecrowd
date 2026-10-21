#include <stdio.h>

int main(){

    int cod;
    int alc = 0, gas = 0, dis = 0;

    while(1){
        scanf("%d", &cod);

        if(cod == 4){
            break;
        }else if(cod == 1){
            alc++;
        }else if(cod == 2){
            gas++;
        }else if(cod == 3){
            dis++;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", dis); 
    
    return 0;
}