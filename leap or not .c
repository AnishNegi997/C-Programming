 // Check wether a year is leap year or not 
 #include<stdio.h>
 void main()
 {
 	int y;
 	printf("Enter the year: ");
 	scanf("%d",&y);
 	if(y%4==0)
 	{
 		printf("The given year is leap year");
	 }
	 else
	 {
	 	printf("The given year is not a leap year ");
	 }
 }
