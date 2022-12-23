/*If integer variable currentNumber is odd,This program changes a integers value so that it is now
 3 times the value plus 1, otherwise change its value so that it is now half of the value*/
#include<stdio.h>;

int main(){
    int currentNumber;
printf("Enter the value:");
    scanf("%d",&currentNumber);
if(currentNumber %2==0){
    printf("The changed value is =%d",currentNumber/2);
}
else {
    printf("The changed value is=%d",(currentNumber*3)+1);
}
    return 0;
}
