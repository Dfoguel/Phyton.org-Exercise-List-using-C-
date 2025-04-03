#include <stdio.h>

int main(){
    float h, peso;
    printf ("Digite sua altura: ");
    scanf("%f", &h);
    peso = (72.7*h) - 58;
    printf ("Seu peso ideal seria %.2f quilos", peso);
    return 0;
}