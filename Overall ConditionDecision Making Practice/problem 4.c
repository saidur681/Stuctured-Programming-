
//This c program is two number as user input and then provide various options to the user like sum, subtract, multiply, divide.
#include<stdio.h>
int main(){
int choice;
float num_1,num_2;

printf("Please enter the first number = ");
scanf("%f",&num_1);
printf("Please enter the second number = ");
scanf("%f",&num_2);
printf("What do you want to do with the inputted numbers?\n1. Calculate the summation\n2. Calculate the subtraction\n3. Calculate the multiplication\n4. Calculate the division \nPlease enter your choice = ");
scanf("%d",&choice);
if(choice==1){
    printf("The summation of %.2f and %.2f is = %.2f",num_1,num_2,num_1+num_2);
}else if(choice==2){
    printf("The subtraction of %.2f and %.2f is = %.2f",num_1,num_2,num_1-num_2);
}else if(choice==3){
    printf("The multiplication of %.2f and %.2f is = %.2f",num_1,num_2,num_1*num_2);
}else if(choice==4){
    printf("The division of %.2f and %.2f is = %.2f",num_1,num_2,num_1/num_2);
}else{
    printf("Envlaid");
}
return 0;
}
