#include<stdio.h>
void  _swap(int *x ,int *y);
int main(){
	int x =1  , y =2;
	_swap(&x, &y);
	printf(" x = %d , y = %d\n", x,y);
	
	return 0;
}

void _swap(int *x, int *y)
{
int t=  *x;
*x= *y;
*y = t;
}