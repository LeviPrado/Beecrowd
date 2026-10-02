#include <stdio.h>

int main(){

    char expressao[1001];

    while(scanf("%s", expressao) != EOF){
        int contador = 0;
        
        for(int i = 0; expressao[i] != '\0'; i++){
            if(expressao[i] == '('){
                contador++;
            }
            else if(expressao[i] == ')'){
                contador--;
            }
            if(contador < 0){
                break;
            }
        }
        if(contador == 0){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }
    return 0;
}