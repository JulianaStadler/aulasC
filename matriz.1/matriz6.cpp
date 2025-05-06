/*
f) A distância entre várias cidades é dada pela tabela abaixo (em quilômetros):

×  1  2  3  4  5
1 00 15 30 05 12
2 15 00 10 17 28
3 30 10 00 03 11
4 05 17 03 00 80
5 12 28 11 80 00

Desenvolva um programa em linguagem C que leia a tabela acima e informe ao usuário a distância entre duas
cidades por ele digitada.
*/
#include <stdio.h>

int main (){
	int cid1, cid2, matriz1[5][5] = {
		{00, 15, 30, 05, 12},
		{15, 00, 10, 17, 28},
		{30, 10, 00, 03, 11},
		{05, 17, 03, 00, 80},
		{12, 28, 11, 80, 00}
	};
    

	printf( "-----------------------------\n"
			" × |  1 |  2 |  3 |  4 |  5 |\n"
			"-----------------------------\n"
			".1.| 00 | 15 | 30 | 05 | 12 |\n"
			".2.| 15 | 00 | 10 | 17 | 28 |\n"
			".3.| 30 | 10 | 00 | 03 | 11 |\n"
			".4.| 05 | 17 | 03 | 00 | 80 |\n"
			".5.| 12 | 28 | 11 | 80 | 00 |\n"
			"-----------------------------\n");
		
	printf("Digite o número da primeira cidade: ");
	scanf("%d", &cid1);
	
	printf("Digite o número da segunda cidade: ");
	scanf("%d", &cid2);
	
	if(cid1 <= 5 && cid2 <= 5 && cid1 > 0 && cid2 > 0){
		printf("A distancia entre a cidade %d e a cidade %d é de %dkm", cid1, cid2, matriz1[cid1-1][cid2-1]);
	} else {
		printf("Valores inválidos.");
	}
	
	
	
	
	
	return 0;	
}