/*This c program is Take 10 integers from keyboard using loop and print
 their average value on the screen*/
#include<stdio.h>
main(){
    int number,sum=0;
    float average;
    for (int i=1;i<=10;i++){

         printf("Enter a integer Number= ");
        scanf ("%d",&number);
       sum=sum + number;
    }
average = (float)sum / 10;
printf ("The average of 10 number is:%.2f",average);


return 0;
}
