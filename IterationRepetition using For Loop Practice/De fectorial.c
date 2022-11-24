/*This c program is find the factorial value of any number
 entered through the keyboard*/
#include<stdio.h>
int main()
{
  int num,i,fact = 1;
  printf("enter a number to find its factorial:");
      scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
      fact = fact * i;
  }
  printf("number %d of factorial value is %d",num,fact);

    return 0;
}

