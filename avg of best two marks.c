#include<stdio.h>
void main()
{
 float s1,s2,s3;
 printf("Enter the score of student in Test 1 :");
 scanf("%f",&s1);
 printf("Enter the score of student in Test 2 :");
 scanf("%f",&s2);
 printf("Enter the score of student in Test 3 :");
 scanf("%f",&s3);
 if (s1>s2>s3) 
 {
 printf("The avg of best two scores is : %f",(s1+s2)/2);
 }
 else if (s2>s3>s1)
 {
 	printf("The avg of best two scores is : %f",(s2+s3)/2);
 }
 else if (s3>s1>s2)
 {
 	printf("The avg of best two scores is : %f",(s3+s1)/2);
 }
}
