/*
4.Faça um programa que leia o preço de 5 mercadorias e a quantidade comprada de cada uma, 
calcule e imprima o valor da compra. Usar vetor.
*/

#include <stdio.h>
int main(){
	int qtd_mercadorias[5], qtd = 5, i;
	float preco_mercadorias[5], valor_total = 0.0;
	
	FILE *arquivo_mercado;
	arquivo_mercado = fopen("arq_mercado.txt", "a");
	
	printf("-------MERCADO JOINHA DO BAIRRO--------");
	fprintf(arquivo_mercado, 
			"---------------------------------------\n"
			"       MERCADO JOINHA DO BAIRRO\n"
			"---------------------------------------\n"
			"| Qtd |    Valor Produto\n"
			"---------------------------------------\n");
	
	for(i = 0; i < qtd; i++){
		printf("\nDigite o preço da %dº mercadoria: R$", i+1);
		scanf("%f", &preco_mercadorias[i]);
		printf("Digite a quantidade comprada da %dº mercadoria:", i+1);
		scanf("%d", &qtd_mercadorias[i]);
		
		fprintf(arquivo_mercado, 
				"|  %d  |    R$%.2f\n",
				qtd_mercadorias[i], preco_mercadorias[i]);
		
		valor_total += preco_mercadorias[i] * qtd_mercadorias[i];
		
	}
	
	fprintf(arquivo_mercado, 
			"---------------------------------------\n"
			"Valor Total: R$%.2f\n"
			"---------------------------------------\n\n\n",
			valor_total);
	fclose(arquivo_mercado);
	
	printf("Abra o arquivo para ver a nota!");
	
	return 0;
}