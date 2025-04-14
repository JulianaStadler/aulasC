/* 
3. Fazer a média de uma quantidade de números que o usuário inserir, sem saber quantas
vezes ele vai inserir. Precisamos criar um valor sentinela ou flag para encerrar o programa e apresentar o resultado.
*/

#include <stdio.h>

int main() {
    int i = 0;
    float total = 0, media;
    bool continua = true;
    char cont;
    
    while (continua == true){
        printf("Digite a %dº nota: ", i + 1);
        scanf("%f", &media);
        
        total += media;
        i++;
        
        printf("Digite 'N' para parar e qualquer outra coisa para continuar: ");
        scanf(" %c", &cont);
        
        if (cont == 'N' || cont == 'n'){
            continua = false;
        }
        
    }
    printf("A media é %.2f", total / i);
    return 0;
}