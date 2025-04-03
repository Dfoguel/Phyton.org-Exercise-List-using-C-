#include <stdio.h>
#include <string.h>

int main() {
    char login [50];
    char senha [50];
    while(1) {
        printf("Digite o seu login: ");
        scanf("%s", login);
        printf("Digite sua senha: ");
        scanf("%s", senha);
        if (strcmp(login, senha) == 0) {
            printf("Sucesso!");
            break;
        } else {
            printf("O login e a senha devem ser iguais\n");
            printf("Tente novamente\n");
        }
    }

    return 0;
}