#include <stdio.h>

int soma(int a,int  b, int c) {
    return a + b + c;
}


int main() {
    int num1, num2, num3, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    resultado = soma(num1, num2, num3);
    printf("Soma = %d", resultado);

    return 0;
}