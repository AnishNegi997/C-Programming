//To find who among the three brothers is younger
#include<stdio.h>
int main()
{
	int r,s,g;
	printf("Enter the age of Ram\n\a");
	scanf("%d",&r);
	printf("Enter the age of Shyam\n\a");
	scanf("%d",&s);
	printf("Enter the age of Ghansyam\n\a");
	scanf("%d",&g);
	if(r<s&&r<g&&r>18)
	{
		printf("Ram is Younger\n");
		printf("Ram is eligible for driving license");
	}
	else if(s<r&&s<g&&s>18)
	{
		printf("Shyam is Younger\n");
		printf("Shyam is eligible for driving license");
	}
	else if(g<r&&g<s&&g>18)
	{
		printf("Ghansyam is Younger\n");
		printf("Ghansyam is eligible for driving license");
	}
	return 0;
}
