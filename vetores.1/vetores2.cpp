/*
2) Escreva um programa em C que realize as seguintes operações:
	1. Declare um vetor de inteiros com capacidade para armazenar 5 elementos.
	2. Utilize um loop para solicitar ao usuário que digite 5 números inteiros e armazene cada número em uma posição do vetor.
	3. Utilize outro loop para percorrer o vetor e exibir cada elemento armazenado, juntamente com o seu índice (posição).

Exemplo de interacao com o usuario:
	Digite o valor para a posicao 0: 10
	Digite o valor para a posicao 1: 25
	Digite o valor para a posicao 2: 5
	Digite o valor para a posicao 3: 50
	Digite o valor para a posicao 4: 15

Exemplo de saída do programa:
	Elemento na posicao 0: 10
	Elemento na posicao 1: 25
	Elemento na posicao 2: 5
	Elemento na posicao 3: 50
	Elemento na posicao 4: 15
*/
#include <stdio.h>

int main(){
	int i, vetor[5];
	
	for(i = 0; i < 5; i++){
		printf("Digite o valor para a posicao  %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("Elemento na posicao %d: %d\n", i, vetor[i]);
	}
	
	return 0;
}