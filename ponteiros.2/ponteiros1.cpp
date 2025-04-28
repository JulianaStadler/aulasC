/*
Livraria
Desenvolver um programa em linguagem C que permita o 
cadastro e a gestão de livros de uma livraria. O programa deverá utilizar
ponteiros (uso de vetores), arquivos de texto (.txt), um menu de opções
interativo e a estrutura de repetição do...while para controlar o fluxo do
programa. Os dados dos livros cadastrados devem ser armazenados em um vetor de
estruturas.

Estrutura
O programa deve apresentar um menu com as seguintes opções:
1.     Cadastrar Livro
2.     Listar Livros
3.     Sobre a livraria
4.     Sair

Cadastro de Livros:
  O programa deve permitir ao usuário cadastrar livros, solicitando as seguintes informações:
 
o   Título do livro
o   Categoria do livro
o   Nome do autor
o   Preço de capa
o   ISBN (código único do livro, string)
o   Quantidade em estoque


Listagem de Livros:
     
Listar todos os livros cadastrados.      
Para cada livro, devem ser exibidas todas as suas informações de forma organizada.
Se não houver livros cadastrados, o programa deve exibir uma mensagem informativa.

Sobre a livraria
Informações sobre a livraria: Quando surgiu, missão,
valores e endereço.
*/
#include <stdio.h>
#include <string.h>

int menu(){
	int op;
	printf( "|========================== LIVRARIA LIVRINHO AMIGUINHO ==========================|\n"
			"| 1 |     Cadastrar Livro                                                         |\n"
			"| 2 |     Listar Livros                                                           |\n"
			"| 3 |     Sobre a livraria                                                        |\n"
			"| 4 |     Sair                                                                    |\n"
			"|=================================================================================|\n\n"
			"Digite qual opção você deseja: "
	);
	scanf("%d", &op);
	
	return op;		
}

void cadastro_livro(){
	char nome_livro[61], categoria_livro[16], nome_autor[21], isbn[7];
	int quantidade_estoque;
	float preco;
	
	FILE *arq_livraria = fopen("arq_livraria.txt", "a");
	
	
	printf("================================ CADASTRO LIVRO ==================================\n");
	fflush(stdin);
	printf("Titulo (max. 60 caracteres): ");
	fgets(nome_livro, sizeof(nome_livro), stdin);
	nome_livro[strlen(nome_livro)-1] = '\0';
	
	fflush(stdin);
	printf("Categoria (max. 15 caracteres): ");
	fgets(categoria_livro, sizeof(categoria_livro), stdin);
	categoria_livro[strlen(categoria_livro)-1] = '\0';
	
	fflush(stdin);
	printf("Nome do autor (max. 20 caracteres): ");
	fgets(nome_autor, sizeof(nome_autor), stdin);
	nome_autor[strlen(nome_autor)-1] = '\0';
	
	printf("Preço: R$");
	scanf("%f", &preco);
	
	fflush(stdin);
	printf("ISBN (código único do livro - max. 6 caracteres): ");
	fgets(isbn, sizeof(isbn), stdin);
	isbn[strlen(isbn)-1] = '\0';
	
	printf("Quantidade em estoque: ");
	scanf("%d", &quantidade_estoque);
	
	
	fprintf(arq_livraria,
			"| %-6s | %-60s | %-15s | %-20s | R$%-6.2f | %-6d |\n",
			isbn, nome_livro, categoria_livro, nome_autor, preco, quantidade_estoque
	);
	
	fclose(arq_livraria);
	

}


void listar_livros(){
	FILE *arq_livraria = fopen("arq_livraria.txt", "r");
	
	char linha[256];
	while (fgets(linha, sizeof(linha), arq_livraria)) {
        printf("%s\n", linha);
    }
    printf("======================================================================================================================================\n");
    
	fclose(arq_livraria);
}


void sobre(){
    printf("\n|=================================================================================|\n");
	printf("Informações sobre a Livraria:\n\n");

    // Informações sobre a fundação da livraria
    printf( "Quando surgiu: \n"
			"A Livraria Livro Legal foi fundada em 1998, com o objetivo de oferecer\n"
			"um ambiente acolhedor e acessível para todos os amantes da leitura.\n\n"
	);

    // Missão da livraria
    printf( "Missão: \n"
			"Nossa missão é promover o prazer pela leitura, oferecendo livros\n"
			"de qualidade e um atendimento excepcional, tornando a leitura acessível a todos.\n\n"
	);

    // Valores da livraria
    printf( "Valores: \n"
		    "- Compromisso com a qualidade\n"
		    "- Atendimento personalizado\n"
		    "- Valorização da literatura nacional\n"
		    "- Sustentabilidade\n"
    		"- Inclusão e diversidade\n\n"
	);

    // Endereço da livraria
    printf( "Endereço: \n"
			"Rua das Letras, 123, Centro – Cidade do Livro, SP, Brasil\n"
			"CEP: 12345-678\n"
	);


    printf("\n|=================================================================================|\n");
}


int main(){	
	FILE *arq_livraria = fopen("arq_livraria.txt", "r");  // Abre o arquivo para leitura

    if (arq_livraria == NULL) {
        //O arquivo não existe e ele sera criado
        
        fclose(arq_livraria);
        
		arq_livraria = fopen("arq_livraria.txt", "a");
		fprintf(arq_livraria,
				"===================================================== livraria LIVRO LEGAL ===========================================================\n"
				"|  Cód.  |                            Titulo                            |    Categoria    |   Nome do autor(a)   |  Preço  | Estoque |\n"	
				"======================================================================================================================================\n"
		);
		
    }
    
	fclose(arq_livraria);
	
	int op = 0;
	
	do{
		op = menu();
		
		
		switch(op){
			case 1:
				cadastro_livro();
				break;
			case 2:
				listar_livros();
				break;
			case 3:
				sobre();
				break;
			case 4:
				printf("Desligando programa...\n");
				break;
			default:
				printf("Opção inválida!\nDigite novamente...\n");
				break;
		}
		
	}while(op != 4);
	
	printf("Programa desligado.");
	fclose(arq_livraria);
	
	return 0;
}
