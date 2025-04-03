#include <stdio.h>

int  main(){
    float x;
    printf("Digite um numero: ");
    scanf("%f", &x);
    if (x>= 0){
        printf("%f e positivo", x);
    } else {
        printf("%f e negativo", x);
    }
    return 0;    
}