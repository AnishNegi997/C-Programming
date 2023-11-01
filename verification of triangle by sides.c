// Verification of triangle by given sides
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter the side 'a':");
	scanf("%f",&a);
	printf("Enter the side 'b':");
	scanf("%f",&b);
	printf("Enter the side 'c':");
	scanf("%f",&c);
	if(a+b>c||b+c>a||c+a>b&&a>0&&b>0&&c>0)
	{
		printf("The given triangle is valid");
	}
	else
	{
		printf("The given triangle is not valid");
	}
}
