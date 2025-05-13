/*
3. Em uma linha de produção, diversas máquinas têm seus sensores de temperatura monitorados. 
Defina uma struct chamada LeituraTemperatura com os seguintes campos:
identificador da máquina (string), horário da leitura (string) e temperatura (float).

Crie um vetor de LeituraTemperatura para armazenar as leituras de temperatura coletadas durante um determinado período.

Implemente funções para:
	• Registrar uma nova leitura de temperatura.
	• Exibir todas as leituras de temperatura.
	• Encontrar a leitura de temperatura mais alta e a mais baixa.
	• Calcular a temperatura média de todas as máquinas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct LeituraTemperatura{
    char identificador[20];
    char horario[10];
    float temperatura;
};


int menu(){
	int op;
	printf( "-------------------------- MENU --------------------------\n"
			"1 - Registrar nova leitura de temperatura\n"
			"2 - Visualizar todas as leituras\n"
			"3 - Visualizar a temperatura mais alta e a mais baixa\n"
			"4 - Calcular a média de temperatura das máquinas\n"
			"0 - Sair\n"
			"----------------------------------------------------------\n"
			"Digite qual opção você deseja: ");
	scanf("%d", &op);
	printf("\n");
	return op;
}

void listarLeituras(LeituraTemperatura leituras[], int tamanho) {
    printf( "----------------------------------------------------------\n"
			"                  Leituras registradas\n"
			"----------------------------------------------------------\n");
    if (tamanho == 0) {
        printf( "Nenhuma leitura de temperatura registrada.\n"
				"----------------------------------------------------------\n\n");
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("| Máquina:%6s | Horário:%6s | Temperatura:%6.2f°C |\n",
               leituras[i].identificador, leituras[i].horario, leituras[i].temperatura);
    }
    printf("----------------------------------------------------------\n\n");
}

void maxminLeituras(LeituraTemperatura leituras[], int tamanho) {
    printf( "----------------------------------------------------------\n"
			"            Temperatura mais alta e mais baixa\n"
			"----------------------------------------------------------\n");
			
    if (tamanho == 0) {
        printf( "Nenhuma leitura registrada.\n"
				"----------------------------------------------------------\n\n");
        return;
    }

    int max = 0, min = 0;
    for (int i = 1; i < tamanho; i++) {
        if (leituras[i].temperatura > leituras[max].temperatura)
            max = i;
        if (leituras[i].temperatura < leituras[min].temperatura)
            min = i;
    }

    printf( "Temperatura mais alta: %.2f°C (Máquina: %s, Horário: %s)\n"
            "Temperatura mais baixa: %.2f°C (Máquina: %s, Horário: %s)\n"
			"----------------------------------------------------------\n\n",
			leituras[max].temperatura, leituras[max].identificador, leituras[max].horario,
            leituras[min].temperatura, leituras[min].identificador, leituras[min].horario);
}

void calcularMedia(LeituraTemperatura leituras[], int tamanho) {
    printf( "----------------------------------------------------------\n"
			"                   Media de temperaturas\n"
			"----------------------------------------------------------\n");
			
    if (tamanho == 0) {
        printf("Nenhuma leitura registrada.\n");
	printf("----------------------------------------------------------\n\n");
        return;
    }

    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += leituras[i].temperatura;
    }

    printf("Temperatura média das máquinas: %.2f°C\n", soma / tamanho);
	printf("----------------------------------------------------------\n\n");
}


int main(){
	int op, tam = 0;
	struct LeituraTemperatura leituras[15];
	
	do {
		op = menu();
		
		switch(op){
			case 0:
				printf("Desligando programa...\n");
				break;
			case 1:
				printf( "----------------- CADASTRAR NOVA LEITURA -----------------\n");
				
			    if (tam >= 15) {
			        printf("Limite de leituras atingido.\n");
			        break;
			    }
			
			    printf("Digite o identificador da máquina: ");
			    getchar();
			    fgets(leituras[tam].identificador, sizeof(leituras[tam].identificador), stdin);
			    leituras[tam].identificador[strcspn(leituras[tam].identificador, "\n")] = 0;
			
			    printf("Digite o horário da leitura: ");
			    fgets(leituras[tam].horario, sizeof(leituras[tam].horario), stdin);
			    leituras[tam].horario[strcspn(leituras[tam].horario, "\n")] = 0;
			
			    printf("Digite a temperatura registrada: ");
			    scanf("%f", &leituras[tam].temperatura);
			
			    printf("Leitura registrada com sucesso!\n\n");
		        tam++;
		        
		        printf( "Leitura registrada!\n"
						"----------------------------------------------------------\n\n");
				break;
			case 2:
				listarLeituras(leituras, tam);
				break;
			case 3:
				maxminLeituras(leituras, tam);
				break;
			case 4:
				calcularMedia(leituras, tam);
				break;
			default:
				printf("Opção inválida...\nDigite novamente...\n\n");
		}
		
	} while(op != 0);
	
	free(leituras);
	printf("Programa desligado\n");
	return 0;
}