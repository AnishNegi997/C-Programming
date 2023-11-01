//year is leap or not
#include<stdio.h>
void main()
{

int year;
printf("Enter the year:");
scanf("%d",&year);
if(year%4==0)
{
	printf("it is a leap year");
}
else
{
	printf("it is not a leap year");
}
}
