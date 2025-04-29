//4) Encontrar o maior/menor elemento. Imprimir o valor máximo e o mínimo dentro de um vetor com n elementos.
#include <stdio.h>

int main() {
    int tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    
    printf("Digite o valor 1: ");
    scanf("%d", &vetor[0]);
    
    int maior = vetor[0], menor = vetor[0];

    for(i = 1; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if(vetor[i] > maior){
        	maior = vetor[i];
		}
        if(vetor[i] < menor){
        	menor = vetor[i];
		}
        
    }

    printf( "Maior: %d\n"
			"Menor: %d", maior, menor);

    return 0;
}