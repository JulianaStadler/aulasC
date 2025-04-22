#ifndef JULIANA_H
#define JULIANA_H

void RECURSIVA(int num, int atual){
	printf("%d ", atual);
	
	if (num != atual){
		RECURSIVA(num, atual + 1);
	}
}


#endif