// Show the given no. is negative or possitive
#include<stdio.h>
void main()
{
	int n;
	printf("enter the number n :");
	scanf("%d",&n);
	//for no.greater than 0
	if(n>0)
	{
		printf("the given no.%d is positive",n);
	}
	//for no. less than 0
	else if(n<0)
	{
		printf("the given no. %d is negative",n);
	}
	//for zero
	else if(n=0)
	{
		printf("the given no. is neither negative nor positive");
	}
	// anything else another than zero
	else
	{
		printf("please enter no. only");
	}
}
