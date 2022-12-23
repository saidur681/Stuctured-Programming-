
//This c program is implementing an BMI Calculator
#include<stdio.h>
int main(){
float BMI,weight, height,num;
  printf("Formulas:\n1.Kilograms and meters \n2.Pounds and inches\n\nPlease Choose any option:");
         scanf("%f",&num);
 if(num==1){
     printf("\nPlease enter your weight in kg: ");
         scanf("%f",&weight);
     printf("Please enter your height in meters:");
         scanf("%f",&height);
 BMI=weight / (height*height);
    printf("\nYour Body Mass Index (BMI) is=%f",BMI);
  if(BMI<18.5){
      printf("\n\nYour BMI status is:%.2f  Underweight",BMI);
   }
  else if(BMI>=18.5 && BMI<=24.9){
      printf("\n\nyour BMI status is:%.2f  Normal or Healthy Weight",BMI);
  }
   else if(BMI>25 && BMI<=29.9){
       printf("\n\nYour BMI status is :%.2f Overweight",BMI);
   }
   else{
       printf("\n\nyour BMI status is:%.2f Obese",BMI);
   }

 }
 else if (num==2){
     printf("\nPlease enter your weight in lbs: ");
         scanf("%f",&weight);
     printf("Please enter your height in inchis:");
         scanf("%f",&height);
 BMI=weight / (height*height) * 703;
 printf("\nYour Body Mass Index (BMI) is=%f",BMI);
  if(BMI<18.5){
      printf("\n\nYour BMI status is:%.2f  Underweight",BMI);
   }
  else if(BMI>=18.5 && BMI<=24.9){
      printf("\n\nyour BMI status is:%.2f  Normal or Healthy Weight",BMI);
  }
   else if(BMI>25 && BMI<=29.9){
       printf("\n\nYour BMI status is :%.2f Overweight",BMI);
   }
   else{
       printf("\n\nyour BMI status is:%.2f Obese",BMI);
   }
 }

  return 0;
 }
