// calculate power using pow function
#include<stdio.h>
#include<math.h>
void main()
{
	int n,N,x;
	printf("Enter the digit\t");
	scanf("%d",&N);
	printf("Enter the power\t");
	scanf("%d",&x);
	n=pow(N,x);
	printf("The power %d of the number %d  is %d ",x,N,n);
}
