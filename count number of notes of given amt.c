//Count the No. of notes in given amount
#include<stdio.h>
void main()
{
	int r,n,x;
	printf("Enter the amount in rupees\n");
	scanf("%d",&r);
	printf("Please enter the notes in multiple of 10\n20\n50\n100\n200\n500\n2000\n");
	printf("Enter the Type of note\n");
	scanf("%d",&n);
	if(n==10)
    {
    	x=r/10;
    	printf("Total no. of %d rupees notes in %d rupees is %d",n,r,x);
	}
	if(n%10!=0)
	
	
 } 
