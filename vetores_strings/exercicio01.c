#include<stdio.h>

void exibir_vetor(int vetor[], int n){
    for(int i = 0; i < n; i++){
        int valor = vetor[i];
        printf("O indice do valor e: %d\nO valor do vetor e: %d\n\n",i ,valor);
    }
}


int main(){
	int quantidade;
	printf("Digite a quantidade de notas que gostaria: ");
	scanf("%d", &quantidade);
	float notas[quantidade];
	float soma = 0;
	for(int i = 0; i < quantidade; i++){
		printf("Digite a nota %d: ", i + 1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	
	printf("A media do aluno e: %.2f\n", soma/quantidade);

    return 0;
}