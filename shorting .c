#include<stdio.h>

int main(){
	int n;
	printf("enter number");
	scanf("%d",&n);
	int a[n];
	for (int i =0; i<n ;i++)
	{
		
		scanf("%d",&a[i]);
	}
	
	for (int i =0; i<n; i++)
	{
		for (int j =0; j<n ; j++)
		{
			if (a[j]>=a[j+1])
		{
		int d = a[j+1];
		a[j+1]=a[j];
		a[j]=d;
	}
		}
	}
	
	for (int i =0; i<n; i++ )
	{printf("%d",a[i]);
	}
	return 0;
}