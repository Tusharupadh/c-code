#include<stdio.h>

int main ()
{ int m,n;
printf("enter value of m and n");
scanf("%d %d\n",&m,&n);

int a[m][n];
	for (int i =0; i<m; i++)
	{
		for (int j =0; j<n; j++)
		scanf("%d",&a[i][j]);
		
	}
	for (int i =0; i<m; i++)
	{
		for (int j =0; j<n; j++)
		{
		if (i==j){
		
		printf("%d",a[i][j]);}
		else 
		printf(" ");}
		printf("\n");
		
	}
	return 0;
}