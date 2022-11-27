/*This c program is input a number and check number is positive, negative or neutral.*/
#include<stdio.h>
 int main(){
   int number;

   printf("Enter the number you want to check: ");
     scanf("%d",&number);

   if(number>0)
    {
    printf("The number is Positive");
    }
   else if(number<0){
    printf("The number is Negative");
   }
   else{
     printf("The number is Neutral");
   }

 return 0;
 }
