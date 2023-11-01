// For getting Electricity Bill

#include<stdio.h>
#include<math.h>

int main()
{
	float n,Bill;
	printf("Enter the Number of units n");
	scanf("%f",&n);
	if (n>=0&&n<=50)
	{
		Bill=n*0.5;}
	else if  (n>=51&&n<=150)
		{
		
			 n=n-50;
			 Bill=n*0.9+25;
			 }
		else if (n>=151&n<=250 )
			{
				 	 n=n-150;
				Bill=115+1.2*n;
				}
				else
				{
						n=n-250;
				Bill=235-n*2.2;}
					printf("Your Electricity Bill is %f",Bill);
					return 0;
					
}
