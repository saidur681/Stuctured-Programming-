/* This c program is to determine whether a number is positive or not positive*/
#include<stdio.h>
int main(){
  float num;
  printf("Enter a number:");
    scanf("%f",&num);
  if(num>0){
    printf("The number is positive");
  }else{
    printf("The number is not positive");
  }
return 0;
}
