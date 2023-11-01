// to find maximum between two numbers
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the Number a:");
	scanf("%d",&a);
	printf("Enter the Number b:");
	scanf("%d",&b);
	if(a>b&&b<a)
	{
		printf("The number a is greater than b");
	}
	else if(b>a&&a<b)
	
	{
		printf("The number a is smaller than b");
	}
	else if(a=b)
	{
		printf("Both the numbers are equala");
	}

	
}
