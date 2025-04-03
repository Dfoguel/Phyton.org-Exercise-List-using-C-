#include <stdio.h>

int main() {
    char nome[50];
    float saltos[5];
    float melhor = -0.1, pior = 99.9;
    float soma = 0.0;
    float media;

    printf("Atleta: ");
    scanf("%[^\n]s", nome);
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("Salto %d: ", i+1);
        scanf("%f", &saltos[i]);
        if (saltos[i] > melhor) {
            melhor = saltos[i];
        }
        if (saltos[i] < pior) {
            pior = saltos[i];
        }

        soma += saltos[i];
    }
    
    soma = soma - melhor - pior;
    media = soma/3;

    printf("\nMelhor salto: %.2f m\n", melhor);
    printf("Pior salto: %.2f m\n", pior);
    printf("Media dos demais saltos: %.2f m\n\n", media);
    printf("Resultado final:\n");
    printf("%s: %.2f m\n", nome, media);

    return 0;
}