/* 
4. Crie um programa que some os salários dos colaboradores de uma empresa. 
O programa encerra quando o usuário digita um salário menor que zero.
*/

#include <stdio.h>

int main() {
    int i = 0;
    float salario;
    bool continua = true;
    
    while (continua == true){
        printf("Digite o %dº salário: ", i+ 1);
        scanf("%f", &salario);
        i++;
        
        if (salario < 0){
            continua = false;
        }
    }
    return 0;
}