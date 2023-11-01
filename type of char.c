// Program to read a character from keyboard from and finding it's type i.e. number,alphabet or symbol.
#include<stdio.h>
#include<math.h>
int main()
{
char ch;
printf("please enter a character from keyboard:\n");
scanf("%c",&ch);
if(ch>='0'&&ch<='9')
{
	// Condition for number
	printf("Entered value is number %c");
}
else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z') 
{
	// Condition for alphabet
	printf("Enterd value is alphabet %c",ch);
}
else
{
	// Condition for symbol
printf("Entered value is symbol");
}
return 0;
}
