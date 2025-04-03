#include <stdio.h>

int main(){
    float peso, excesso, multa;
    printf("Quantos quilos Joao trouxe?\n");
    scanf("%f", &peso);

    if (peso <= 50.00){
        printf("Joao esta dentro do regulamento\n");
    } else{
        excesso = peso - 50;
        multa = excesso * 4;
        printf("Joao esta %.2f acima do maximo permitido pelo regulamento\n", excesso);
        printf("A multa: %.2f reais", multa);
    }
    return 0;
}