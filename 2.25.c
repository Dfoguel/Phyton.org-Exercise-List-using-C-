#include <stdio.h>

int main(){
    char ans1, ans2, ans3, ans4, ans5;
    int PosAns = 0;
    
    //Perguntas
    printf("1. Telefonou para a vitima? (S/N)\n");
    scanf("%c", &ans1);
    getchar();

    printf("2. Esteve no local do crime?(S/N)\n");
    scanf("%c", &ans2);
    getchar();

    printf("3. Mora perto da vitima?(S/N)\n");
    scanf("%c", &ans3);
    getchar();

    printf("4. Devia para a vitima?(S/N)\n");
    scanf("%c", &ans4);
    getchar();

    printf("5. Ja trabalhou com a vitima?(S/N)\n");
    scanf("%c", &ans5);
    getchar();

    //Contador de respostas positivas
    if (ans1 == 'S'){
        PosAns++;
    }
    if (ans2 == 'S'){
        PosAns++;
    }
    if (ans3 == 'S'){
        PosAns++;
    }
    if (ans4 == 'S'){
        PosAns++;
    }
    if (ans5 == 'S'){
        PosAns++;
    }

    //Definidor de posição
    if (PosAns == 5) {
        printf("Assassino");
    } else if (PosAns == 4 || PosAns == 3) {
        printf("Cumplice");
    } else if (PosAns == 2) {
        printf("Suspeito");
    } else {
        printf("Inocente");
    }

    return 0;
}