#include<stdio.h>
#include<string.h>
int main(){

    char nome[20]; //= {'F','E','L','I','P','E','\0','\n'};
    printf("Digite o seu nome completo: ");
    //scanf("%s", &nome);
    
    fgets(nome, 20, stdin);
    int tamanho_antes = strlen(nome);   // Tamanho inicial da string

    nome[strcspn(nome, "\n")] = '\0';
    
    int tamanho_depois = strlen(nome);  // Tamanho final apos strcspn da string

    printf("Tamanho do nome antes da funcao strcspn: %d\n", tamanho_antes);
    printf("Tamanho do nome depois da funcao strcspn: %d\n", tamanho_depois);
    printf("Ola, %s\n\n", nome);    

    // Utilizando a copia limitada da string
    char nome_2[5];
    
    strcpy(nome_2, nome);
    nome_2[strcspn(nome, "\n")] = '\0';
    printf("Como posso te ajudar, %s", nome_2);

    // Adicao de mesnsagem
    char msg[50] = "O que voce gostaria?";
    //printf("%s. %s", nome_2, msg);
    puts(nome_2);
    puts(msg);

    // Comparacao entre strings
    int comp_strcmp, comp_str;
    char nome_3[20];
    
    printf("Digite seu nome: ");
    scanf("%s", nome_3);    
    comp_strcmp = strcmp(nome_2, nome_3);
    comp_str = nome_2 == nome_3;
    printf("A comparacao e: %d e %d", comp_strcmp, comp_str);

    return 0;
}