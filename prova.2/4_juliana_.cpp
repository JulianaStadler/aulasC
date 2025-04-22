/*
4) Criar um programa em C que calcule a folha de pagamento de um funcionário, incluindo o
cálculo de impostos (INSS e IRRF simplificados) e benefícios (vale-transporte), utilizando
funções declaradas em um arquivo de cabeçalho (folha.h). O programa principal (main.c)
solicitará o valor do salário do funcionário e exibirá o resumo da folha de pagamento.

// Taxas e valores para cálculo (simplificados)
#define TAXA_INSS 0.11 // 11% fixo
#define FAIXA_ISENCAO_IRRF 1903.98
#define TAXA_IRRF_PADRAO 0.075 // 7.5% simplificado acima da isenção
#define VALOR_VALE_TRANSPORTE_DIA 6.00
#define DIAS_TRABALHADOS_MES 22 // Assumindo um valor fixo

SAÍDA

--- Resumo da Folha de Pagamento ---
Salário Bruto:
Desconto INSS:
Desconto IRRF:
Benefício Vale-Transporte:
------------------------------------
Salário Líquido:
------------------------------------
*/
#include <stdio.h>
#include "4_juliana_.h"

int main(){
	float salario;
	printf("Digite o valor do salário bruto: ");
	scanf("%f", &salario);
	
	RESUMO(salario);
	
	return 0;
}
