#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1>num2 && num1>num3){
        printf("O %.1f (num1) e o maior", num1);
    } else if (num2>num1 && num2>num3){
        printf("O %.1f (num2) e o maior", num2);
    } else if (num3>num1 && num3>num1){
        printf("O %.1f (num3) e o maior", num3);
    } else {
        printf("Ha pelo menos dois numeros iguais");
    }

    return 0;
}