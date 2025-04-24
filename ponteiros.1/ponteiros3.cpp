/*
3.Faça um programa que receba o salário de um funcionário, calcule e mostre o valor do novo salário, 
sabendo-se que este recebeu um aumento de 20%.
*/

#include <stdio.h>
int main(){
	float salario;
	
	printf("Digite o valor do salário atual: R$");
	scanf("%f", &salario);
	
	FILE *arquivo_salario;
	arquivo_salario = fopen("arq_salario.txt", "a");
	fprintf(arquivo_salario,
			"------REAJUSTE SALARIAL------\n"
			"Salario atual:......R$%.2f\n"
			"Salario +20%%:.......R$%.2f\n\n",
			salario, salario+((salario/100)*20));
	fclose(arquivo_salario);
	
	printf("Abra o arquivo para visualizar o resultado.");
	return 0;
}