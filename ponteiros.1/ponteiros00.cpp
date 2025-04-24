#include <stdio.h>

int main(){
	char nome[10];
	int codigo;
	
	FILE*lista;
	lista = fopen("convidados.txt", "w");
	printf("Digite o código do convidado: ");
	scanf("%d", &codigo);
	fflush(stdin);
	printf("Digite o nome do convidado: ");
	fgets(nome, sizeof(9), stdin);
	fprintf(lista, "| Código %d | Nome: %s |\n", codigo, nome);
	fclose(lista);
}