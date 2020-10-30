#include <stdio.h>

int main(){
	char myString[] = {'A','L','G','O','R','I','T','M','O','S','\0'};
	char* pointer = &myString[0];
	while(*pointer != '\0'){
		printf("%c", *pointer);
		pointer++;
	}
	return 0;	
}

/**
 *Aritmética de apuntadores = desplazamiento en un conjunto
 *de memoria mediante un apuntador
 */

