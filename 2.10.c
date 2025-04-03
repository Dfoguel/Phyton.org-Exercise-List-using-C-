#include <stdio.h>

int  main(){
    char turno;
    printf("Em qual turno voce estuda?\n");
    scanf("%c", &turno);

    if (turno == 'M'){
        printf("Bom dia!");
    } else if (turno == 'V'){
        printf("Boa Tarde!");
    } else if(turno == 'N'){
        printf("Boa Noite!");
    } else {
        printf("Valor invalido");
    }
    return 0;    
}