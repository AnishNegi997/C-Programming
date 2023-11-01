// Gross Salary
#include<stdio.h>
void main()
{
	float bp,hra,ta,da,gross;
	printf("enter the basic pay");
	scanf("%f",&bp);
	hra=bp*10/100;
	ta=bp*5/100;
	da=bp*15/100;
	gross=bp+hra+ta+da;
	printf("Gross salary is %f",gross);
}
