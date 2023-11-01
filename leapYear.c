// Program to Display wether a year entered is Leap Year or Not 
#include<stdio.h>
#include<math.h>
void main()
{
	int Y;
	printf("Enter the Year Y:");
	scanf("%d",&Y);
	if (Y%4==0)
	{
		// Condition for Leap Year
		printf("The Year Y is a Leap Year");
	}
	else
	{
		// Condition for not a Leap Year
		printf("The Year Y is not a Leap Year");
	}
}
