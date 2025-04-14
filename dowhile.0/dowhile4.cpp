/*
4) Simular o funcionamento de um caixa-eletrônico, que oferece as seguintes opções ao cliente:
1 – depósito, 2 – saque, 3 – saldo e 4 – sair. Suponha que o saldo inicial do cliente seja de R$ 1.000,00 e que o saldo pode ficar negativo.
Exemplo de funcionamento:
    1 – depósito
    2 – saque
    3 – saldo
    4 – sair
    Opção: 1
    Valor do depósito: 200.00
    1 – depósito
    2 – saque
    3 – saldo
    4 – sair
    Opção? 2
    Valor do saque? 50.00
    1 – depósito
    2 – saque
    3 – saldo
    4 – sair
    Opção? 3
    Saldo atual = R$ 1150.00
    1 – depósito
    2 – saque
    3 – saldo
    4 – sair
    Opção? 5
    Opção inválida!
    1 – depósito
    2 – saque
    3 – saldo
    4 – sair
    Opção? 4
    Fim das transações

*/
#include <stdio.h>

int main() {
    int op;
    float saldo = 1000, qtd;
    
    do{
        printf("============== BANCO ==============\n");
        printf("          1 – depósito\n");
        printf("          2 – saque\n");
        printf("          3 – saldo\n");
        printf("          4 – sair\n");
        printf("===================================\n");
        printf("Opção: ");
        scanf("%d", &op);
        
        switch(op){
            case 1:
                printf("Valor do depósito: R$");
                scanf("%f", &qtd);
                saldo += qtd;
                printf("\n");
                break;
            case 2:
                printf("Valor do saque: R$");
                scanf("%f", &qtd);
                saldo -= qtd;
                printf("\n");
                break;
            case 3:
                printf("Saldo atual: R$%.2f\n\n", saldo);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Digite novamente!\n\n");
                break;
        }
        
    } while (op != 4);
    printf("Programa encerrado!");
    
    
    return 0;
}