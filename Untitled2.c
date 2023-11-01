#include<stdio.h>
int main()
{
	float Gross,BP,HRA,TA,DA;
	printf("Enter the Basic Pay");
	scanf("%f",&BP);
	HRA=0.1*BP;
	TA=0.05*BP;
	DA=0.15*BP;
	Gross=BP+HRA+TA+DA;
	printf("%f",Gross);
	return 0;
	
	
	}
