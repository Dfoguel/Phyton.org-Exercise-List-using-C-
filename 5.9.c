#include <stdio.h>

int reverso (int num) {
    int reverso = 0;

    while (num != 0) {
        int digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }

    return reverso;
}

int main () {
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    int resultado = reverso(numero);
    printf("O reverso de %d e igual a %d\n", numero, resultado);

    return 0;
}