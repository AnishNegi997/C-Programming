//Calculation of electricity bill;
//Total BIll = amt+surcharges,(surcharges=20%)
#include<stdio.h>
void main()
{
	float u,amt;
	printf("Enter the unit\n");
	scanf("%f",&u);
	if(u>0&&u<=50)
	{
		amt=u*0.50;
		printf("Totalelectricity Bill = %.3f",amt+0.20*amt);
	}
	else if(u>50&&u<=150)
	{
		amt=50*0.50+(u-50)*0.75;
		printf("Total electricity Bill = %.3f",amt+0.20*amt);
	}
	else if(u>150&&u<=250)
	{
		amt=50*0.50+100*0.75+(u-150)*1.20;
		printf("Total electricity Bill = %.3f",amt+0.20*amt);
		
	}
	else
	{
		amt=50*0.50+100*0.75+100*1.20+(u-250)*1.50;
		printf("Total electricity Bill= %.3f",amt+0.20*amt);
	}
}
