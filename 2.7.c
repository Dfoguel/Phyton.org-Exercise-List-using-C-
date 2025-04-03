#include <stdio.h>

int main(){
    float num1, num2, num3, maior, menor;
    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    maior = num1;

    if (num2 > maior){
        maior = num2;
    }
    if (num3 > maior){
        maior = num3;
    }
    
    printf("O maior numero e o %.2f\n", maior);

    menor = num1;

    if (num2 < menor){
        menor = num2;
    }
    if (num3 < menor){
        menor = num3;
    }

    printf("O menor numero e o %.2f", menor);

    return 0;
}