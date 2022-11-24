/* This c program is to determine the shortest route to your destination*/
#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the A route distance from your home to the shopping complex is: ");
      scanf("%f",&a);
    printf("Enter the B route distance from your home to the shopping complex is: ");
      scanf("%f",&b);
    if(a<b){
        printf("\nThe shortest route to your destination is A route");
    }else{
        printf("\nThe shortest route to your destination is B route");
    }

return 0;
}
