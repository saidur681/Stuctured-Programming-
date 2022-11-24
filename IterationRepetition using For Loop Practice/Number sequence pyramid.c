//this c program is display number sequence pyramid
#include<stdio.h>
int main(){
int i,j,row;

printf("Enter the number of rows = ");
scanf("%d",&row);

for(i=1;i<=row;i++){
    for(j=0;j<i;j++){
        printf("%d",i+j);
    }
    printf("\n");
}
return 0;
}
