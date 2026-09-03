#include <stdio.h>

int main(void) {
    int idade, anosEmpresa;

    printf("Digite a idade do funcionario: ");
    if (scanf("%d", &idade) != 1 || idade < 0) {
        printf("Idade invalida.\n");
        return 1;
    }

    printf("Digite o tempo de empresa em anos: ");
    if (scanf("%d", &anosEmpresa) != 1 || anosEmpresa < 0) {
        printf("Tempo de empresa invalido.\n");
        return 1;
    }

    if (idade >= 18 && anosEmpresa >= 1) {
        printf("Acesso autorizado.\n");
    } else {
        printf("Acesso nao autorizado.\n");
    }

    return 0;
}
