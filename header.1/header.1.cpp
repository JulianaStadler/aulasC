/*
1.HEADER - Calculadora com funções. Criar header (*.h) que tenha as 4 operações matemáticas, cada uma como função. 
Todas no mesmo arquivo *.h. Ou seja:
•Soma()
•Subtracao()
•Multiplicacao()
•Divisao()
•Em seguida, criar um arquivo em C com o include desse novo cabeçalho.
*/
#include <stdio.h>
#include "calculadora.h"

void menu() {
    int opcao;
    float num1, num2;
    
    do {
        printf("\nMenu de Operacoes:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            printf("Saindo do programa...\n");
            break;
        }

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch (opcao) {
            case 1:
			    printf("Resultado da soma: %.2f\n", soma(num1, num2));
			    break;
			case 2:
			    printf("Resultado da subtracao: %.2f\n", subtracao(num1, num2));
			    break;
			case 3:
			    printf("Resultado da multiplicacao: %.2f\n", multiplicacao(num1, num2));
			    break;
			case 4:
			    if (num2 != 0) {
			        printf("Resultado da divisao: %.2f\n", divisao(num1, num2));
			    }else{
			        printf("Divisão impossível\n");
				}
			    break;
        }
    } while (1); 
}

int main() {
    menu();
    printf("Programa desligado! Volte sempre");
    return 0;
}
