#include <stdio.h>

int main() {
    int CDs;
    float valor;
    float soma = 0.00;
    float media;

    printf("Digite quantos CDs voce tem: ");
    scanf("%d", &CDs);

    for (int i = 1; i < CDs + 1; i++) {
        printf("Digite o valor do CD numero %d (R$): ", i);
        scanf("%f", &valor);

        soma += valor;
    }

    media = soma/CDs;

    printf("Media de valor por CD = R$%.2f", media);

    return 0;
}