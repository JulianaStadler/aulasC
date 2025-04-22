#ifndef JULIANA_H
#define JULIANA_H

int MENU(){
	int op;
	printf("|===|============ TRIANGULOS =============|\n");
	printf("| 1 | Triângulo Retângulo                 |\n");
	printf("| 2 | Triângulo Retângulo Invertido       |\n");
	printf("| 3 | Pirâmide                            |\n");
	printf("| 0 | Sair                                |\n");
	printf("|===|=====================================|\n");
	printf("Digite qual opção você deseja: ");
	scanf("%d", &op);
	return op;
}

void TRIANGULO(int tam){
	int i, j;
	for(i = 1; i <= tam; i++){
		for(j = i; j <= tam; j++){
			printf("*");
		}
		
		printf("\n");
	}
}
void TRIANGULO_INVERTIDO(int tam){
	int i, j;
	for(i = tam; i > 0; i --){
		
		for(j = 0; j <= tam - i; j++){
			printf("*");
		}
		
		printf("\n");
	}
}

void PIRAMIDE(int tam){
	int i, j, k;
	for(i = tam, k = tam; i > 0; i = i - 2, k = k - 2){
		
		for(j = 0; j < k/2; j++){
			printf(" ");
		}
		
		
		for(j = 0; j <= tam - i; j++){
			printf("*");
		}
		
		printf("\n");
	}
	printf("\n\n");
	
	
}

#endif