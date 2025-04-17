//3 - Cálculo da soma de todos os valores até o número inserido pelo usuário.
#include <stdio.h>

int soma(int valor, int somaAtual, int i){
	if(valor == i){
		return somaAtual + i;
	} 
	else {
		return soma(valor, somaAtual + i, i + 1);
	}
	
}

int main(){
	int val;
	printf("Digite um valor: ");
	scanf("%d", &val);
	
	printf("soma = %d", soma(val, 0, 0));
	
	return 0;
}