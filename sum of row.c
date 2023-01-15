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
	
	for (int i =0; i<m;i++)
	{ int sum = 0;
		for (int j =0; j<n; j++)
		sum = sum + a[i][j];
		printf("sum of %d row = %d\n",i,sum);	
	}
	
	for (int i =0; i<n;i++)
	{ int sum = 0;
		for (int j =0; j<m; j++)
		sum = sum + a[j][i];
		printf("sum of %d column = %d\n",i,sum);	
	}
	
	return 0;
}