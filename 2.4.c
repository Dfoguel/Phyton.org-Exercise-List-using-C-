#include <stdio.h>

int  main(){
    char letra;
    printf("Digite a letra maiuscula: ");
    scanf("%c", &letra);

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf("Vogal");
    } else{
        printf("Consoante");
    }
    return 0;    
}