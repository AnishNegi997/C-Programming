// print the name of the day of the week by giving input as week day number
#include<stdio.h>
void main()
{
	int w;
	printf("Enter the week day number\n");
	scanf("%d",&w);
	if(w==1)
	{
		printf("Monday");
	}
	else if(w==2)
	{
		printf("Tuesday");
	}
	else if(w==3)
	{
		printf("Wednesday");
	}
	else if(w==4)
	{
		printf("Thrusday");
	}
	else if(w==5)
	{
		printf("Friday");
	}
	else if(w==6)
	{
		printf("Saturday");
	}
	else if(w==7)
	{
		printf("Sunday");
	}
}
