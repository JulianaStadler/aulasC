/*
2.HEADER –Calculo de áreas. Criar header (*.h) que tenha o cálculo de áreas de:
•Retângulo()
•Triângulo() – Verificar se as medidas formam um triângulo
•Elipse()
•Em seguida, criar um arquivo em C com o include desse novo cabeçalho.
*/

#include <stdio.h>
#include <math.h>
#include "areas.h"

int menu(){
	int opcao;
    
    do {
        printf("\nMenu de Operacoes:\n");
        printf("1. Retangulo\n");
        printf("2. Triangulo\n");
        printf("3. Elipse\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

		if(opcao == 4){
        	printf("Saindo do programa...\n");
        	break;
		}
		
        switch (opcao) {
            case 1:
			    retangulo();
			    break;
			case 2:
			    triangulo();
			    break;
			case 3:
			    elipse();
			    break;
            default:
            	printf("Opcao invalida, digite novamente...\n");
            	
				
        }
    } while (1); 
    
	return 0;
}
int main() {
    menu();
    printf("Programa desligado! Volte sempre");
    return 0;
}