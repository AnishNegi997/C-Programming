/* Program for solving the given eqations:
F(x)=x^2+2,if 0<=x<=10
F(x)=x^2+2x,if 11<=x<=20
F(x)=x^3+2x^2,if 21<=x<=30
F(x)=0,ifx>30*/

#include<stdio.h>
int main()
{
 int x,fx;
 printf("Enter the value of x\n");
 scanf("%d",&x);
 if(x>=0&&x<=10)
 {
 fx=x*x+2;
 printf("the value of fx= %d",fx);
 }
 else if(x>=11&&x<=20)
 {
 	fx=x*x+2*x;
 	printf("the value of fx= %d",fx);
 }
else if(x>=21&&x<=30)
{
 fx=x*x*x+2*x*x;
 printf("the value of fx= %d",fx);
 } 
 else
 {
 	fx=0;
 	printf("the value of fx= %d",fx);
 }
 return 0;
}
	
