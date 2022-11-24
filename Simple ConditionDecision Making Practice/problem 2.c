/*This c program is Any integer is input through the keyboard. Write a
 program to find out whether its an odd number or even number*/
#include<stdio.h>
int main(){
  int num;
   printf("Enter a number: ");
     scanf("%d",&num);
if(num%2==0){
    printf("\nThe number is Even");
}
else{
    printf("\nThe number is Odd");
}

return 0;
}
