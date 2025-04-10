/*
Criar função que faça a soma de 3 valores.
*/
#include <stdio.h>
float soma(){
	float num, soma=0;
	
	for (int i = 0; i < 3; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%f", &num);
		soma+=num;
	}
	
	return soma;
}

int main(){
	float result = soma();
	printf("O resultado é: %.2f", result);
	return 0;
}

