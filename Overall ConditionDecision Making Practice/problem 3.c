#include<stdio.h>
int main(){
    int choice;
    float celcius,farenheit;
    printf("1.Celcius to Farenheit\n2. Farenheit to Celcious\nPlease enter your choice: ");
        scanf("%d",&choice);
    if(choice == 1){
        printf("Enter the temparature in celcius:");
            scanf("%f",&celcius);
        printf("\n%.2f celcius is %.2f farenheit",celcius,(celcius*9/5)+32);
    }
     if(choice == 2){
        printf("Enter the temparature in farenheit:");
            scanf("%f",&farenheit);
        printf("\n%.2f farenheit is %.2f celcius",farenheit,(farenheit-32)*5/9);
     }

  return 0;
}
