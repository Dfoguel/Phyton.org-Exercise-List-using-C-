#include <stdio.h>

int main(){
    float preco1, preco2, preco3, menor;
    printf("Digite 3 precos: ");
    scanf("%f %f %f", &preco1, &preco2, &preco3);

    menor = preco1;

    if (preco2 < menor){
        menor = preco2;
    }
    if (preco3 < menor){
        menor = preco3;
    }
    
    printf("O menor valor e o R$%.2f\n", menor);
    return 0;
}