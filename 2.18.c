#include <stdio.h>

int main () {
    int dia, mes, ano, bissexto;
    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    //Verificação se o ano é valido
    if (dia < 0 || mes < 0 || ano < 0){
        printf("Data invalida!");
        return 0;
    } else {

    }

    //Verificação de ano bissexto
    if (ano % 4 == 0){
        if (ano % 400 != 0) {
            bissexto = 0;
        } else {
            bissexto = 1;
        }
    } else {
        bissexto = 0;
    }
    
    //Verificação se a combinação dia/mes é válida
    if (mes <= 12){
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            if (dia > 31) {
                printf ("Data invalida!");
                return 0;
            } else {

            }
        }
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if (dia > 30){
                printf ("Data invalida!");
                return 0;
            } else {

            }
        }
        if (mes == 2){
            if (bissexto == 1){
                if (dia > 29){
                    printf("Data invalida!");
                    return 0;
                }
            }
        } else {

        }
        if (mes == 2){
            if (bissexto == 0){
                if (dia > 28){
                    printf("Data invalida!");
                    return 0;
                }
            }
        } else {

        }
    } else {
        printf("Data invalida!");
        return 0;
    }

    //Se chegou até aqui é válida a data
    printf ("Data valida :))");

    return 0;
}