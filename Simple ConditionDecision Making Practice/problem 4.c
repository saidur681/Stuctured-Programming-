/*This c program is m to check whether a triangle is valid or not valid*/
#include<stdio.h>
int main(){
    float x,y,z,sum;
    printf("Enter the 1st angle of triangle: ");
       scanf("%f",&x);
    printf("Enter the 2nd angle of triangle: ");
       scanf("%f",&y);
    printf("Enter the 3rd angle of triangle: ");
        scanf("%f",&z);
  sum=x+y+z;
  if(sum=180){
    printf("\nTriangle is vaild");
  }
  else {
    printf("Triangle is not vaild");
  }

return 0;
}
