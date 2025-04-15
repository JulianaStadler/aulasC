#ifndef MEDIDAS_H
	#define MEDIDAS_H
	
void medidas() {
    int opcao;
    float valor;

    printf("Escolha a conversao:\n");
    printf("1 - Centimetros para metros\n");
    printf("2 - Metros para centímetros\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    switch (opcao){
    	case 1:
        	printf("%.2f cm = %.2f m\n", valor, valor / 100.0);
    		break;
    	case 2:
        	printf("%.2f m = %.2f cm\n", valor, valor * 100.0);
    		break;
    	default:
        	printf("Opção invalida!\n");
    		break;
	}
}

void volume() {
    int opcao;
    float valor;

    printf("Escolha a conversao:\n");
    printf("1 - Litros para mililitros\n");
    printf("2 - Mililitros para litros\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);

	switch (opcao){
    	case 1:
        	printf("%.2f L = %.2f mL\n", valor, valor * 1000.0);
    		break;
    	case 2:
        	printf("%.2f mL = %.2f L\n", valor, valor / 1000.0);
    		break;
    	default:
        	printf("Opção invalida!\n");
    		break;
	}
}


void moeda() {
    int opcao;
    float valor, cotacao;

    printf("Digite a cotacao do dolar (1 USD = quantos BRL): ");
    scanf("%f", &cotacao);

    printf("Escolha a conversao:\n");
    printf("1 - Real para dolar\n");
    printf("2 - Dólar para real\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);
    
	switch (opcao){
    	case 1:
        	printf("R$ %.2f = US$ %.2f\n", valor, valor / cotacao);
    		break;
    	case 2:
        	printf("US$ %.2f = R$ %.2f\n", valor, valor * cotacao);
    		break;
    	default:
        	printf("Opção invalida!\n");
    		break;
	}
}
	
#endif