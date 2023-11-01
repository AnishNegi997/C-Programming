// Calculation of profit and loss;
#include<stdio.h>
void main()
{
	float sp,cp,p,l;
	printf("Enter the Cost price'cp':");
	scanf("%f",&cp);
	printf("Enter the Selling price'sp':");
	scanf("%f",&sp);
	if(sp>cp)
	{
		p=(sp-cp)*(100)/(cp);
		printf("profit = %f%%",p);
	}
	else if(cp>sp)
	{
		l=(cp-sp)*(100)/(cp);
		printf("loss = %f%%",l);
	}
	else if(cp=sp)
	{
		printf("No loss or profit");
	}
}
