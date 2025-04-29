/*
4) Encontrar a Média e Elementos Acima da Média. Escreva um programa em C que:
	1. Declare e inicialize um vetor de 5 números reais (float).
	2. Calcule a média de todos os elementos do vetor.
	3. Percorra o vetor novamente e exiba todos os elementos que são maiores do que a média calculada.
*/
#include <stdio.h>

int main(){
	int i, soma = 0, vetor[5] = {32, 10, 11, 2, -6};
	float media;
	
	for(i = 0; i < 5; i++){
		soma += vetor[i];
	}
	
	media = soma/5;
	
	printf("A média é %.2f.\nNumeros maiores que a média: ", media);
	for(i = 0; i < 5; i++){
		if(vetor[i] > media){
			printf("%d ", vetor[i]);
		}
	}
	
	return 0;
}
