//3) Calcular a soma dos elementos de um vetor com n elementos. Utilizar input.
#include <stdio.h>

int main() {
    int tamanho, i, soma = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    for(i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("A soma é: %d\n", soma);

    return 0;
}