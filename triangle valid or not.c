// Input angles of triangle and verify wether triangle is valid or not
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter the angle 'a' of triangle:\n");
	scanf("%f",&a);
	printf("Enter the angle 'b' of triangle:\n");
	scanf("%f",&b);
	printf("Enter the angle 'c' of triangle:\n");
	scanf("%f",&c);
	if(a+b+c==180&&a>0&&b>0&&c>0)
	{
		printf("The triangle is valid");
	}
	else
	{
		printf("The triangle is not valid");
	}
}
