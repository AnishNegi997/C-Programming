// Number of days in a month
#include<stdio.h>
void main()
{
	int m;
    char l;
	printf("Enter the month number:\t");
	scanf("%d",&m);
	if(m==1)
	{	
		printf("Number of days = 31");
	}
    if(m==2)
	{
		printf("press 'Y' for Leap year\npress 'N' If not Leap year\n" );
		scanf("%c",&l);
		scanf("%c",&l);
		if(l=='y'||l=='Y')
		{
			printf("Number of days = 29");
		}
		else if (l=='n'||l=='N')
		{
			printf("Number of days = 28");
		}
	}
	else if(m==3)
	{
		printf("Number of days = 31");
	}
	else if(m==4)
	{
		printf("Number of days = 30");
	}
	else if(m==5)
	{
		printf("Number of days = 31");
	}
	else if(m==6)
	{
		printf("Number of days = 30");
	}
	else if(m==7)
	{
		printf("Number of days = 31");
	}
	else if(m==8)
	{
		printf("Number of days = 31");
	}
	else if(m==9)
	{
		printf("Number of days = 30");
	}
	else if(m==10)
	{
		printf("Number of days = 31");
	}
	else if(m==11)
	{
		printf("Number of days = 30");
	}
	else if(m==12)
	{
		printf("Number of days = 31");
	}
}

