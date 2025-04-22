#ifndef JULIANA_H
#define JULIANA_H

int MENU(){
	int op;
	printf("|===|============ TRIANGULOS =============|\n");
	printf("| 1 | Varificar qual o tipo do triângulo  |\n");
	printf("| 2 | Sair                                |\n");
	printf("|===|=====================================|\n");
	printf("Digite qual opção você deseja: ");
	scanf("%d", &op);
	return op;
}

bool VERIFICAR_LADOS(float lado){
//• Considerar a possibilidade de entradas inválidas (por exemplo, lados com comprimento negativo ou zero).
	if(lado > 0){
		return true;
	}
	return false;
	
}

void VERIFICAR_TRIANGULO(float a, float b, float c){
	//	Inválido: Se as medidas fornecidas não puderem formar um triângulo (a soma de dois lados deve ser maior que o terceiro lado).
	if(a + b > c || b + c > a || c + a > b){
		//• Verificar se o triângulo é retângulo: (usando o teorema de Pitágoras: a2 + b2 = c2).
		if(a*2 + b*2 == c*2){
			printf("Este é um triângulo Retângulo!\n\n");
		}
		
		//• Equilátero: Se todos os três lados forem iguais.
		if(a == b && b == c && c == a){
			printf("Este é um triângulo Equilátero!\n\n");
			
		}
		//• Escaleno: Se todos os três lados forem diferentes.
		else if(a != b && b != c && c != a){
			printf("Este é um triângulo Escaleno!\n\n");
			
		} 
		//• Isósceles: Se exatamente dois lados forem iguais.
		else {
			printf("Este é um triângulo Isósceles!\n\n");
		}
		
	} else {
		printf("Triângulo inválido!\nAs medidas não formam um triângulo.\n\n");	
	}

}



#endif