#include <stdio.h>

void mensagem(int i);

int main(){
	for (int i = 0; i < 10; i++){
		mensagem(i);	
	}
	return 0;
}

void mensagem(int i){
	printf("%d - Aprendizagem Técnica em Desenvolvimento de Sistemas\n", i+1);
}