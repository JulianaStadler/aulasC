// 2. Crie um programa que solicite ao usuário 4 notas de um aluno, calcular a média e apresente na tela a média.

#include <stdio.h>

int main() {
    int i = 1;
    float total = 0, media;
    
    while (i <= 4){
        printf("Digite a %dº nota: ", i);
        scanf("%f", &media);
        total += media;
        i++;
    }
    printf("A media é %.2f", total / 4);
    return 0;
}