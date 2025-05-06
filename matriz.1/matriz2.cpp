/*
b) Dada matrizes A e B, informadas pelo usuário, 
calcule A+B e mostre o resultado em uma matriz C. 
As matrizes devem ser de mesma ordem (3 x 3).
*/
#include <stdio.h>
int main (){
	int matriz1[3][3], matriz2[3][3], matriz3[3][3];
	printf(  "========== MATRIZ 1 ==========\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Digite o valor da linha %d posicao %d: ", i+1, j+1);
			scanf("%d", &matriz1[i][j]);
		}
	}
	printf("\n========== MATRIZ 2 ==========\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Digite o valor da linha %d posicao %d: ", i+1, j+1);
			scanf("%d", &matriz2[i][j]);
			
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	
	printf("\n========== MATRIZ 3 ==========\n");
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			printf("%8d ", matriz3[i][j]);
		}
		
		printf("\n");
	}
	printf("==============================\n");
	
	return 0;
}
