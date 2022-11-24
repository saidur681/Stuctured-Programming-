/*This c program is determine whether a number is negative or not*/
#include<stdio.h>
int main(){
  float num;
  printf("Enter a number:");
    scanf("%f",&num);
  if(num<0){
    printf("The number is negative ");
  }else{
    printf("The number is not negative");
  }
return 0;
}
