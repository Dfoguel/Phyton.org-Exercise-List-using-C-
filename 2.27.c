#include <stdio.h>

int main(){
    float kiloSt;
    float kiloA;
    float price, kilos;
    char fruit;

    printf("Type the fruit you want (A or S): ");
    scanf("%c", &fruit);

    printf("Type how many kilos you want to buy: ");
    scanf("%f", &kilos);

    if (fruit == 'A'){
        if (kilos <= 5){
            kiloA = 1.80;
            price = kilos*kiloA;
        } else {
            kiloA = 1.50;
            if (kilos > 8){
                price = kilos*kiloA*0.90;
            } else {
                price = kilos*kiloA;
            }
        }
    } else if (fruit == 'S'){
        if (kilos <= 5){
            kiloSt = 2.50;
            price = kilos*kiloSt;
        } else {
            kiloSt = 2.20;
            if (kilos > 8){
                price = kilos*kiloSt*0.90;
            } else {
                price = kilos*kiloSt;
            }
        }
    } else {
        printf("Typed fruit is invalid");
        return 0;
    }

    printf("The price is R$%.2f", price);

    return 0;
}