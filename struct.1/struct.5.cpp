/*
5. Criar um sistema para cadastrar n livros em uma pequena biblioteca. 
Cada livro terá informações como título, autor, ano de publicação, gênero e preço.
	• titulo (vetor de caracteres com tamanho suficiente para armazenar o título do livro).
	• autor (vetor de caracteres com tamanho suficiente para armazenar o nome do autor).
	• anoPublicacao (inteiro para o ano de publicação).
	• numeroPaginas (inteiro para número de páginas).
	• genero (vetor de caracteres com tamanho suficiente para armazenar o gênero do livro).
	• preco (float para valor do livro)

Menu:
	1 - Cadastrar novo livro
	2 - Listar livros cadastrados
	0 – Sair
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Biblioteca {
	char titulo [50];
	char autor [20];
	int anoPublicacao;
	int numeroPaginas;
	char genero[20];
	float preco;
};

int menu(){
	int op;
	printf( "-------------------------- MENU --------------------------\n"
			"1 - Cadastrar novo livro\n"
			"2 - Listar livros cadastrados\n"
			"0 - Sair\n"
			"----------------------------------------------------------\n"
			"Digite qual opção você deseja: ");
	scanf("%d", &op);
	printf("\n");
	return op;
}

int main(){
	int op, tam = 0;
	struct Biblioteca* biblioteca = NULL;
	
	do {
		op = menu();
		
		switch(op){
			case 0:
				printf("Desligando programa...\n");
				break;
			case 1: {
				biblioteca = (struct Biblioteca*)realloc(biblioteca, (tam + 1) * sizeof(struct Biblioteca));
		        fflush(stdin);
		        
				printf( "------------------ CADASTRAR NOVO LIVRO ------------------\n"
				
		       			"Digite titulo do livro: ");
		        fgets(biblioteca[tam].titulo, sizeof(biblioteca[tam].titulo), stdin);
		        biblioteca[tam].titulo[strcspn(biblioteca[tam].titulo, "\n")] = 0;
		        fflush(stdin);
		
		        printf("Digite o nome do autor: ");
		        fgets(biblioteca[tam].autor, sizeof(biblioteca[tam].autor), stdin);
		        biblioteca[tam].autor[strcspn(biblioteca[tam].autor, "\n")] = 0;
		        fflush(stdin);
		
		        printf("Digite o ano de publicação: ");
		        scanf("%d", &biblioteca[tam].anoPublicacao);
		        fflush(stdin);
		        
		        
		        printf("Digite a quantidade de páginas: ");
		        scanf("%d", &biblioteca[tam].numeroPaginas);
		        fflush(stdin);
		
		        printf("Digite o genero do livro: ");
		        fgets(biblioteca[tam].genero, sizeof(biblioteca[tam].genero), stdin);
		        biblioteca[tam].genero[strcspn(biblioteca[tam].genero, "\n")] = 0;
		        fflush(stdin);
		        
		        printf("Digite o preço: R$");
		        scanf("%f", &biblioteca[tam].preco);
		        
		        tam++;
		        
		        printf( "Livro cadastrado!\n"
						"----------------------------------------------------------\n\n");
				break;
			}
			case 2:
				printf( "---------------------- LISTAR LIVROS ---------------------\n");
				if(tam <= 0){
					printf("Nenhum livro cadastrado!\n");
				}else{
					for(int i = 0; i < tam; i++){
						printf( "Titulo: %s\n"
								"Autor: %s\n"
								"Ano de publicacao: %d\n"
								"Número de páginas: %d\n"
								"Genero %s\n"
								"Preço: %.2f\n"
								"==========================================================\n",
								biblioteca[i].titulo, biblioteca[i].autor, biblioteca[i].anoPublicacao,
								biblioteca[i].numeroPaginas, biblioteca[i].genero, biblioteca[i].preco
						);
					}
				}
		        printf( "----------------------------------------------------------\n\n");
				
				break;
			default:
				printf("Opção inválida...\nDigite novamente...\n\n");
		}
		
	} while(op != 0);
	
	free(biblioteca);
	printf("Programa desligado\n");
	return 0;
}
