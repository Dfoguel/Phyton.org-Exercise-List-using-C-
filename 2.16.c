#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if(a == 0) {
        printf("Equacao de primeiro grau, a = 0\n");
        return 0;
    }

    delta = pow(b,2)-(4*a*c);

    if (delta < 0) {
        printf("A equacao nao possui raizes reais\n");
    } else if (delta == 0) {
        x1 = (-b + sqrt(delta))/(2*a);
        printf("A equacao possui apenas uma raiz: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("A equacao possui duas raizes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}