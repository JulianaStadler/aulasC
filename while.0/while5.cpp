/* 
5. Faça um programa para mostrar os 30 primeiros números ímpares.
*/

#include <stdio.h>

int main() {
    int i = 1, continua = 1;
    
    printf("=======30 ímpares=======\n");
    while (continua <= 30){
    	
        printf("%d\n", i);
        i+= 2;
        continua++;
    }
    return 0;
}