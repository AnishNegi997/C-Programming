// Input marks and decide grade
#include<stdio.h>
void main()
{
	float phy,chem,bio,maths,comp,percent;
	printf("Enter the marks of physics\n :");
	scanf("%f",&phy);
    printf("Enter the marks of chemistry\n :");
	scanf("%f",&chem);
    printf("Enter the marks of biology\n :");
	scanf("%f",&bio);
    printf("Enter the marks of maths\n :");
	scanf("%f",&maths);
	printf("Enter the marks of computer\n :");
	scanf("%f",&comp);
	percent=(phy+chem+bio+maths+comp)/(500)*100;
	printf("percent=%0.2f%%\n ",percent);
	if(percent>=90)
	{
		printf("Grade A");
	}
	else if(percent>=80)
	{
		printf("Grade B");
	}
	else if(percent>=70)
	{
		printf("Grade C");
	}
	else if(percent>=60)
	{
		printf("Grade D");
	}
	else if(percent>=40)
	{
		printf("Grade E");
	}
	else if(percent<40)
	{
		printf("Grade F");
	}
}
