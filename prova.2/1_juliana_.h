#ifndef JULIANA_H
#define JULIANA_H

void MENU(){
	printf("====================== PROGRAMA TOP ======================\n");
	printf("1. Exibir uma Mensagem de Saudação\n");
	printf("2. Verificar se um Número é Par ou Ímpar\n");
	printf("3. Converter Temperatura de Celsius para Fahrenheit\n");
	printf("4. Sair\n");
	printf("==========================================================\n\n");
}

void MENSAGEM(){
	printf("Olá!\n\n");
}

void PAR_IMPAR(int num){
	if(num %2 == 0){
		printf("O número é par!\n\n");
	}
	else{
		printf("O número é ímpar!\n\n");
	}
}

float CONVERTER_CELCIUS_FAHRENHEIT(float cel){
	float f;
	f = cel * 9/5 + 32;
	return f;
}


#endif