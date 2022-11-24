/*This  program to calculate the factorial of N1 and n2 numbers and
finally sum the factorials of these numbers as output. (Just use for loop to do this)*/
#include<stdio.h>
int main ()
{
    int num1,num2,i,j,sum,fact1=1,fact2=1;
    printf("Enter 1st number(N1):");
    scanf("%d",&num1);
    printf("Enter 2nd number(N2):");
    scanf("%d",&num2);
    if((num1>=0 && num1<=20)&&(num2>=0 && num2<=20))
    {
        for(i=1; i<=num1; i++)
        {
            fact1 = fact1 * i;
        }
        for(j=1; j<=num2; j++)
        {
            fact2 = fact2 * j;
        }
        sum = fact1 + fact2;
              printf("Sum the factorials of %d and %d numbers=%d",num1,num2,sum);
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
