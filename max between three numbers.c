// to find maximum between three numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the Number a:");
	scanf("%d",&a);
	printf("Enter the Number b:");
	scanf("%d",&b);
	printf("Enter the Number c:");
	scanf("%d",&c);

	if(a>b)
	{
		if(b>c)
		{

		printf("max=%d",a);
	    }
	    else
	    {
	    	printf("max=%d",c);
		}
	}
	else
	{
		if (b>c)
	    {
			printf("max=%d",b);
	    }
	    else
	    {
	    	printf("max=%d",c);
		}
	}
	
	
	}

