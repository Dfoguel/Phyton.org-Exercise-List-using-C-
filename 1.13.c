#include <stdio.h>

int main(){
    float h, peso;
    char genero;
    printf ("Digite sua altura: ");
    scanf("%f", &h);
    printf("Digite M para mulher e H para homem: ");
    scanf(" %c", &genero);
    if (genero == 'H'){
        peso = (72.7 * h) - 58;
    } else if (genero == 'M'){
        peso = (62.1*h) - 44.7;
    } else {
        printf("Voce nao digitou M nem H!\n");
        return 1; //Retorna um código de erro e impede que o print do peso seja feito
    }
    printf ("Seu peso ideal seria %.2f quilos", peso);
    return 0;
}