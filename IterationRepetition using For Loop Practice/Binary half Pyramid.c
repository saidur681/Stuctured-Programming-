/*This C program is display a half pyramid
 consist of only Zeros and Ones.*/
#include<stdio.h>
int main(){
 int i,j,row;
   printf("Enter the number of rows:");
     scanf("%d",&row);

            for(i=1;i<=row;i++){
            for(j=0;j<i;j++){
            printf("%d",j%2);
            }
            printf("\n");
            }

return 0;
}
