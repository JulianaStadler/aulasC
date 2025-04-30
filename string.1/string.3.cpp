#include <stdio.h>
#include <string.h>

int main(){
	char restoBrasil[20] = "salsicha";
	char curitiba[20] = "vina";
	//troca de valores (strings)
	//strcpy(destino, fonte)
	
	printf( "O resto do Brasil diz %s\n"
			"Curitiba diz %s\n",
			restoBrasil, curitiba);
	
	printf("----------------MUDA----------------\n");
	strcpy(restoBrasil, curitiba);
	
	printf( "Agora, o resto do Brasil diz %s\n"
			"e Curitiba diz %s também",
			restoBrasil, curitiba);
	
	
	return 0;
}