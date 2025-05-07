/*
1) CineMatriz: Gerenciamento de Assentos de Cinema com Matrizes.
Criar com matrizes um mapa de assentos no cinema com 5 fileiras e 7 assentos por fileira
(usar #define). Usar “L” para livre e “O” para ocupado. E apresentar um menu com as
seguintes opções:
1 - Exibir mapa de assentos
2 - Marcar assento
3 - Desmarcar assento
0 – Sair

*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
	#define LIVRE 'L'
	#define OCUPADO 'O'
	#define FILEIRAS 5
	#define ASSENTOS 7

int menu(){
	int op;
	printf( "----------- CINE MATRIZ -----------\n"
			"| 1 - Mostrar assentos            |\n"
			"| 2 - Marcar assento              |\n"
			"| 3 - Desmarcar assento           |\n"
			"| 0 - Sair                        |\n"
			"-----------------------------------\n"
			"Digite qual opção você deseja: "
	);
	scanf("%d", &op);
	return op;
}

void mostrar_assentos(char assentos[FILEIRAS][ASSENTOS]){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	printf( "--------- Mapa de Assentos --------\n"
			"    ");
	
	for(int j = 0; j < ASSENTOS; j++){
		printf(" %d ", j+1);
	}
	printf("\n------");
	for(int j = 0; j < ASSENTOS; j++){
		printf("---");
	}
	
	for(int i = 0; i < FILEIRAS; i++){
		printf("\n %d |", i+1);
		for(int j = 0; j < ASSENTOS; j++){
			if(assentos[i][j] == LIVRE){
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
				printf(" %c ", assentos[i][j]);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}else{
				printf(" %c ", assentos[i][j]);
			}
		}
		printf(" |");
	}
	
	printf( "\n   |");
	for(int j = 0; j < ASSENTOS*3+1; j++){
		printf(" ");
	}
	printf("|\n   |");
	
	for(int j = 0; j < ASSENTOS; j++){
		printf(" ");
	}
	for(int j = 0; j < (ASSENTOS*2 - ASSENTOS/2 - 3); j++){
		printf("|");
	}
	for(int j = 0; j < ASSENTOS; j++){
		printf(" ");
		
	}
	printf("|");
	
	printf( "\n-----------------------------------\n");
	
}

void n_pontos(int n){
	for(int i = 0; i < n; i++){
		printf(".");
		Sleep(200);
	}
	printf("\n");
	
}

void opcao_invalida(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("Opção inválida");
	n_pontos(5);
	printf("Digite novamente");
	n_pontos(5);
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

int main(){
	char assentos_cinema[FILEIRAS][ASSENTOS];
	int i, j, op, linha_desejada, coluna_desejada;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	for(i = 0; i < FILEIRAS; i++){
		for(j = 0; j < ASSENTOS; j++){
			assentos_cinema[i][j] = LIVRE;
		}
	}
	
	do{
		op = menu();
		if(op == 0){
			break;
		}
		
		system("cls");
		switch(op){
			case 1:
				mostrar_assentos(assentos_cinema);
				break;
			case 2:
				
				printf("--------- Ocupar Assentos ---------\n");
				mostrar_assentos(assentos_cinema);
				do {
			        printf("Digite qual fileira deseja: ");
			        scanf("%d", &linha_desejada);
			
			        if (linha_desejada < 1 || linha_desejada > FILEIRAS) {
			            opcao_invalida();
			        }
			    } while (linha_desejada < 1 || linha_desejada > FILEIRAS);
			
			    do {
			        printf("Digite qual assento deseja: ");
			        scanf("%d", &coluna_desejada);
			
			        if (coluna_desejada < 1 || coluna_desejada > ASSENTOS) {
			            opcao_invalida();
			        }
			    } while (coluna_desejada < 1 || coluna_desejada > ASSENTOS);
				
				assentos_cinema[linha_desejada-1][coluna_desejada-1] = OCUPADO;
				
				printf("Processando");
				n_pontos(10);
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
				printf("CADASTRADO COM SUCESSO!!!!");
				Sleep(1200);
				system("cls");
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				break;                                                                                 
			case 3:
			    printf("------- DESocupar Assentos --------\n");
			    mostrar_assentos(assentos_cinema);
			
			    do {
			        printf("Digite qual fileira deseja: ");
			        scanf("%d", &linha_desejada);
			
			        if (linha_desejada < 1 || linha_desejada > FILEIRAS) {
			            opcao_invalida();
			        }
			    } while (linha_desejada < 1 || linha_desejada > FILEIRAS);
			
			    do {
			        printf("Digite qual assento deseja: ");
			        scanf("%d", &coluna_desejada);
			
			        if (coluna_desejada < 1 || coluna_desejada > ASSENTOS) {
			            opcao_invalida();
			        }
			    } while (coluna_desejada < 1 || coluna_desejada > ASSENTOS);
				
				assentos_cinema[linha_desejada-1][coluna_desejada-1] = LIVRE;
				
				printf("Processando");
				n_pontos(10);
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
				printf("POLTRONA LIVRE!!!!");
				Sleep(1200);
				system("cls");
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				
				break;
			default:
				opcao_invalida();
				Sleep(100);
				system("cls");
				
		}
		
		
	}while(op != 0);
	
	
	return 0;
}