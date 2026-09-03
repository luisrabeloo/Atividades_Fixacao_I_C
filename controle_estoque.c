#include <stdio.h>

int main(void) {
    int quantidade;

    printf("Digite a quantidade atual em estoque: ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    if (quantidade < 10) {
        printf("ATENCAO: estoque abaixo. Necessario realizar reposicao.\n");
    }

    return 0;
}
