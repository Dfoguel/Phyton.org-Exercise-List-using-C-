#include <stdio.h>

int main() {
    int turmas, alunos;
    float media;

    printf ("Digite o numero de turmas da serie: ");
    scanf("%d", &turmas);
    printf("Digite o numero de alunos total da serie: ");
    scanf("%d", &alunos);

    media = (float) alunos/turmas;

    if (media != (int)media) {
        media = (int)media + 1;
    }

    if (media > 40) {
        printf("Numero de alunos pro turma maior do que 40!!");
    } else {
        printf("Media de alunos por turma: %.2f", media);
    }

    return 0;
}