// Check wether a number is prime number or not
#include<stdio.h>
int main()
{
	int N,n;
	printf("Enter possitive  number\n\a");
	scanf("%d %d",&N,&n);
	if(N%n!=0&&N%n!=1&&N>0&&n>0)
	{
		printf("The given number is a Prime number\a");
	}
	else if(N%n==0&&N<0&&n<0)
	{
		printf("The given number is not a prime number\a");
	}
	else
	{
		printf("The given number is not a prime number\a");
	}
	
	return 0;
}
