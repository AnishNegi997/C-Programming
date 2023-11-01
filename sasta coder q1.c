// swap two numbers without using third variable

#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the two numbers\n");
	scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped numbers a and b are %d,%d",a,b);
}


