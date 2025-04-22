#ifndef JULIANA_H
#define JULIANA_H

#define TAXA_INSS 0.11 // 11% fixo
#define FAIXA_ISENCAO_IRRF 1903.98
#define TAXA_IRRF_PADRAO 0.075 // 7.5% simplificado acima da isenção
#define VALOR_VALE_TRANSPORTE_DIA 6.00
#define DIAS_TRABALHADOS_MES 22 // Assumindo um valor fixo

void RESUMO(float SALARIO_BRUTO){
	float DESCONTO_INSS = (SALARIO_BRUTO/100)* TAXA_INSS;
	
	float DESCONTO_IRRF = (SALARIO_BRUTO/100)* TAXA_IRRF_PADRAO;
	if(SALARIO_BRUTO <= FAIXA_ISENCAO_IRRF){
        DESCONTO_IRRF = 0;
	}
	
	float BENEFICIO_TRA = VALOR_VALE_TRANSPORTE_DIA * DIAS_TRABALHADOS_MES;
	
	float SALARIO_LIQUI = SALARIO_BRUTO - (DESCONTO_INSS + DESCONTO_IRRF) + BENEFICIO_TRA;
	
	printf("--- Resumo da Folha de Pagamento ---\n");
	printf("Salário Bruto: %.2f\n", SALARIO_BRUTO);
	printf("Desconto INSS: %.2f\n", DESCONTO_INSS);
	printf("Desconto IRRF: %.2f\n", DESCONTO_IRRF);
	printf("Benefício Vale-Transporte: %.2f\n", BENEFICIO_TRA);
	printf("------------------------------------\n");
	printf("Salário Líquido: %.2f\n", SALARIO_LIQUI);
	printf("------------------------------------\n");

}



#endif