//This C program is make a leap year calculator
#include<stdio.h>
 main( ){
     int year;
 printf("Please entar a year: ");
     scanf("%d",&year);
 if(year % 400 ==0){
     printf("\n%d is a leap year",year);
 }
 else if(year % 100==0){
     printf("\n%d is not a leap year",year);
 }
 else if (year % 4 ==0) {
     printf("\n%d is a leap year",year);
 }
 else {
     printf("\n%d is not a leap year",year);
 }
 return 0;
 }
