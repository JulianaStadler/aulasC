/*
4 - Faça uma função recursiva em Linguagem C chamada imprimirSequencia que receba um
número inteiro positivo n e imprima a seguinte sequência de forma recursiva:
• Comece com n.
• Se n for par, divida por 2.
• Se n for ímpar, multiplique por 3 e adicione 1.
• Continue este processo até que o número alcance o valor 1.
• A função deve imprimir cada número da sequência em uma linha separada.
Por exemplo imprimirSequencia(10)
Resultado:
10 5 16 8 4 2 1
*/
#include <stdio.h>

void imprimirSequencia(int num){
	printf("%d ", num);
	
	if(num == 1){
		return;
	}
	else{
		if(num %2 == 0){
			imprimirSequencia(num / 2);
		} else {
			imprimirSequencia(num * 3 + 1);
		}
	}
	
}

int main(){
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	
	printf("RESULTADO:");
	imprimirSequencia(num);
	
	return 0;
}