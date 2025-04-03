#include <stdio.h>

int main(){
    float C, F;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &C);

    F = (9*C/5) + 32;
    printf("Conversao para Farenheit: %.2f graus Farenheit", F);
    return 0;
}