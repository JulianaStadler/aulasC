//1 - Faça um programa que exiba a tabuada de um valor inserido por um usuário.

#include <stdio.h>

void tabuada(float num, int comeco = 1, int qtdFinal = 10, int qtdAtual = 1){
	if(qtdAtual == 1){
		qtdAtual = comeco;
		qtdFinal = comeco + qtdFinal;
		printf("------------------------------------\n");
		printf("         TABUADA DO %.2f\n", num);
		printf(" começando em %d e terminando em %d\n", comeco, qtdFinal);
		printf("------------------------------------\n");
	}
	
	if(qtdAtual == qtdFinal){
		printf("        %d * %.2f = %.2f\n", qtdAtual, num, qtdAtual * num);
		printf("------------------------------------\n");
	}
	else{
		printf("        %d * %.2f = %.2f\n", qtdAtual, num, qtdAtual * num);
		tabuada(num, comeco, qtdFinal, (qtdAtual + 1));
	}
	
}

int main(){
	int qtdFinal, comeco;
	float numero;
	
	printf("Digite um número:");
	scanf("%f", &numero);
	printf("Digite a quantidade de repetições:");
	scanf("%d", &qtdFinal);
	printf("Digite a partir de qual número a tabuada vai começar (normalmente 1):");
	scanf("%d", &comeco);
	
	tabuada(numero, comeco, qtdFinal);
	
	return 0;
}