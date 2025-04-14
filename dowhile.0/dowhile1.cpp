/* 
1) Faça um programa que solicite dois valores e após a solicitação, apresente um menu de opções de:
1 – Soma
2 – Subtração
3 – Multiplicação
4 – Potência
0 – Encerrar o programa.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, op;
    
    printf("======= CALCULADORA ========\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    do{
        printf("=========== MENU ===========\n");
        printf("1 – Soma\n");
        printf("2 – Subtração\n");
        printf("3 – Multiplicação\n");
        printf("4 – Potência\n");
        printf("0 – Encerrar o programa.\n");
        printf("============================\n");
        printf("Selecione a operação: ");
        scanf("%d", &op);
        
        switch(op){
            case 1:
                printf("%d + %d = %d\n", n1, n2, n1 + n2);
                break;
            case 2:
                printf("%d - %d = %d\n", n1, n2, n1 - n2);
                break;
            case 3:
                printf("%d * %d = %d\n", n1, n2, n1 * n2);
                break;
            case 4:
                printf("%d ^ %d = %d\n", n1, n2, pow(n1, n2));
                break;
            case 0:
                break;
        }

    }while(op != 0);
    
    return 0;
}