//6) Crie um programa que remova elementos duplicados em um vetor de inteiros. Inicialize o vetor com {1, 2, 2, 3, 4, 4, 5}.
#include <stdio.h>

int main() {
    int i, j, vetor[7] = {1, 2, 2, 3, 4, 4, 5}, vetor_final[7], tamanho_vetor_final = 0;

    printf("Vetor inicial: ");
    for (i = 0; i < 7; i++) {
        printf("%d ", vetor[i]);
    }

    for (i = 0; i < 7; i++) {
        bool ja_existe_no_vetor = false;

        for (j = 0; j < tamanho_vetor_final; j++) {
            if (vetor[i] == vetor_final[j]) {
                ja_existe_no_vetor = true;
                break;
            }
        }

        if (ja_existe_no_vetor == false) {
            vetor_final[tamanho_vetor_final] = vetor[i];
            tamanho_vetor_final++; 
        }
    }

    printf("\nVetor final: ");
    for (i = 0; i < tamanho_vetor_final; i++) {
        printf("%d ", vetor_final[i]);
    }

    return 0;
}