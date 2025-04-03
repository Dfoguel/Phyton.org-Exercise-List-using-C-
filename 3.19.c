#include <stdio.h>

int main() {
    int n, num, maior, menor;
    int soma = 0;

    printf("Digite o numero de termos que tera seu conjunto: ");
    scanf("%d", &n);

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0 || num > 100) {
            printf ("O numero deve estar entre 0 e 1000");
            return 0;
        }

    maior = num;
    menor = num;
    soma = num;

    for (int i = 0; i < n-1; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num < 0 || num > 100) {
            printf ("O numero deve estar entre 0 e 1000");
            return 0;
        }

        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }

        soma += num;
    }

    printf("Maior numero = %d\n", maior);
    printf("Menor numero = %d\n", menor);
    printf("Soma = %d\n", soma);

    return 0;
}