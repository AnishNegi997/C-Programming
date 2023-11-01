// To find the largest no. among the three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number a\n");
	scanf("%d",&a);
	printf("enter the number b\n");
	scanf("%d",&b);
	printf("enter the number c\n");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("the number a is greater");
	}
	else if(b>a&&b>c)
	{
		printf("the number b is greater\n");
	}
	else if(c>a&&c>b)
	{
		printf("the number c is greater");
	}
	else
	{
	printf("please enter the numbers only");
    }
	return 0;
	}
