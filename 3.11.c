#include <stdio.h>

int main() {
    int num1, num2, i;
    int soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o primeiro numero: ");
    scanf("%d", &num2);

    if(num1<num2){
        int menor = num1;
        num1 = num2;
        num2 = menor;
    }
    
    for (i = num2 + 1; i < num1; i++) {
        soma += i;
    }

    printf("A soma e igual a: %d", soma);

    return 0;
}