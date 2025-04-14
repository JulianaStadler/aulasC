/*
3) Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessário
para que essa massa se torne menor do que 0,5 gramas. Escreva a massa inicial, a massa
final e o tempo calculado em horas, minutos e segundos.
*/
#include <stdio.h>

int main() {
    float inicial, final, segundos = 0;
    
    printf("Digite a massa do material radioativo em gramas: ");
    scanf("%f", &inicial);
    final = inicial;
    
    do{
        final /= 2; 
        segundos += 50;
        
        if(final < 0.5){
            break;
        }
    } while (1);
    
    printf("\nRadioativo inicial: %.2f\n", inicial);
    printf("Radioativo final: %.2f\n", final);
    printf("Tempo em horas: %.2f\n", (segundos/100)/60);
    printf("Tempo em minutos: %.2f\n", segundos/100);
    printf("Tempo em segundos: %.2f\n", segundos);
    
    
    return 0;
}