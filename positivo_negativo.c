#include <stdio.h>

int main(void) {
    float numero;

    printf("Digite um numero: ");
    if (scanf("%f", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (numero > 0) {
        printf("O numero e positivo.\n");
    } else if (numero < 0) {
        printf("O numero e negativo.\n");
    } else {
        printf("O numero e zero.\n");
    }

    return 0;
}
