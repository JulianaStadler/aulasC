/*
d) Criar um programa em C que leia os elementos de uma matriz inteira de 3 x 3 e imprimir somente os
elementos da diagonal secundária.
*/
#include <stdio.h>
#include <windows.h>

int main (){
	int tam = 3;
	int matriz1[tam][tam] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	// Obtem o identificador do console
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
	
	printf("==== DIAGONAL SECUNDARIA =====\n");
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			if ((tam - 1) - i == j){
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			    printf("%8d", matriz1[i][j]);
			    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			} else {
				printf("%8d", matriz1[i][j]);
			}
		}
		printf("\n");
	}
	printf("===============================\n");
	
	return 0;
}