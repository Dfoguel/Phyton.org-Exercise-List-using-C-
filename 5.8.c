#include <stdio.h>
#include <math.h>

int QuantDigitos(int n) {
    int i = 0;
    float casa = 1;
    if (n < 0) {
        n = n*(-1);
    }

    if (n == 0) {
        return 1;
    }

    while (casa >= 1) {
        casa = (n)/(pow(10, i));
        i++;
    }

    return i-1;
}

int main() {
    int n, digitos;
    printf("Digite um numero: ");
    scanf("%d", &n);

    digitos = QuantDigitos(n);
    printf("Digitos: %d", digitos);

    return 0;
}