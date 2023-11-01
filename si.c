// calculation of simple interest
#include<stdio.h>
void main()
{
	float p,r,t,SI;
	printf("Enter the principal amount\t");
	scanf("%f",&p);
	printf("Enter the rate (in %)\t");
	scanf("%f",&r);
	printf("Enter the time in years\t");
	scanf("%f",&t);
	SI=(p*r*t)/100;
	printf("The Simple Interest is %f\t",SI);
}

