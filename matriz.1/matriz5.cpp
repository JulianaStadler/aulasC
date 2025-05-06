/*
e) Criar um programa em C que leia os elementos de uma matriz inteira de 4 x 4 e imprimir todos os
elementos exceto da diagonal principal.
*/

#include <stdio.h>

int main (){
	int matriz1[4][4] = {
		{1, 2, 3, 4},
		{4, 5, 6, 5},
		{7, 8, 9, 6},
		{2, 7, 4, 3}
	};
    
	
	printf("======== MATRIZ LEGAL ========\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%8d", matriz1[i][j]);
		}
		printf("\n");
	}
	printf( "==============================\n"
			"Elementos sem a diagonal principal: \n");
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if (i != j){
			    printf("%d ", matriz1[i][j]);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}