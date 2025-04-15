/*
3.HEADER – Calculo de conversão. Criar header (*.h) que tenha o cálculo de conversão de:
•Medidas() – De cm para metros e metros para cm
•Volume() – Litros para mililitros e mililitros para Litros
•Moeda() – Real para dólar e Dólar para Real
•Em seguida, criar um arquivo em C com o include desse novo cabeçalho.
*/

#include <stdio.h>
#include "medidas.h"

int menu(){
	int opcao;
    
    do {
        printf("\nMenu de Operacoes de Conversoes de Medidas:\n");
        printf("1. Medidas\n");
        printf("2. Volume\n");
        printf("3. Moeda\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

		if(opcao == 4){
        	printf("Saindo do programa...\n");
        	break;
		}
		
        switch (opcao) {
            case 1:
			    medidas();
			    break;
			case 2:
			    volume();
			    break;
			case 3:
			    moeda();
			    break;
            default:
            	printf("Opcao invalida, digite novamente...\n");
            	
				
        }
    } while (1); 
    
	return 0;
}

int main(){
	menu();
    printf("Programa desligado! Volte sempre");
	return 0;
}
