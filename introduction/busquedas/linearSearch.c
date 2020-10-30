#include <stdio.h>

int linearSearch(int Array[], unsigned int arraySize, int valueToSearch){
	int index;
	for(index = 0; index < arraySize; i++){
		if(Array[index] == valueToSearch) return index;
	}
	return -1;
}

// O(n) = 1 + 2n
