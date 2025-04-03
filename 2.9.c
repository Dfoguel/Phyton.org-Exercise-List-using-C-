#include <stdio.h>

int main() {
    float num1, num2, num3;
    printf("Digite 3 preços: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 > num2){
        float temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3){
        float temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3){
        float temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("A ordem crescente dos números fica: %.2f < %.2f < %.2f\n", num1, num2, num3);
    return 0;
}