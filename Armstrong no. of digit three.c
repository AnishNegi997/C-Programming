// checking for armstrong number
#include<stdio.h>
#include<math.h>
void main()
{
	int n,d1,d2,d3;
	printf("Enter the three digit number\n");
	scanf("%d",&n);
	d1=n%10;
	d2=(n/10)%10;
	d3=(n/100);
	if(n==d1*d1*d1+d2*d2*d2+d3*d3*d3)
	{
		printf("The given number is an armstrong number");
	}
	else
	{
		printf("The given number is not a armstrong number");
	}
}
