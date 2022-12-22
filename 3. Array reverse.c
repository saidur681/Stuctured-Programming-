
#include<stdio.h>
int main(){
int j;

printf("Enter the number of elements to store in the array = ");
scanf("%d",&j);

int i,num[j];
for(i=0;i<j;i++){
    printf("Element %d = ",i);
    scanf("%d",&num[i]);
}
for(i=j-1;i>=0;i--){
    printf("%d \t",num[i]);
}
return 0;
}
