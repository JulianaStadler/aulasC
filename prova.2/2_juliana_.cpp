/*
2) Criar um programa em C que receba os comprimentos dos três lados de um triângulo e
determine o tipo do triângulo com base nesses comprimentos, utilizando a estrutura if... else if... else.
Descrição:
O programa solicitará ao usuário que digite os comprimentos dos três lados de um triângulo.
Em seguida, utilizando uma série de condições if... else if... else, o programa classificará o
triângulo como:
• Equilátero: Se todos os três lados forem iguais.
• Isósceles: Se exatamente dois lados forem iguais.
• Escaleno: Se todos os três lados forem diferentes.
• Verificar se o triângulo é retângulo: (usando o teorema de Pitágoras: a2 + b2 = c2).
• Considerar a possibilidade de entradas inválidas (por exemplo, lados com comprimento negativo ou zero).
• Inválido: Se as medidas fornecidas não puderem formar um triângulo (a soma de dois lados deve ser 
maior que o terceiro lado).
*/
#include <stdio.h>
#include "2_juliana_.h"

int main(){
	int op;
	float lado1, lado2, lado3;
	do{
		op = MENU();
		
		
		
		if(op == 2){
			printf("Desligando programa...\nDesligado com sucesso!!");
		}
		else if(op == 1){
			printf("Digite o valor do lado 1: ");
			scanf("%f", &lado1);
			printf("Digite o valor do lado 2: ");
			scanf("%f", &lado2);
			printf("Digite o valor do lado 3: ");
			scanf("%f", &lado3);
			
			if(VERIFICAR_LADOS(lado1) && VERIFICAR_LADOS(lado2) && VERIFICAR_LADOS(lado3)){
				VERIFICAR_TRIANGULO(lado1, lado2, lado3);
			}else{
				printf("Valores do lado inválidos!\n\n");
			}
		}
		else{
			printf("Opção inválida!\nDigite novamente...\n\n");
		}
		
	}while(op != 2);
	
	return 0;
}