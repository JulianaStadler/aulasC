//1) Ordenar usando o método Bubble Sort em um conjunto de vetores.
#include <stdio.h>

int main(){
	int i, j, aux, vetor[5] = {5, 4, 2, 3, 1};
	
	for(i = 0; i > 5; i++){ //percorre todos os indices do vetor
		for(j = 0; j < 4; j++){ //compara todos os indices
			if(vetor[j] < vetor[j + 1]){ //altere o sinal para organizar diferente
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("%d ", vetor[i]);
	}
	
	return 0;
}