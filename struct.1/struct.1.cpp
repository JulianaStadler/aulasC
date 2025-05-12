/*
1. Faça um programa que use o Struct. Defina um registro empregado para armazenar os
dados (nome, sobrenome, data de nascimento, CPF, data de admissão, salário) de um
colaborador de sua empresa. Defina um vetor de empregados para armazenar todos os
colaboradores de sua empresa.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Registro {
    char nome[50];
    char sobrenome[50];
    int dataNascimento;
    char cpf[15];
    int dataAdmissao;
    float salario;
};

int menu(){
	int op;
	printf( "-------------------------- MENU --------------------------\n"
			"1 - Cadastrar novo funcionário\n"
			"2 - Listar funcionários cadastrados\n"
			"0 - Sair\n"
			"----------------------------------------------------------\n"
			"Digite qual opção você deseja: ");
	scanf("%d", &op);
	printf("\n");
	return op;
}

int main(){
	int op, tam = 0;
	struct Registro* registro = NULL;
	
	do {
		op = menu();
		
		switch(op){
			case 0:
				printf("Desligando programa...\n");
				break;
			case 1: {
				registro = (struct Registro*)realloc(registro, (tam + 1) * sizeof(struct Registro));
		        fflush(stdin);
		        
				printf( "--------------- CADASTRAR NOVO FUNCIONÁRIO ---------------\n"
		       			"Digite o nome do funcionário: ");
				    fgets(registro[tam].nome, sizeof(registro[tam].nome), stdin);
				    registro[tam].nome[strcspn(registro[tam].nome, "\n")] = 0;
				    
				    printf("Digite o sobrenome: ");
				    fgets(registro[tam].sobrenome, sizeof(registro[tam].sobrenome), stdin);
				    registro[tam].sobrenome[strcspn(registro[tam].sobrenome, "\n")] = 0;
				
				    printf("Digite a data de nascimento: ");
				    scanf("%d", &registro[tam].dataNascimento);
				
				    getchar();
				    printf("Digite o CPF do funcionário: ");
				    fgets(registro[tam].cpf, sizeof(registro[tam].cpf), stdin);
				    registro[tam].cpf[strcspn(registro[tam].cpf, "\n")] = 0;
				
				    printf("Digite a data de admissão do funcionário: ");
				    scanf("%d", &registro[tam].dataAdmissao);
				
				    printf("Digite o salário do funcionário: R$ ");
				    scanf("%f", &registro[tam].salario);
		        
		        tam++;
		        
		        printf( "Funcionário cadastrado!\n"
						"----------------------------------------------------------\n\n");
				break;
			}
			case 2:
				printf( "------------------- LISTAR FUNCIONÁRIOS ------------------\n");
				if(tam <= 0){
					printf("Nenhum funcionário cadastrado!\n");
				}else{
					for(int i = 0; i < tam; i++){
						printf("Nome: %s %s\n"
					           "Data de Nascimento: %d\n"
					           "CPF: %s\n"
					           "Data de Admissão: %d\n"
					           "Salário: R$ %.2f\n"
					           "==========================================================\n",
					           registro[i].nome, registro[i].sobrenome, registro[i].dataNascimento,
					           registro[i].cpf, registro[i].dataAdmissao, registro[i].salario);
					}
				}
		        printf( "----------------------------------------------------------\n\n");
				
				break;
			default:
				printf("Opção inválida...\nDigite novamente...\n\n");
		}
		
	} while(op != 0);
	
	free(registro);
	printf("Programa desligado\n");
	return 0;
}
