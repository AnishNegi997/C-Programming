#include<stdio.h>
#include<math.h>
int main()
{
	char ch;
	float a,b;
	printf("enter the operator\n");
	scanf("%ch",&ch);
	if(ch=='+')
	{
	    printf("enter the number a and b\n");
		scanf("%f %f",&a,&b);
	    printf("sum = %f",a+b);
	}
     else if (ch=='-')
    {
	    printf("enter the number a and b\n");
		scanf("%f %f",&a,&b);
		printf("sub = %f",a-b);
	}
	else if(ch=='*')
    {   printf("enter the number a and b\n");
		scanf("%f %f",&a,&b);
		printf("product = %f",a*b);
		
	}
	else if(ch=='/')
	{
		printf("enter the number a and b\n");
		scanf("%f %f",&a,&b);
		printf("quotient = %f",a/b);
	}
	
    else
    {
    	printf("please enter the valid operator");
	}
}
