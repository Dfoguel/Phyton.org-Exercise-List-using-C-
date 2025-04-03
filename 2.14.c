#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char conceito;

    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1+nota2)/2;
    printf("Nota 1 = %.2f\n", nota1);
    printf("Nota 2 = %.2f\n", nota2);
    printf("Media = %.2f\n", media);

    if (media < 0 || media > 10) {
        printf("Media menor que zero ou maior que dez! Digite outras notas...\n");
        return 0;
    } else if (media >= 9) {
        conceito = 'A';
        printf("APROVADO\n");
    } else if (media >=7.5) {
        conceito = 'B';
        printf("APROVADO\n");
    } else if (media >= 6) {
        conceito = 'C';
        printf("APROVADO\n");
    } else if (media >= 4) {
        conceito = 'D';
        printf("REPROVADO\n");
    } else {
        conceito = 'E';
        printf("REPROVADO\n");
    }

    printf("Conceito = %c", conceito);

    return 0;
}