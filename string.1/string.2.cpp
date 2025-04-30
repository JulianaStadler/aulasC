/*
2. Escreva um programa em C que faça o seguinte: 
Declare duas strings:
	senhaCorreta com o valor "senha123"
	senhaDigitada com um valor a ser lido do usuário. 
	
Com base no resultado da comparação, exiba uma das seguintes mensagens:
"Senha correta! Acesso permitido." (se as senhas forem iguais)
"Senha incorreta. Acesso negado." (se as senhas forem diferentes)
*/
#include <stdio.h>
#include <string.h>

int main(){
	char senhaCorreta[20] = "senha123", senhaDigitada[20];
	int resultado;
	
	
	printf( "-------------------\n"
			"       LOGIN       \n"
			"-------------------\n"
			"Usuario: AdminLegal\n"
			"Senha: ");
	fgets(senhaDigitada, sizeof(senhaDigitada), stdin);
	senhaDigitada[strlen(senhaDigitada)-1] = '\0';
	printf( "-------------------\n");
	
	resultado = strcmp(senhaCorreta, senhaDigitada);
	if(resultado == 0){
		printf("  Acesso Liberado  \n");
	}
	else{
		printf("   Acesso Negado   \n");
	}
	printf("-------------------\n");
	
	
	
	return 0;
}