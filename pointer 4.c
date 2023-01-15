#include<stdio.h>
void printaddress(int *n);
int main(){ 
int n =5;
	printf("adress = %u", &n);
	printaddress(&n);
	
	return 0;
}

void printaddress(int *n){
	printf("address = %u", n);
	
}