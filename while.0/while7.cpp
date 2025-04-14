/* 
7. Criar um programa que leia idade e sexo
(0-masculino,1-feminino) de várias pessoas. 

Calcule e exiba
- a média de idade;
- Total de pessoas do sexo feminino com idade entre 14-30 inclusive;
- Número total de pessoas do sexo masculino;

O programa termina ao digitar 0 para idade.
*/

#include <stdio.h>

int main() {
    int idade, mediaidade = 0, totalfeminino1430 = 0, totalmasculino = 0, sexo, i = 0;
    
    while (1){
        printf("Digite a idade da %dº pessoa: ", i+1);
        scanf("%d", &idade);
        
        if(idade != 0){
            printf("Digite o sexo da %dº pessoa (0-masculino, 1-feminino): ", i+1);
            scanf("%d", &sexo);
            mediaidade += idade;
            
            if(sexo == 1 && idade >= 14 && idade <= 30){
                totalfeminino1430++;
            }
            else if(sexo == 0){
                totalmasculino++;
            }
            
            i++;
        }else{
            break;
        }
    }
    
    printf("\n\nMedia de idade: %d\n", mediaidade/i);
    printf("Mulheres entre 14 e 30 anos: %d\n", totalfeminino1430);
    printf("Homens: %d\n", totalmasculino);
    return 0;
}