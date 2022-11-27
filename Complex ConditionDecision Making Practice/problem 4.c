#include<stdio.h>
int main(){
    int week_day;

    printf("Enter week number (1-7): ");
        scanf("%d", &week_day);

    //The first day of the week is Sunday
    if(week_day == 1){
        printf("Sunday");
    }
    else if(week_day == 2){
        printf("Monday");
    }
    else if(week_day == 3){
        printf("Tuesday ");
    }
    else if(week_day == 4){
        printf("Wednesday");
    }
    else if(week_day == 5){
        printf("Thursday");
    }
    else if(week_day == 6){
        printf("Friday");
    }
    else if(week_day == 7){
        printf("Saturday");
    }else{
        printf("\nInvalid Input!,,Please enter week number between 1-7.");
    }

    return 0;
}
