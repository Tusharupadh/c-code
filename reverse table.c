#include<stdio.h>

int main ()
{ int a ;
	printf("enter any number :");
	scanf("%d", &a);
	for (int i = 10 ; i>=1 ; i = i -1){
		printf("%d \n", a*i);	
	} 
	return 0;
}