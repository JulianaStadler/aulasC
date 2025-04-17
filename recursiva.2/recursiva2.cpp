//2 - Faça um programa que converta um número decimal para um número binário utilizando recursividade.
#include <stdio.h>
#include <string.h>

//funcao que realiza o calculo binario
void func_binario(int decimal, int potenciaAtual, char binario[]){
	if(potenciaAtual <= 0){
		return;
	}
	
	if(decimal < potenciaAtual){
		strcat(binario, "0");   // Concatena o binario atual com mais o digito 0
	} else {
		decimal -= potenciaAtual;
		strcat(binario, "1");   // Concatena o binario atual com mais o digito 1
	}
	
	func_binario(decimal, (potenciaAtual/2), binario);
}

//funcao que retorna a potencia mais proxima do numero
int potenciaMaisProxima(int numero, int potenciaAtual){
	if(potenciaAtual < numero){
		return potenciaMaisProxima(numero, potenciaAtual * 2);
	}
	else{
		return potenciaAtual / 2;
	}
}

int main(){
	int decimal;
	printf("Digite o valor decimal:");
	scanf("%d", &decimal);
	
	char binario[32] = "";
	func_binario(decimal, potenciaMaisProxima(decimal, 1), binario);
	printf("O número binário é: %s", binario);
	
	return 0;
}