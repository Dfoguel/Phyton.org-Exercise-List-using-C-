#include <stdio.h>

int main(){
    float salario, aumento, novo_salario; 
    int percentual;
    printf("Digite o seu salario (R$): ");
    scanf("%f", &salario);    

    if (salario <= 280.00){
        novo_salario = salario * 1.20;
        percentual = 20;
    } else if (salario <= 700.00){
        novo_salario = salario * 1.15;
        percentual = 15;
    } else if (salario <= 1500.00){
        novo_salario = salario * 1.10;
        percentual = 10;
    } else {
        novo_salario = salario * 1.05;
        percentual = 5;
    }

    aumento = novo_salario - salario;

    printf("Salario atual = R$%.2f\n", salario);
    printf("O percentual de aumento foi de %d%%\n", percentual);
    printf("O aumento foi de R$%.2f\n", aumento);
    printf("O novo salario sera de R$%.2f\n", novo_salario);

    return 0;
}