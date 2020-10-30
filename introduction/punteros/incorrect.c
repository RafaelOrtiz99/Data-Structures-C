#include <stdio.h>
 
void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int var1 = 16, var2 = 32;
	swap(var1, var2);
	printf("var1=%d | var2=%d\n",var1,var2);
	return 0;
}
