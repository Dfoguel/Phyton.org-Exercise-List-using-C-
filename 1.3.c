#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite dois numeros\n");
    scanf("%d %d", &num1, &num2);
    int soma = num1 + num2;
    printf ("Resultado da soma: %d", soma);
    return 0;
}