#include <stdio.h>

int main(){
	int i;
	float valor[5];
	FILE*novoarquivo;
	novoarquivo = fopen("cardapio.txt", "a");
	
	printf("==========MENU=========\n");
	fprintf(novoarquivo, "==================\n");
	fprintf(novoarquivo, "| Cód |   Valor  |\n");
	fprintf(novoarquivo, "------------------\n");
	
	for (i = 100; i < 105; i++){
		printf("Digite o valor do produto com código %d: R$", i);
		scanf("%f", &valor[i]);
		fprintf(novoarquivo, "| %d | R$%.2f |\n", i, valor[i]);
	}
	
	fprintf(novoarquivo, "==================\n");
	fclose(novoarquivo);
}