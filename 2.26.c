#include <stdio.h>

int main(){
    const float litroG = 2.50;
    const float litroA = 1.90;
    float preco, litros;
    char combustivel;

    printf("Digite o combustivel desejado (A ou G): ");
    scanf("%c", &combustivel);

    printf("Digite a quantidade de litros desejada: ");
    scanf("%f", &litros);

    if (combustivel =='A'){
        if (litros <=20){
            preco = litroA*litros*0.97;
        } else {
            preco = litroA*litros*0.95;
        }
    } else if (combustivel == 'G'){
        if (litros <= 20){
            preco = litroG*litros*0.96;
        } else {
            preco = litroG*litros*0.94;
        }        
    } else {
        printf("Tipo de combustivel invalido");
    }
    
    printf("Valor a ser pago = R$%.2f", preco);

    return 0;
}