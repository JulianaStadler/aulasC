//6) Verificar se um determinado valor existe no vetor e em qual posição.
#include <stdio.h>

int main(){
	int i, procurado, vetor[5];
	
	for(i = 0; i < 5; i++){
		printf("Digite o valor para a posicao  %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nDigite qual número quer procurar: ");
	scanf("%d", &procurado);
	
	bool existe = false;
	for(i = 0; i < 5; i++){
		if(vetor[i] == procurado){
			existe = true;
			break;
		}
	}
	
	
	if(existe == true){
		printf("\nO número procurado %d esta na posicao %d", procurado, i);
	}else{
		printf("\nO número procurado %d não existe no vetor", procurado);
	}
	
	return 0;
}
