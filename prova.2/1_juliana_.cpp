/*
1) Faça um programa exibirá um menu com diversas opções numeradas. O usuário deverá
digitar o número correspondente à opção desejada. O programa utilizará um switch para
executar a ação associada à opção escolhida. O laço do...while garantirá que o menu seja
exibido repetidamente e que o programa continue executando até que o usuário escolha a
opção de saída.
Menu de Opções:
1. Exibir uma Mensagem de Saudação
2. Verificar se um Número é Par ou Ímpar
3. Converter Temperatura de Celsius para Fahrenheit //(F = C * 9/5 + 32)
4. Sair do Programa
*/

#include <stdio.h>
#include "1_juliana_.h"

int main(){
	int op, n;
	float temp;
	do{
		MENU();
		printf("Digite qual opção você deseja: ");
		scanf("%d", &op);
		
		if(op == 4){
			printf("Desligando...\nDesligado com sucesso!\n\n");
			break;
		}
		
		switch(op){
			case 1:
				MENSAGEM();
				break;
			case 2:
				printf("Digite um número: ");
				scanf("%d", &n);
				PAR_IMPAR(n);
				break;
			case 3:
				printf("Digite a temperatura em celcius: ");
				scanf("%f", &temp);
				printf("A temperatura %.2f°C em fahrenheint é %.2f°F\n\n", temp, CONVERTER_CELCIUS_FAHRENHEIT(temp));
				break;
			default:
				printf("Opção inválida!\nDigite novamente...\n\n");
		}
		
	} while(op != 4);
	
	return 0;
}