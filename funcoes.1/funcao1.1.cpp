/*
Criar uma função que faça a soma de dois números.
*/
#include <stdio.h>
float soma(float num1, float num2){
	return num1 + num2;
}

int main(){
	float num1, num2;
	printf("Digite um número: ");
	scanf("%f", &num1);
	printf("Digite um segundo número: ");
	scanf("%f", &num2);
	
	printf("O resultado da soma é %.2f", soma(num1, num2));
	return 0;
}