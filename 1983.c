#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matricula;
    double nota;

    int matricula_maior = -1;
    double maior_nota = -1.0;

    for (int i = 0; i < n; i++) {
        scanf("%d %lf", &matricula, &nota);

        if (nota > maior_nota) {
            maior_nota = nota;
            matricula_maior = matricula;
        }
    }

    if (maior_nota >= 8.0) {
        printf("%d\n", matricula_maior);
    } else {
        printf("Minimum note not reached\n");
    }

    return 0;
}