#include <stdio.h>

int paridade(int a) {
    if (a % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {

    int x, par[5], impar[5], p = 0, q = 0;

    for (int i = 0; i < 15; i++) {

        scanf("%d", &x);

        if (paridade(x)) {

            par[p] = x;
            p++;

            if (p == 5) {

                for (int i = 0; i < 5; i++) {
                    printf("par[%d] = %d\n", i, par[i]);
                }

                p = 0;
            }

        } else {

            impar[q] = x;
            q++;

            if (q == 5) {

                for (int i = 0; i < 5; i++) {
                    printf("impar[%d] = %d\n", i, impar[i]);
                }

                q = 0;
            }
        }
    }

    for (int i = 0; i < q; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < p; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}