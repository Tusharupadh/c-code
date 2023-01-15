#include<stdio.h>
int fact(int n);
int main ()
{ 

	printf("%d",fact(10));


	return 0;
}

int fact(int n){
	if (n==0){
		return 1;
	}
int	facNm1 = fact(n-1);
int factN = facNm1 * n;
return factN;
}