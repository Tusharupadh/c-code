#include<stdio.h>

void square (int n);

void _square(int *n);

int main(){
//	int number = 7;
//	square(number);
//	printf("number = %d\n", number);
	
	int number = 6;
	_square (&number);
	printf(" number is %d\n", number);
	
	
	return 0;
}

void square (int n){
	n = n*n;
	printf(" square is %d\n", n);
	
	
}
void _square (int *n){
	*n = (*n) * (*n);
	printf ("square is %d", *n);
	
}