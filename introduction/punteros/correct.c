#include <stdio.h>
  2 
  3 void swap(int* a, int* b){
  4         int temp = *a;
  5         *a = *b;
  6         *b = temp;
  7 }
  8 
  9 int main(){
 10         int var1 = 16, var2 = 32;
 11         swap($var1, $var2);
 12         printf("var1=%d | var2=%d\n",var1,var2);
 13         return 0;
 14 }
