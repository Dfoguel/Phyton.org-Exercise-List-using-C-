#include <stdio.h>

int main() {
    //Declaração de variáveis
    char gabarito[10];
    char resposta, repetir;
    int i = 0;
    int continuar = 1, continuar_aluno = 1, aluno = 0;
    int certas = 0, erradas = 0;
    int maior = -1, menor = 11, soma = 0;
    float media;

    //Definição do gabarito da prova
    printf("Bem vindo professor!\n");
    for (int j = 0; j < 10; j++) {
        printf("Digite o gabarito da questao %d: ", j+1);
        scanf(" %c", &gabarito[j]);
    }

    //Loop de tudo
    while(continuar) {
        aluno++;
        continuar_aluno = 1;
        certas = 0;
        printf("\nBem vindo aluno %d! Digite suas respostas a seguir:\n", aluno);
        
        //Loop das questões de uma prova
        for (i = 0; i < 10; i++) {
            printf("Resposta questao %d = ", i+1);
            scanf(" %c", &resposta);

            if (resposta == gabarito[i]) {
                certas++;
            }
        }

        //Determinação da maior e menor nota
        if (certas > maior) {
            maior = certas;
        }
        if (certas < menor) {
            menor = certas;
        }

        //Soma das notas
        soma += certas;

        //Verificação se há mais alunos para fazer a prova
        while(continuar_aluno) {
            printf("Deseja repetir para outro aluno? (S/N)\n");
            scanf(" %c", &repetir);
            switch(repetir) {
                case 'S':
                    i = 1;
                    continuar_aluno = 0;
                    break;

                case 'N':
                    continuar = 0;
                    continuar_aluno = 0;
                    break;
            
                default:
                    printf("Resposta desconhecida");
                    break;
            }
        }
    }

    //Calculo da media final de notas da turma
    media = (float)soma/aluno;

    printf("Maior nota = %d\n", maior);
    printf("Menor nota = %d\n", menor);
    printf("Total de alunos que utilizaram o sistema = %d alunos\n", aluno);
    printf("Media das notas da turma = %.2f\n", media);

    return 0;
}