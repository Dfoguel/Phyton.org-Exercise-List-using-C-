#include <stdio.h>

int main() {
    char nome [50];
    int idade;
    float salario;
    char sexo;
    char estadocivil;

    while(1) {

        printf("Digite seu nome: ");
        scanf("%s", nome);
        if (nome[3] != '\0') {
            printf("OK!\n");
            break;
        } else {
            printf("Invalido\n");
        }
    }

    while (1) {

    
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if (idade >= 0 && idade <= 150) {
            printf("OK!\n");
            break;
        } else {
            printf("Invalido\n");
        }
    }

    while(1) {
        printf("Digite seu salario: ");
        scanf("%f", &salario);
        getchar();
        if (salario > 0) {
            printf("OK!\n");
            break;
        } else {
            printf("Invalido\n");
        }
    }

    while(1) {        
        printf("Digite seu sexo (F/M): ");
        scanf("%c", &sexo);
        getchar();
        if (sexo == 'M' || sexo == 'F') {
            printf("OK!\n");
            break;
        } else {
            printf("Invalido\n");
        }
    }

    while(1) {
        printf("Digite seu estado civil (S/C/V/D): ");
        scanf("%c", &estadocivil);
        getchar();
        if (estadocivil == 'S' || estadocivil == 'C' || estadocivil == 'V' || estadocivil == 'D') {
            printf("OK!\n");
            break;
        } else {
            printf("Invalido\n");
        }
    }
    return 0;
}