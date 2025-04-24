//1. Com ponteiros some três valores e apresente um resultado.
#include <stdio.h>

int main(){
	float n1, n2, n3;
	FILE*arquivo_soma;
	arquivo_soma = fopen("arq_soma.txt", "a");
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	printf("Digite o terceiro valor: ");
	scanf("%f", &n3);
	printf("\nAbra o arquivo para ver o resultado :)");
	
	fprintf(arquivo_soma, "------------ SOMA ------------\n%.2f + %.2f + %.2f = %.2f\n\n", n1, n2, n3, n1 + n2 + n3);
	fclose(arquivo_soma);
	
	return 0;
}