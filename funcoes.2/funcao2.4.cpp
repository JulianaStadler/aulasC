/*
4.Calculadora com funções.
Criar uma função que seja um menu com 4 operações matemática (usar switch). E
cada operação matemática ser uma função. Todas no mesmo arquivo. Ou seja:

-Menu()
-Soma()
-Subtracao()
-Multiplicacao()
-Divisao()
*/
#include <stdio.h>
float soma(float a, float b) {
    return a + b;
}
float subtracao(float a, float b) {
    return a - b;
}
float multiplicacao(float a, float b) {
    return a * b;
}
float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero não permitida.\n");
        return 0;
    }
}
void menu() {
    int opcao;
    float num1, num2, resultado;
    
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
                resultado = soma(num1, num2);
                printf("Resultado da soma: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtracao(num1, num2);
                printf("Resultado da subtracao: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(num1, num2);
                printf("Resultado da multiplicacao: %.2f\n", resultado);
                break;
            case 4:
                resultado = divisao(num1, num2);
                if (num2 != 0) {
                    printf("Resultado da divisao: %.2f\n", resultado);
                }
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (1); 
}

int main() {
    menu();
    printf("Programa desligado! Volte sempre");
    return 0;
}

