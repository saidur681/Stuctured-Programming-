//This c program is display reverse “A” Pyramid
#include<stdio.h>
int main(){
 int i,j,row;
   printf("Enter the number of rows:");
     scanf("%d",&row);

            for(i=row;i>0;i--){
            for(j=0;j<i;j++){
            printf("A");
            }
            printf("\n");
            }

return 0;
}


