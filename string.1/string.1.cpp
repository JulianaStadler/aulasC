/*
1. Comparador de Strings Personalizado
Escreva um programa em C que faça o seguinte: Peça ao usuário para digitar duas strings diferentes. E imprima o seguinte resultado:
"A primeira string é igual à segunda string." ou
"A primeira string vem antes da segunda string alfabeticamente." ou 
"A primeira string vem depois da segunda string alfabeticamente."
*/
#include <stdio.h>
#include <string.h>

int main(){
	char strin1[20], strin2[20];
	int resultado;
	
	// strcmp(string1, string2) //compara as strings e diz qual vem antes da outra com ordem alfabetica
	// resultado = 0 -> as strings sao iguais
	// resultado = -1 -> a string1 vem antes da string2
	// resultado = 1 -> a string2 vem antes da string1
	
	printf("Digite a primeira string: ");
	fgets(strin1, sizeof(strin1), stdin);
	fflush(stdin);
	printf("Digite a segunda string: ");
	fgets(strin2, sizeof(strin2), stdin);
	
	resultado = strcmp(strin1, strin2);
	if(resultado == 0){
		printf("A primeira string é igual à segunda string.\n");
	}
	else if(resultado < 0){
		printf("A primeira string vem antes da segunda string alfabeticamente.\n");
	}else{
		printf("A primeira string vem depois da segunda string alfabeticamente.\n");
	}
	
	
	
	return 0;
}
