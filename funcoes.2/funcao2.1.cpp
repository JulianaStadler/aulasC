/*
1.Criar uma função que apresente o menor valor entre dois valores.
*/
#include <stdio.h>
void menor(int n1, int n2){
	if(n1 < n2){
		printf("O menor número é %d", n1);
	} else if (n2 < n1){
		printf("O menor número é %d", n2);
	} else{
		printf("Os números são iguais");
	}
}

int main(){
	int num1, num2;
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	menor(num1,num2);
	return 0;
}
