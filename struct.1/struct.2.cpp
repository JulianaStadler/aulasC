/*
2. Controle de Estoque. Imagine um sistema para controlar o estoque de uma fábrica. 
Cada produto possui um código, nome, quantidade em estoque e preço unitário.
Defina uma struct chamada Produto para armazenar as informações de cada item
(código - inteiro, nome - string, quantidade - inteiro, preço - float).
Crie um vetor de Produto para representar o estoque da fábrica.
Implemente funções para:
	• Adicionar um novo produto ao estoque.
	• Atualizar a quantidade de um produto existente.
	• Listar todos os produtos em estoque, mostrando seus detalhes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Produto{
    int codigo;
    char nome[20];
    int quantidade;
    float preco;
};

int menu(){
	int op;
	printf( "-------------------------- MENU --------------------------\n"
			"1 - Adicionar novo produto ao estoque\n"
			"2 - Visualizar produtos do estoque\n"
			"3 - Atualizar produto\n"
			"0 - Sair\n"
			"----------------------------------------------------------\n"
			"Digite qual opção você deseja: ");
	scanf("%d", &op);
	printf("\n");
	return op;
}

int main(){
	int op, tam = 0;
	struct Produto* produtos = NULL;
	
	do {
		op = menu();
		
		switch(op){
			case 0:
				printf("Desligando programa...\n");
				break;
			case 1:
				produtos = (struct Produto*)realloc(produtos, (tam + 1) * sizeof(struct Produto));
				printf( "----------------- CADASTRAR NOVO PRODUTO -----------------\n"
		       		    "Digite o código do produto: ");
			    scanf("%d", &produtos[tam].codigo);
			    getchar();
			
			    printf("Digite o nome do produto: ");
			    fgets(produtos[tam].nome, sizeof(produtos[tam].nome), stdin);
			    produtos[tam].nome[strcspn(produtos[tam].nome, "\n")] = 0;
			
			    printf("Digite a quantidade: ");
			    scanf("%d", &produtos[tam].quantidade);
			    getchar();
			
			    printf("Digite o preço: R$");
			    scanf("%f", &produtos[tam].preco);
		        tam++;
		        
		        printf( "Produto adicionado!\n"
						"----------------------------------------------------------\n\n");
				break;
			case 2:
				printf( "--------------------- LISTAR PRODUTOS --------------------\n");
				if(tam <= 0){
					printf("Nenhum produto cadastrado!\n");
				}else{
					for(int i = 0; i < tam; i++){
						printf(
							"Código: %d\n"
							"Nome: %s\n"
							"Quantidade: %d\n"
							"Preço: R$%.2f\n"
							"==========================================================\n",
							produtos[i].codigo, produtos[i].nome, produtos[i].quantidade, produtos[i].preco
						);
					}
				}
		        printf( "----------------------------------------------------------\n\n");
				
				break;
			case 3: {
				printf( "-------------------- ATUALIZAR PRODUTO -------------------\n");
				
				if(tam <= 0){
					printf("Nenhum produto cadastrado!\n"
		        			"----------------------------------------------------------\n\n");
					break;
				}
				
				int pesquisa;
				printf("Digite o código do produto que quer atualizar: ");
				getchar();
			    scanf("%d", &pesquisa);
				
				
				printf( "-------------------- ATUALIZAR PRODUTO -------------------\n");
				bool foi_encontrado = false;
				int i;
				
				for(i = 0; i < tam; i++){
					
					if(produtos[i].codigo == pesquisa){
						foi_encontrado = true;
						break;
					}
					
				}
				
				if(foi_encontrado == false){
					printf("Este codigo não existe no sistema.\n");
		        	printf( "----------------------------------------------------------\n\n");
		        	break;
				}
				
				int atualizar = 0;
				do{
					printf(
						"==========================================================\n"
						"              Produto encontrado no sistema:\n"
						"==========================================================\n"
						"1 | Código: %d\n"
						"2 | Nome: %s\n"
						"3 | Quantidade: %d\n"
						"4 | Preço: R$%.2f\n"
						"0 | Cancelar\n"
						"==========================================================\n"
						"Digite qual opção quer atualizar: ",
						produtos[i].codigo, produtos[i].nome, produtos[i].quantidade, produtos[i].preco
					);
					scanf("%d", &atualizar);
					getchar();
					
					switch (atualizar) {
			            case 0:
			                printf("Operação cancelada!\n\n");
			                break;
			            case 1:
			                printf("O código do produto não pode ser atualizado...\n\n");
			                break;
			            case 2:
			                printf("Digite o novo nome do produto: ");
			                fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
			                produtos[i].nome[strcspn(produtos[i].nome, "\n")] = 0;
			                break;
			            case 3:
			                printf("Digite a quantidade atual de estoque: ");
			                scanf("%d", &produtos[i].quantidade);
			                getchar();
			                break;
			            case 4:
			                printf("Digite o novo preço: R$");
			                scanf("%f", &produtos[i].preco);
			                getchar();
			                break;
			            default:
			                printf("Opção inválida... Digite novamente...\n\n");
			                break;
			        }
				} while(atualizar != 0);
				
		        printf( "----------------------------------------------------------\n\n");
				break;
			}
			default:
				printf("Opção inválida...\nDigite novamente...\n\n");
		}
		
	} while(op != 0);
	
	free(produtos);
	printf("Programa desligado\n");
	return 0;
}