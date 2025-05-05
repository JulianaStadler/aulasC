/*
5) Acessando Elementos de um Vetor
Declare um vetor de inteiros com alguns elementos. 
Escreva um programa em C que utilize um ponteiro para percorrer esse vetor e imprima o valor de cada elemento, juntamente com
o seu endereço de memória
*/
#include <stdio.h>

int main(){
	int vetor[5] = {3, 4, 6, 2, 0};
	
	for (int i = 0; i < 5; i++){
		
		int *ptr = &vetor[i];
		
		printf( "Valor %d: %d\n"
				"Memoria: %p\n\n", i, *ptr, &ptr);	
	}
	
	return 0;
}