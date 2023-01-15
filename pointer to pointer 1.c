#include<stdio.h>

int main (){
	int i = 5;
	int *ptr;
	ptr = &i;
	int **pptr;
	pptr = &(ptr);
	
	printf("value = %d\n", **pptr);
	
	
	
	return 0;
}