#include<stdio.h>
 int main (){
    int amount,h,f,t;
    printf("Please enter the withdraw amount : ");
        scanf("%d",&amount);
    h=amount/100;
      amount=amount%100;
    f=amount/50;
      amount=amount%50;
    t=amount/10;

printf("Note of 100 :%d",h);
printf("\nNote of 50 :%d",f);
printf("\nNote of 100 :%d",t);

return 0;
 }
