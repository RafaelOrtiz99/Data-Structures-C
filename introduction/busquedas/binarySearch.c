#include <stdio.h>

//La búsqueda binaria requiere de un arreglo ordenada
//Es un algotitmo del tipo divide y venceras

int binarySearch(int Array[], unsigned int arraySize, int x){
	int leftBound = 0, rightBound = arraySize-1;
	while(leftBound < rightBound){
		int middle = (rightBound + leftBound)/2;
		if(Array[middle] == x) return middle; 
		else if(Array[middle]) < x) leftBound = middle + 1;
		else rightBound = middle - 1;
	}
	return -1;
}

// x = 1 +log2n
// complejidad = 0(log n)
