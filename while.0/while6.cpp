/* 
6. Faça um programa que mostre o primeiro número inteiro, a partir do número 1, que elevado
ao quadrado seja maior que este número multiplicado por 5.
*/

#include <stdio.h>

int main() {
    int i = 1;
    
    while (1){
        if((i * i) > i * 5){
            printf("%d * %d = %d\n", i, i, i*i);
            printf("%d * 5 = %d", i, i*5);
            break;
        }
        i++;
    }
    return 0;
}