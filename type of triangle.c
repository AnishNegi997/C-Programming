// Check wether the given triangle is equilateral,isosceles or scalene;
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
	if((a==b&&a==c&&b==c)&&(a>0&&b>0&&c>0)&&(a+b>c||b+c>a||a+c>b))
	{
		printf("The given triangle is equialteral");
	}
	else	if((a>0&&b>0&&c>0)&&(a==b||b==c||a==c)&&(a+b>c||b+c>a||a+c>b))
	{
		printf("The given triangle is isosceles");
	}
	else	if((a!=b&&b!=c&&a!=c)&&(&a>0&&b>0&c>0)&&(a+b>c||b+c>a||a+c>b))
	{
       	printf("The given triangle is scalene");
	}
	else if(a==0&&b==0&&c==0)
	{
		printf("It is not a triangle");
	}
}
