#include <stdio.h>

int  main(){
    char sexo;
    printf("Digite a letra maiuscula: ");
    scanf("%c", &sexo);

    if (sexo == 'M'){
        printf("Masculino");
    } else if (sexo == 'F'){
        printf("Feminino");
    } else {
        printf("Sexo invalido");
    }
    return 0;    
}