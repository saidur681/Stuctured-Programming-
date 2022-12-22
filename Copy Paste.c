#include<stdio.h>
int main(){
int j;

printf("Enter the number of elements to store in the array = ");
scanf("%d",&j);

float num1[j],num2[j];
for(int i=0;i<j;i++){
    printf("Element %d = ",i);
    scanf("%f",&num1[i]);
    num2[i]=num1[i];
}
printf("Elements of the first array:\n");
for(int i=0;i<j;i++){
    printf("%.2f\t",num1[i]);
}
printf("\n");
printf("Elements of the new array:\n");
for(int i=0;i<j;i++){
    printf("%.2f\t",num2[i]);
}
return 0;
}
