#include <stdio.h>

int  main(){
    float x, y;
    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    if (x>y){
        printf("%f e o maior numero", x);
    } else {
        printf("%f e o maior numero", y);
    }
    return 0;    
}