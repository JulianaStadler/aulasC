/*
c) Criar um programa em C que leia os elementos de uma matriz inteira de 3 x 3 e imprimir
somente os elementos da diagonal principal.
*/

#include <stdio.h>
#include <windows.h>

int main (){
	int matriz1[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	// Obtem o identificador do console
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
	
	printf("===== DIAGONAL PRINCIPAL =====\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if (i == j){
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			    printf("%8d", matriz1[i][j]);
			    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			} else {
				printf("%8d", matriz1[i][j]);
			}
		}
		printf("\n");
	}
	printf("==============================\n");
	
	return 0;
}
