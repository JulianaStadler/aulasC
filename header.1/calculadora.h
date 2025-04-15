#ifndef CALCULADORA_H
	#define CALCULADORA_H
	
	float soma(float a, float b) {
	    return a + b;
	}
	
	float subtracao(float a, float b) {
	    return a - b;
	}
	
	float multiplicacao(float a, float b) {
	    return a * b;
	}
	
	float divisao(float a, float b) {
	    if (b != 0) {
	        return a / b;
	    } else {
	        printf("Erro: Divisão por zero não permitida.\n");
	        return 0;
	    }
	}
	
#endif