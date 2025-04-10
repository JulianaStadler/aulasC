/*
2.Criar uma função para verificar se um número é par ou ímpar.
*/
#include <stdio.h>
const char* parimpar(int num){
	if(num%2 == 0){
		return "Par";
	}else if(num%2 == 1){
		return "Impar";
	}
	
	return "Error";
}

int main(){
	int n1;
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("O resultado é: %s", parimpar(n1));
	return 0;
}
