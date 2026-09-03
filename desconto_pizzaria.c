#include <stdio.h>

int main(void) {
    float valorConta;
    float percentualDesconto;
    float valorDesconto;
    float valorFinal;

    printf("Digite o valor da conta (R$): ");
    if (scanf("%f", &valorConta) != 1 || valorConta < 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    if (valorConta >= 500.00f) {
        percentualDesconto = 15.0f;
    } else {
        percentualDesconto = 5.0f;
    }

    valorDesconto = valorConta * (percentualDesconto / 100.0f);
    valorFinal = valorConta - valorDesconto;

    printf("\n--- CUPOM FISCAL ---\n");
    printf("Valor original: R$ %.2f\n", valorConta);
    printf("Desconto (%.0f%%): R$ %.2f\n", percentualDesconto, valorDesconto);
    printf("Valor com desconto: R$ %.2f\n", valorFinal);

    return 0;
}
