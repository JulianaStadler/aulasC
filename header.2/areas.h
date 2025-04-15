#ifndef AREAS_H
	#define AREAS_H
	#define PI 3.14159

	void salva3(float num[]) {
	    printf("Digite tamanho do primeiro lado: ");
	    scanf("%f", &num[0]);
	
	    printf("Digite tamanho do segundo lado: ");
	    scanf("%f", &num[1]);
	
	    printf("Digite tamanho do terceiro lado: ");
	    scanf("%f", &num[2]);
	}
	
	void salva2(float num[]) {
	    printf("Digite tamanho do primeiro lado: ");
	    scanf("%f", &num[0]);
	
	    printf("Digite tamanho do segundo lado: ");
	    scanf("%f", &num[1]);
	}
	
	int retangulo() {
	    float lados[2];
		salva2(lados);
		printf("Os lados digitados %.2f e %.2f se referem a um retangulo de area %.2f\n", lados[0], lados[1], lados[0] * lados[1]);
		return 0;
	}
	
	
	int triangulo() {
	    float lados[3];
		salva3(lados);
	
		if((lados[0] + lados[1] > lados[2]) && (lados[0] + lados[2] > lados[1]) && (lados[1] + lados[2] > lados[0])){
			float s = (lados[0] + lados[1] + lados[2]) / 2.0;
    		float area = sqrt(s * (s - lados[0]) * (s - lados[1]) * (s - lados[2]));
    		
	    	printf("Os lados digitados: %.2f, %.2f, %.2f se referem a um triangulo ", lados[0], lados[1], lados[2]);
    		if (lados[0] == lados[1] && lados[1] == lados[2]) {
	    		printf("equilatero");
	    		
		    } else if (lados[0] == lados[1] || lados[0] == lados[2] || lados[1] == lados[2]) {
	    		printf("isosceles");
	    		
		    } else {
	    		printf("escaleno");	
		    }
	    	printf(" de area %.2f\n", area);
	    	
		} else {
	    	printf("Os lados digitados: %.2f, %.2f, %.2f não se referem a um triangulo\n", lados[0], lados[1], lados[2]);
		}
		
	    return 0;
	}
	
	int elipse() {
	    float lados[2];
		salva2(lados);
		printf("Os lados digitados %.2f e %.2f se referem a um elipse de area %.2f\n", lados[0], lados[1], PI * lados[0] * lados[1]);
		return 0;
	}
	
#endif