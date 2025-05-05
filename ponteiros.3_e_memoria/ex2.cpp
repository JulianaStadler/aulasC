/*
2) Manipulando o Valor Através do Ponteiro.
Declare uma variável inteira chamada numero e inicialize-a com o valor 10. 
Declare um ponteiro para inteiro chamado ptr. 
Faça com que o ponteiro ptr aponte para o endereço de memória da variável numero. 
Utilize o ponteiro ptr para modificar o valor da variável numero para 25. 
Imprima o valor da variável numero antes e depois da modificação através do ponteiro para verificar o resultado
*/
#include <stdio.h>

int main(){
	int *prt, numero = 10;
	prt = &numero;
	
	printf("Antes: numero= %d\n", *prt);
	*prt = 25;
	printf("Depois: numero= %d\n", *prt);
	
	return 0;
}
