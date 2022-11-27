/*Write a C program to input basic salary of an employee and calculate its Gross salary*/
#include<stdio.h>

int main(){
   float basicSalary;

   printf("Please enter basic salary of an employee: "),
        scanf("%f",&basicSalary);

    if(basicSalary<=10000){
        printf("Employee Gross salary is=%f",(basicSalary+basicSalary*0.2+basicSalary*0.8));
    }
    else if(basicSalary<=20000){
        printf("Employee Gross salary is=%f",(basicSalary+basicSalary*0.25+basicSalary*0.9));
    }
    else if(basicSalary>20000){
        printf("Employee Gross salary is=%f",(basicSalary+basicSalary*0.30+basicSalary*0.95));
    }


return 0;
}
