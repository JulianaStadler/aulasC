/*
4. Gestão de Ordens de Produção. Uma fábrica recebe diversas ordens de produção,
cada uma com um número de identificação, descrição do produto, quantidade a ser produzida e status (pendente, em produção, concluída).
Defina uma struct chamada OrdemProducao com os campos: número da ordem (inteiro), descrição (string), quantidade (inteiro) e status (string).
Crie um vetor de OrdemProducao para armazenar todas as ordens de produção.

Implemente funções para:
	• Adicionar uma nova ordem de produção.
	• Listar todas as ordens de produção, mostrando seus detalhes.
	• Exibir as ordens de produção com um status específico.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct OrdemProducao {
	int numero_da_ordem;
	char descricao[100];
	int quantidade;
	char status[20];
};

int menu(){
	int op;
	printf( "-------------------------- MENU --------------------------\n"
			"1 - Adicionar nova ordem de produção\n"
			"2 - Listar ordens de produção\n"
			"3 - Exibir ordens de produção com status específico\n"
			"0 - Sair\n"
			"----------------------------------------------------------\n"
			"Digite qual opção você deseja: ");
	scanf("%d", &op);
	printf("\n");
	return op;
}

int main(){
	int op, tam = 0;
	struct OrdemProducao* ordens = NULL;
	
	do {
		op = menu();
		
		switch(op){
			case 0:
				printf("Desligando programa...\n");
				break;
			case 1:
				ordens = (struct OrdemProducao*)realloc(ordens, (tam + 1) * sizeof(struct OrdemProducao));
				printf( "------------------ CADASTRAR NOVA ORDEM ------------------\n"
		       			"Digite o número da ordem: ");
		        scanf("%d", &ordens[tam].numero_da_ordem);
		        getchar();
		
		        printf("Digite a descrição: ");
		        fgets(ordens[tam].descricao, sizeof(ordens[tam].descricao), stdin);
		        ordens[tam].descricao[strcspn(ordens[tam].descricao, "\n")] = 0;
		
		        printf("Digite a quantidade: ");
		        scanf("%d", &ordens[tam].quantidade);
		        getchar();
		
		        printf("Digite o status: ");
		        fgets(ordens[tam].status, sizeof(ordens[tam].status), stdin);
		        ordens[tam].status[strcspn(ordens[tam].status, "\n")] = 0;
		        tam++;
		        
		        printf( "Ordem adicionada!\n"
						"----------------------------------------------------------\n\n");
				break;
			case 2:
				printf( "---------------------- LISTAR ORDENS ---------------------\n");
				if(tam <= 0){
					printf("Nenhuma ordem cadastrada!\n");
				}else{
					for(int i = 0; i < tam; i++){
						printf( "Número da Ordem: %d\n"
								"Descrição: %s\n"
								"Quantidade: %d\n"
								"Status: %s\n"
								"==========================================================\n",
								ordens[i].numero_da_ordem, ordens[i].descricao, ordens[i].quantidade, ordens[i].status);
					}
				}
		        printf( "----------------------------------------------------------\n\n");
				
				break;
			case 3: {
				char pesquisa[20];
				printf( "------------------- FILTRAR POS STATUS -------------------\n");
				
				if(tam <= 0){
					printf("Nenhuma ordem cadastrada!\n"
		        			"----------------------------------------------------------\n\n");
					break;
				}
				
				printf("Digite o status que quer saber: ");
				getchar();
		        fgets(pesquisa, sizeof(pesquisa), stdin);
		        pesquisa[strcspn(pesquisa, "\n")] = 0;
				
				
				printf( "------------------- FILTRAR POS STATUS -------------------\n");
				bool foi_encontrado = false;
				
				for(int i = 0; i < tam; i++){
					
					if(strcmp(ordens[i].status, pesquisa) == 0){
						foi_encontrado = true;
						
						printf( 
							"Número da Ordem: %d\n"
							"Descrição: %s\n"
							"Quantidade: %d\n"
							"Status: %s\n"
							"==========================================================\n",
							ordens[i].numero_da_ordem, ordens[i].descricao, ordens[i].quantidade, ordens[i].status
						);
					}
					
				}
				
				if(foi_encontrado == false){
					printf("Não foram encontradas ordens com este status.\n");
				}
				
		        printf( "----------------------------------------------------------\n\n");
				break;
			}
			default:
				printf("Opção inválida...\nDigite novamente...\n\n");
		}
		
	} while(op != 0);
	
	free(ordens);
	printf("Programa desligado\n");
	return 0;
}
