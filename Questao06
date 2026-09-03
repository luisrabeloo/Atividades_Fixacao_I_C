#include <stdio.h>

int main(void) {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    if (scanf("%f", &nota1) != 1 || nota1 < 0 || nota1 > 10) {
        printf("Nota invalida.\n");
        return 1;
    }

    printf("Digite a segunda nota: ");
    if (scanf("%f", &nota2) != 1 || nota2 < 0 || nota2 > 10) {
        printf("Nota invalida.\n");
        return 1;
    }

    media = (nota1 + nota2) / 2.0f;

    printf("\n--- SITUACAO ACADEMICA ---\n");
    printf("Primeira nota: %.1f\n", nota1);
    printf("Segunda nota: %.1f\n", nota2);
    printf("Media: %.1f\n", media);

    if (media >= 7.0f) {
        printf("Situacao: Aprovado.\n");
    } else {
        printf("Situacao: Reprovado.\n");
    }

    return 0;
}
