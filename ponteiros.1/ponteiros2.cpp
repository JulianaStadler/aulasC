//2.Escreva um programa que receba o ano atual, ano de nascimento de uma pessoa e mostre a sua idade.
#include <stdio.h>
int main(){
	int ano_atual, ano_nascimento, idade;
	FILE *arquivo_idade;
	arquivo_idade = fopen("arq_idade.txt", "a");
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	
	fprintf(arquivo_idade, 
			"-----------IDADE----------\n"
			"Ano atual: %d\n"
			"Ano de nascimento: %d\n"
			"Idade: %d\n\n", 
			ano_atual, ano_nascimento, ano_atual - ano_nascimento);
			
	printf("Abra o arquivo para visualizar o resultado.");
			
	fclose(arquivo_idade);
}