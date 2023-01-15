#include<stdio.h>

int main ()
{
	int mark ;
	printf("enter the marks :");
	scanf("%d",&mark);
	
	if (mark <30 && mark > 0)
	{ printf("C");
	}
	
	else if (mark>= 30 && mark <70)
	{ printf ("B");
	}
	
	else if (mark>=70 && mark<90)
	{ printf ("A");
	}
	
	else if (mark>=90 && mark<=100)
	{ printf ("A++");
	}
	else 
	{ printf("invalid marks");
	}
	return 0 ;
}