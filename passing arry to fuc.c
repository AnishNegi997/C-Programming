// passing functions as arguments
#include<stdio.h>
void func(int*arr1)
{
    for(int i=0;i<=3;i++)
    {
        printf("%d\n",*(arr1+i));
    }
    *(arr1+2)=4567;
}
void main()
{
    int arr[]={1,2,3,4};
    for(int i=0;i<=3;i++)
    {
        printf("The value of %d is %d\n",i,arr[i]);
    }
    func(arr);
    printf(" The value of 2 is %d",arr[2]+2);
}

