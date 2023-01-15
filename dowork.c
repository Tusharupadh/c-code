#include<stdio.h>
void dowork(int a, int b, int *sum , int *multiply, int *average);
int main(){
	int a =2; 
	int b= 4;
	int sum;
	int multiply;
	int average;
	
	dowork(a, b ,&sum,  &multiply , &average);
	printf("sum = %d \n  multiply = %d \n  average = %d\n",  sum , multiply ,average);
	
	return 0;
}
void dowork(int a, int b, int *sum, int *multiply, int *average){
	*sum = a+b;
	*multiply = a*b;
	*average = (a+b)/2;
	
}