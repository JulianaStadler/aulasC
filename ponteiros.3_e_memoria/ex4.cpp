/*
4) Comparando Endereços de Memória
Declare duas variáveis inteiras, valor1 e valor2, e inicialize-as com valores diferentes (por exemplo, 5 e 15). 
Declare dois ponteiros para inteiro, ptr1 e ptr2. 
Faça com que ptr1 aponte para o endereço de valor1 e ptr2 aponte para o endereço de valor2. 
Compare os endereços de memória armazenados em ptr1 e ptr2. 
Imprima os endereços de memória de valor1 e valor2, 
juntamente com uma mensagem indicando se os endereços são iguais ou diferentes.
*/
#include <stdio.h>

int main(){
	int valor1 = 5, valor2 = 15;
	int *ptr1 = &valor1, *ptr2 = &valor2;
	
	printf( "Valor 1: %d\n"
			"Memoria: %p\n\n", *ptr1, &ptr1);
			
	printf( "Valor 2: %d\n"
			"Memoria: %p\n\n", *ptr2, &ptr2);
			
	if(&ptr1 == &ptr2){
		printf("Os endereços são iguais");
	} else{
		printf("Os endereços são diferentes");
	}
	
	
	
	return 0;
}