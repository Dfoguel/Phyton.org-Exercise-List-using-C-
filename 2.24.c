#include <stdio.h>

int main(){
    //Pede o número
    float num1, num2, result;
    char op;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    getchar();
    printf("Escolha uma operacao (+ , - , * , /): ");
    scanf("%c", &op);

    //Pede a operação
    if(op == '+') {
        result = num1 + num2;
    }
    if(op == '-') {
        result = num1 - num2;
    }
    if(op == '*') {
        result = num1 * num2;
    }
    if(op == '/') {
        result = num1 / num2;
    }


    printf("Resultado: %.2f\n", result);
    // Verifica as condições do exercicio   
    

    if (result < 0){
        printf("O resultado e negativo\n");
    } else {
        printf("O resultado e positivo\n");
    }

    if (result == (int) result) {
        if ((int)result % 2 == 0) {
            printf("O resultado e par\n");
        } else {
            printf("O resultado e impar\n");
        }
        printf("O resultado e inteiro\n");
    } else {
        printf("O resultado e decimal\n");
    }

    return 0;
}