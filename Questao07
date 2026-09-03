#include <stdio.h>

int main(void) {
    float salario, percentualBonus, valorBonus, salarioFinal;

    printf("Digite o salario mensal (R$): ");
    if (scanf("%f", &salario) != 1 || salario < 0) {
        printf("Salario invalido.\n");
        return 1;
    }

    if (salario < 3000.00f) {
        percentualBonus = 10.0f;
    } else {
        percentualBonus = 5.0f;
    }

    valorBonus = salario * percentualBonus / 100.0f;
    salarioFinal = salario + valorBonus;

    printf("\n--- DEMONSTRATIVO SALARIAL ---\n");
    printf("Salario original: R$ %.2f\n", salario);
    printf("Percentual de bonus: %.0f%%\n", percentualBonus);
    printf("Valor do bonus: R$ %.2f\n", valorBonus);
    printf("Salario final: R$ %.2f\n", salarioFinal);

    return 0;
}
