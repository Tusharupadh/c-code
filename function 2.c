#include<stdio.h>

void namesta();
void bonjour();

int main (){int a;
	printf("if indian enter 1 & if french enter 2:");
	scanf("%d",&a);
	if (a== 1)
	{namesta();
	}
	else {bonjour();
	}
	return 0;
}


void namesta(){
	printf("namesta\n");
	bonjour();
}
void bonjour()
{
	printf("bonjour \n");
	
}