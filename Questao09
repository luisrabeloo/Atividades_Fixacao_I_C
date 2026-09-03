#include <stdio.h>

int main(void) {
    float valorOriginal, percentualDesconto, valorDesconto, valorFinal;

    printf("Digite o valor total da compra (R$): ");
    if (scanf("%f", &valorOriginal) != 1 || valorOriginal < 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    if (valorOriginal >= 500.00f) {
        percentualDesconto = 15.0f;
    } else {
        percentualDesconto = 5.0f;
    }

    valorDesconto = valorOriginal * percentualDesconto / 100.0f;
    valorFinal = valorOriginal - valorDesconto;

    printf("\n--- RESUMO DA COMPRA ---\n");
    printf("Valor original: R$ %.2f\n", valorOriginal);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
