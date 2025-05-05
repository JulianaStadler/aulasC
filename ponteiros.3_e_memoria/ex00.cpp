#include <stdio.h>

int main(){
	int *look_do_dia_ptr , var = 53; //look_do_dia não é uma variável então ela não tem tipo 
	
	printf( "look_do_dia_prt é um ponteiro\n"
			"var é 53\n\n"
	);
	
	printf("O valor de var é %d\n", var);
	printf("O endereço de var é %p\n\n", &var);
	
	look_do_dia_ptr = &var;
	printf( "look_do_dia_prt recebe a posicao na memoria de var (virando um ponteiro com a informacao de onde esta var)\n"
			"var continua sendo uma variavel que contem 53\n\n"
	);
	
	
	printf("O ponteiro armazenado em look_do_dia é %p\n", look_do_dia_ptr); //sem **** 
	printf("O dado armazenado no ponteiro look_do_dia é %d\n", *look_do_dia_ptr); // com ***** faz mostrar a informação dentro do valor e não a posição na memoria
	printf("O endereço de look_do_dia é & %p (outro endereco)\n\n", &look_do_dia_ptr);
	
	printf( "look_do_dia_prt(ponteiro) aponta para a posição na memória de var\n"
			"var precisa do * para mostrar o valor nele que é 53\n"
			"sem o * mostraria somente o decimal do hexadecimal da posicao de var\n"
			"para trocar isso precisaria trocar %%d por %%p"
	);
	
	return 0;
}