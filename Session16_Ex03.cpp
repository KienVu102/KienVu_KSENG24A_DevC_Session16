#include <stdio.h>

void ptr(int *a, int *b){
	printf("a=%d\n", *a);
	printf("b=%d\n", *b);
	int sum= *a + *b;
	printf("Tong hai so la: %d", sum);
	
}

int main(){
	int a=10;
	int b=2;
	ptr(&a, &b);
	
	
	return 0;
}
