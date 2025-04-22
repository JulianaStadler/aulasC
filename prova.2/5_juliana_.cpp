/*
5) Criar um programa em C que imprima uma sequência de números inteiros de 1 até um
número inteiro positivo fornecido pelo usuário, utilizando uma função recursiva.
*/
#include <stdio.h>
#include "5_juliana_.h"

int main(){
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num > 0){
		RECURSIVA(num, 1);
	} else {
		printf("Valor negativo... Valor positivo nescessario.");
	}
		
	
	return 0;
}