#include <stdio.h>

int fibonacci(int x){
	if(x == 0){
		return 0;
	}
	else if(x == 1){
		return 1;
	}
	else if(x > 1){
		return fibonacci(x-1) + fibonacci(x-2);
	}
}

int fibonacciIterativo(int x){
	int a = 0, b = 1, c;
	int i;
	for(i = 0; i < x; i++){
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}


int main(){
	printf("Ingrese un numero: ");
	int numero;
	scanf("%i",&numero);
	int resultado = fibonacciIterativo(numero);
	printf("Fibonacci de %d es igual a: %d \n", numero, resultado);
	return 0;
}
