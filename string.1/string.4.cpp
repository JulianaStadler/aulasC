/*
1) Ordenar um vetor com strings com os seguintes valores: 
{"Cesar","Juvenal","Amanda","Ivo","Alencar"}.
Usar strcpy e strcmp.

*/
#include <stdio.h>
#include <string.h>

int main(){
	int resultado, qtd_itens = 5;
	char vetor[qtd_itens][20] = {"Cesar","Juvenal","Amanda","Ivo","Alencar"};
	
	printf("Vetor atual: ");
	for(int i = 0; i < qtd_itens; i++){
		printf("%s ", vetor[i]);
	}
	
	for(int i = 0; i < qtd_itens; i++){
		bool houve_troca = false;
		for(int j = 0; j < qtd_itens - 1; j++){
			
			resultado = strcmp(vetor[j], vetor[j + 1]);
			if(resultado > 0){
				//a string2 vem antes da string1
				char aux[20];
				strcpy(aux, vetor[j + 1]);
				strcpy(vetor[j + 1], vetor[j]);
				strcpy(vetor[j], aux);
				
				houve_troca = true;
			}
		}
		
		if(houve_troca == false){
			break;
		}
	}
	
	printf("\n\nVetor ordenado: ");
	for(int i = 0; i < qtd_itens; i++){
		printf("%s ", vetor[i]);
	}
	
}