// check wether a alphabet entered is vowel or consonant.
#include<stdio.h>
void main()
{
  char alph;
  printf("Enter the alphabet:\t");
  scanf("%c",&alph);
  if(alph>='a'&&alph<='z'||alph>='A'&&alph<='Z')
  { // for vowel a 
  	if(alph=='a'|| alph=='A')
  	{
  		printf("%c is vowel",alph);
  	}
	else if(alph=='e'||alph=='E')
  	{// for vowel e
  		printf("%c is vowel",alph);
  	}

    else if(alph=='i'|| alph=='I')
  	    {// for vowel i
  		printf("%c is vowel",alph);
  		}
  	
    else if(alph=='o'|| alph=='O')
  	    {// for vowel o
  		printf("%c is vowel",alph);
  		}

     else if(alph=='u'|| alph=='U')
  	    {// for vowel u
  		printf("%c is vowel",alph);
  		}
  	else
  		{
  			printf("%c is consonant",alph);
        }
    }
}

