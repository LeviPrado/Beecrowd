#include <stdio.h>

int main(){

    int T;
    int escolha;
    int acerto = 0;

    scanf("%d", &T);

    for(int i = 0; i < 5; i++){
        scanf("%d", &escolha);

        acerto += (escolha == T);
    }

    printf("%d\n", acerto);

    return 0;
}