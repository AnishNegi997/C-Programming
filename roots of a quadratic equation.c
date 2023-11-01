// find roots of a quadratic equation (a*x^2+b*x+c=0);
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	float x1,x2;
	printf("Enter the value of 'a':");
	scanf("%d",&a);
		printf("Enter the value of 'b':");
	scanf("%d",&b);
		printf("Enter the value of 'c':");
	scanf("%d",&c);
	printf("Quadratic Equation is (%d)*X^2+(%d)*X+(%d)\n",a,b,c);
	d=pow(b,2)-4*a*c;
	if(d==0)
	{
		x1=(-b/2*a);
		x2=x1;
		printf("The roots of are %f,%f",x1,x2);
	}
	else if(d<0)
	{
		printf("The roots of quadratic equation doesn't exist");
	}
	else if(d>0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
	
		printf("The roots are %f,%f",x1,x2);
	}
	
}
