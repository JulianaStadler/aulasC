/*
3) O programa solicitará ao usuário que digite um número inteiro positivo, que representará o
tamanho do padrão a ser desenhado. Em seguida, o programa utilizará um ou mais laços for
aninhado para imprimir caracteres (como asteriscos * ou outros símbolos) de forma a
formar os seguintes padrões (considere o tamanho 5, digitado pelo usuário):
Padrão 1: Triângulo Retângulo
*
**
***
****
*****
Padrão 2: Triângulo Retângulo Invertido
*****
****
***
**
*
Padrão 3: Pirâmide (Opcional... Ponto Extra!!!)
*
***
*****
*******
*********

*/
#include <stdio.h>
#include "3_juliana_.h"

int main(){
	int op, tamanho;
	do{
		op = MENU();
		if(op == 0){
			printf("Desligando programa...\nDesligado com sucesso!!");
		}
		switch(op){
			case 1:
				printf("Digite o tamanho: ");
				scanf("%d", &tamanho);
				
				TRIANGULO(tamanho);
				break;
				
			case 2:
				printf("Digite o tamanho: ");
				scanf("%d", &tamanho);
				
				TRIANGULO_INVERTIDO(tamanho);
				break;
			case 3:
				printf("Digite o tamanho da base: ");
				scanf("%d", &tamanho);
				
				PIRAMIDE(tamanho);
				break;
			default:
				printf("Opção inválida!\nDigite novamente...\n\n");
		}
		
		
	}while(op != 0);
	
	return 0;
}
