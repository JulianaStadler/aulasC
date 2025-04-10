/*
Criar função que multiplique dois valores diferentes.
*/
#include <stdio.h>
float multiplicacao(float num1, float num2){
	return num1 * num2;
}

int main(){
	float num1, num2;
	printf("Digite um número: ");
	scanf("%f", &num1);
	printf("Digite um segundo número: ");
	scanf("%f", &num2);
	
	printf("O resultado da multiplicacao é %.2f", multiplicacao(num1, num2));
	return 0;
}

