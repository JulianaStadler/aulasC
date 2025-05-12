#include <stdio.h>
#include <windows.h> //usado para lidar com strings, sendo o strlen

//ao cadastrar o struct ele é um variável global e precisava ser gerada antes do main()
struct cadastro_pessoa {
	char nome[20];
	char email[20];
	int telefone;
	float valor;
} pessoa; //repare que existe o nome da stuct a ser chamada aqui


int main(){
	
	printf( "---------- CADASTRO DE MORADORES ----------\n"
			"Digite o nome de um morador: ");
	
	fgets(pessoa.nome, 20, stdin); //em struct nao precisa usar o sizeof mas se usar fica melhor
	pessoa.nome[strlen(pessoa.nome)-1] = '\0'; //nao deixa dar o erro de quebrar linha apos o valor digitado pelo user
	fflush(stdin);
	
	printf("Digite seu email: ");
	fgets(pessoa.nome, 20, stdin);
	pessoa.nome[strlen(pessoa.nome)-1] = '\0';
	
	printf("Digite seu telefone: ");
	scanf("%d", &pessoa.telefone);
	
	printf("Digite o valor da contribuição: ");
	scanf("%f", &pessoa.valor);
	
	
	printf( "\nNome: %s\n"
			"Email: %s\n"
			"Telefone: %d\n"
			"Valor de contribuição: %.2f\n",
			pessoa.nome, pessoa.email, pessoa.telefone, pessoa.valor
	);
	
	
	
	return 0;
}