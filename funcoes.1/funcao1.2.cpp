/*
Criar função que calcule o quadrado.
*/
#include <stdio.h>
float quadrado(float num1){
	return num1 * num1;
}

int main(){
	float num1, num2;
	printf("Digite um número: ");
	scanf("%f", &num1);
	
	printf("O resultado do quadrado é %.2f", quadrado(num1));
	return 0;
}

