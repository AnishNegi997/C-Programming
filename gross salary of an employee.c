// Calculating gross salary of an employee
#include<stdio.h>
void main()
{
	float bp,hra,da,gross;
	printf("Enter the basic pay :\n");
	scanf("%f",&bp);
	if(bp>0&&bp<=10000)
	{
		hra=20*(bp/100);
		da=80*(bp/100);
		gross=bp+hra+da;
		printf("Gross salary = %.3f",gross);
	}
	else if(bp>10000&&bp<=20000)
	{
		hra=25*(bp/100);
		da=90*(bp/100);
		gross=bp+hra+da;
		printf("Gross salary = %.3f",gross);
	}
	else if(bp>20000)
	{
		hra=30*(bp/100);
		da=95*(bp/100);
		gross=bp+hra+da;
		printf("Gross salary = %.3f",gross);
	}
}
