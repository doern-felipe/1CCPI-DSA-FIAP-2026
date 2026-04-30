#include<stdio.h>

void exibir_vetor(int vetor[], int n){
    for(int i = 0; i < n; i++){
        int valor = vetor[i];
        printf("O indice do valor e: %d\nO valor do vetor e: %d\n\n",i ,valor);
    }
}

int main(){
    int tamanho; // tamanho do vetor
    int valores[5]; // inicialização qualquer do vetor

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    valores[tamanho]; // vetor a ser utilizado
    exibir_vetor(valores, tamanho);
    // Exibir os valores dentro do vetor
    // Antes
    /* for(int i = 0; i < 3; i++){
        int valor = valores[i];
        printf("O indice do valor e: %d\nO valor do vetor e: %d\n\n",i ,valor);
    } */
    // Depois com função
    
    /* exibir_vetor(valores);
    // Através da interação do usuário, armazenar os valor 1, 5, 4
    for(int i = 0; i < 3; i++){
        printf("Digite o valor que gostaria de armazenar no indice %d: ", i);
        scanf("%d", &valores[i]);
    }
    // Exibir os valores dentro do vetor
    exibir_vetor(valores); */

    return 0;