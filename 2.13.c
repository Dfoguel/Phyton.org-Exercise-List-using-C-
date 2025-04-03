#include <stdio.h>

int main() {
    int dia;
    const char *dias[] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
    printf ("Digite um numero de 1 a 7: ");
    scanf("%d", &dia); 

    if (dia >> 1 && dia <= 7) {
         printf("Dia: %s\n", dias[dia -1]);
    } else {
        printf("Numero invalido!");
    }

    return 0;
}