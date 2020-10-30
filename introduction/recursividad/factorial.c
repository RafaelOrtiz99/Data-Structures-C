#include <stdio.h>

int factorial(int x){
	return x == 0 ? 1 : x * factorial(x-1);
}

int main(){
	int resultado = factorial(5);
	printf("El resultado es %d \n", resultado);
	return 0;
}


