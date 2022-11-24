/*This c program is If the ages of Arif and Joy are input through the
keyboard, write a program to determine the youngest of them.*/
#include<stdio.h>
int main(){
    int arifAge,joyAge;
    printf("Enter the Arif age: ");
      scanf("%d",&arifAge);
    printf("Enter the Joy age: ");
       scanf("%d",&joyAge);
if(arifAge>joyAge){
    printf("Arif is youngest than joy");
}
 else{
    printf("Joy is youngest than Arif");
 }
return 0;
}
