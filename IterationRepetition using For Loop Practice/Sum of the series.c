//this c program is calculate the sum of the series
#include<stdio.h>
int main(){
    int i,n,sum=0;

    printf("Enter the value of n :");
      scanf("%d",&n);

      for(i=9;i<=n;i=i+4)
      {
          sum = sum + i;
      }
 printf("The sum of series = %d",sum);

return 0;
}
