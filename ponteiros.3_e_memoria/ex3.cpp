/*
3) Ponteiro para Ponteiro. 
Declare uma variável inteira chamada x e inicialize-a com o valor 40.
Declare um ponteiro para inteiro chamado ponteiro_simples e faça-o apontar para o endereço de x. 
Declare um ponteiro para ponteiro de inteiro chamado ponteiro_duplo e faça-o apontar para o endereço de ponteiro_simples. 
Utilize o ponteiro_duplo para acessar e imprimir o valor da variável x. 
Você precisará usar o operador de referenciação(*) duas vezes.
*/
#include <stdio.h>

int main(){
	int x = 40;
	int *ponteiro_simples = &x;
	int **ponteiro_duplo = &ponteiro_simples;
	
	printf("X: %d\n", **ponteiro_duplo);
	
	return 0;
}