#include <stdio.h>

int main(){
    int n;
    char expressao[1001];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        
        scanf("%s", expressao);

        int cout = 0;
        int diamantes = 0;

        for(int i = 0; expressao[i] != '\0'; i++){
            if(expressao[i] == '<'){
                cout++;
            }
            else if(expressao[i] == '>'){
                if(cout > 0){
                    diamantes++;
                    cout--;
                }
            }
        }
        printf("%d\n", diamantes);
    }

    return 0;
}