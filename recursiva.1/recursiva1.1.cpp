#include <stdio.h>
int fatorial(int num){
	//Caso base - Controlador do programa
	if (num == 1){
		return 1;
	}
	else{
		return num * fatorial(num - 1);
	}
}

int main(){
	int numero;
	
	printf("Numero: ");
	scanf("%d", &numero);
	
	printf("Numero fatoriado: %d", fatorial(numero));
	
	
	return 0;
}