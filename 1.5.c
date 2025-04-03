#include <stdio.h>

int main(){
    float metro, cent;
    printf("Digite um valor em metros: ");
    scanf("%f", &metro);

    cent = metro*100;
    printf("Transformado para centimetros fica: %.2f metros", cent);
    return 0;
}