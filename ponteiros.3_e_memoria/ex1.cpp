/*
1) Troca de valores (swap)
Implemente uma funcao void swap(int *a, int*b) que troque os valores de duas variáveis
inteiras usando ponteiros.
*/
#include <stdio.h>

void swap(int *p1, int *p2) {
	int opa;
	
	opa = *p1;
    *p1 = *p2;
    *p2 = opa;
}

int main(){
	int *prt1, *prt2, x = 10, y = 20;
	prt1 = &x;
	prt2 = &y;
	
	printf("Antes: x=%d  y=%d\n", *prt1, *prt2);
	swap(prt1, prt2);
	printf("Depois: x=%d  y=%d\n", *prt1, *prt2);
	
	
	return 0;
}
