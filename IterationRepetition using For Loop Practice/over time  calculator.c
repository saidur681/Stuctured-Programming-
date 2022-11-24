#include<stdio.h>
int main (){
   int i,workingHours,overTime;
   float overtimePay;

   for (i=1;i<=10;i++)
   {
       printf("enter the working hours of employee number %d: ",i);
       scanf ("%d",&workingHours);
       if (workingHours>36){
           overTime = workingHours - 36;
           overtimePay= overTime * 120.00;
           printf("employee no %d overtime is %d hours and overtime pay is %.2f tk\n\n",i,overTime,overtimePay);
       }


        else
            printf("employee work for more than 40 hours to get over time pay\n\n");



   }
    return 0;
}
