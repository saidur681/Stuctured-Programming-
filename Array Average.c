#include<stdio.h>
 int main(){
   int i,num[10],sum=0;
      for(i=0;i<10;i++){
        printf("enter the number:");
          scanf("%d",&num[i]);
      }

        sum +=num[i];

      printf("sum = %d",sum);
      printf("\naverage number =%d",sum/10);

 return 0;
 }
