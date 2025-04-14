/*
2) Faça um programa que dado um número real não-negativo, informe sua raiz quadrada.
*/
#include <stdio.h>
#include <math.h>

int main() {
    float n1 ;
    
    do{
        printf("Digite o número: ");
        scanf("%f", &n1);
        if(n1 < 0){
            printf("Número negativo, digite novamente...\n");
        }
    } while (n1 < 0);
    
    printf("Raiz quadrada: %.2f", sqrt(n1));
    
    
    return 0;
}