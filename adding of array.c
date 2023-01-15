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
	int b[m][n];
	for (int i =0; i<m; i++)
	{
		for (int j =0; j<n; j++)
		scanf("%d",&b[i][j]);
	}
	int c[m][n];
	for (int i =0; i<m; i++)
	{
		for (int j =0; j<n; j++)
	 {
	 c[i][j]=a[i][j]+b[i][j];
	 printf("%d",c[i][j]);}
	 printf("\n");
	}
	
	return 0;
}
	
	