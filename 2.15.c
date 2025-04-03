#include <stdio.h>

int main(){
    float lado1, lado2, lado3;
    printf("Digite tres valores de lados de um triangulo:\n");
    printf("Lado 1 = ");
    scanf("%f", &lado1);
    printf("Lado 2 = ");
    scanf("%f", &lado2);
    printf("Lado 3 = ");
    scanf("%f", &lado3);

    if ((lado1 + lado2) <= lado3 || (lado1 + lado3) <= lado2 || (lado2 + lado3) <= lado1) {
        printf("Esses valores nao podem formar um triangulo\n");
        return 0;
    }

    if (lado1 == lado2 && lado1 == lado3) {
        printf("Esses lados formam um triangulo equilatero\n");
    }

    if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
        printf("Esses lados formam um triangulo escaleno\n");
    }

    if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Esses lados formam um triangulo isosceles\n");
    }
    return 0;
}