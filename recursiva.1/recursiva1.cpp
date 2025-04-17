#include <stdio.h>
int fatorial(int n){
	int res = 1;
	
	for(int i = n; i > 1; i--){
		res = res * i;
	}
	return res;
	
}

int main(){
	int numero, resultado;
	
	printf("Numero: ");
	scanf("%d", &numero);
	
	resultado = fatorial(numero);
	printf("Numero fatoriado: %d", resultado);
	
	
	return 0;
}