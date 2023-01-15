#include<stdio.h>

int main ()
{int n, o ;
	printf("enter any number : ");
	scanf("%d", &n);
	for (int i =1 ;i<=10; i++ ){
	n = n*i;
		printf("%d \n",n);
	}
	
	
	return 0;
}