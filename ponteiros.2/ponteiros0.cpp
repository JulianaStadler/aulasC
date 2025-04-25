#include <stdio.h>
#include <string.h>

int main(){
	int codigo;
	char nome_produto[20];
	float preco;
	
	FILE *cardapio;
	cardapio = fopen("menu.txt", "w");
	printf("Digite o codigo do produto: ");
	scanf("%d", &codigo);
	
	fflush(stdin); //limpa a reserva de memoria - buffer
	printf("Digite o nome do produto: ");
	fgets(nome_produto, sizeof(nome_produto), stdin);
	
	nome_produto[strlen(nome_produto)-1] = '\0';
	
	printf("Digite o preco do produto: ");
	scanf("%f", &preco);
	
	fprintf(cardapio, 
			"Código ----- Produto ----- Preço\n"
			"  %d  ---  %s  --- %.2f\n",
			codigo, nome_produto, preco
	);
	fclose(cardapio);
	
	//listar os produtos
	cardapio = fopen("menu.txt", "r");
	char linha[200];
	
	while(fgets(linha, sizeof(linha), cardapio) != NULL){
		printf("%s", linha);
		
	}
	
	fclose(cardapio);
	
	return 0;
}