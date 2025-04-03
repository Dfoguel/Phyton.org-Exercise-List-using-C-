#include <stdio.h>

int main(){
    float C, F;
    printf("Digite uma temperatura em Farenheit: ");
    scanf("%f", &F);

    C = 5 * ((F-32)/9);
    printf("Conversao para Celsius: %.2f graus celsius", C);
    return 0;
}