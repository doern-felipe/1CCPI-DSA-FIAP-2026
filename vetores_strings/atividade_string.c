#include<stdio.h>
#include<string.h>

int main(){
    char nome[50];
    char senha[50];

    printf("=== Autenticacao de Usuario ===\n");
    printf("Nome:  ");
    scanf("%49s", nome);
    printf("Senha: ");
    scanf("%49s", senha);

    if (strcmp(nome, "admin") == 0 && strcmp(senha, "1234") == 0) {
        printf("\nAcesso Liberado! Bem-vindo, %s!\n", nome);
    } else {
        printf("\nAcesso Negado! Credenciais invalidas.\n");
    }

    return 0;
}