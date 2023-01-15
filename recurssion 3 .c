#include<stdio.h>
int fact(int n);
int main (){
	printf("%d", fact(12));
	return 0;
}

int fact(int n){
	printf("calculate fact of n : %d\n",n);
	
int factNm1 = fact(n-1);
int factN = factNm1 * n;
return factN;	
}