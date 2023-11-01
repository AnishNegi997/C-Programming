// Calculate the squrt
#include<stdio.h>
void main()
{
	float N,n;
	int x;
	printf("Enter the number\t");
	scanf("%f",&N);
	printf("Enter the nth root\t");
	scanf("%d",&x);
	n=pow(N,1.0/x);
	printf("The %dth root of the number %f is %f \t",x,N,n);
}
