/*
a) Faça um programa que leia uma matriz de ordem 3 x 3 e apresente a soma de seus elementos
*/
#include <stdio.h>
int main (){
	int matriz1[3][3];
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Digite o valor da linha %d posicao %d: ", i+1, j+1);
			scanf("%d", &matriz1[i][j]);
		}
	}
	
	printf("\n======== MATRIZ LEGAL ========\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%8d", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("==============================\n");
	
	return 0;
}