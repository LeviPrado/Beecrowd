#include <stdio.h>

int main(){

    unsigned long long int N, num[10];

    scanf("%llu", &N);

    for(int i = 0; i < 10; i++){
        num[i] = N;
        N *= 2;
    }

    for(int i = 0; i < 10; i++){
        printf("N[%d] = %llu\n", i, num[i]);
    }

    return 0;
}