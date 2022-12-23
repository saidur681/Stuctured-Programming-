#include<stdio.h>
int main(){
     float x,y;

        printf("Please Enter The value of X Coordinate point : ");
            scanf("%f",&x);
        printf("Please Enter The value of Y Coordinate point : ");
            scanf("%f",&y);

        if(x>0 && y>0){
            printf("\nInputted Coordinate (%f,%f)Lies in 1st Quadrant",x,y);
        }
       else if(x<0 && y>0){
            printf("\nInputted Coordinate (%f,%f)Lies in 2nd Quadrant",x,y);
        }
       else if(x<0 && y<0){
            printf("\nInputted Coordinate (%f,%f)Lies in 3rd Quadrant",x,y);
        }
       else if(x>0 && y<0){
            printf("\nInputted Coordinate (%f,%f)Lies in 3rd Quadrant",x,y);
        }
        else if (x==0 && y==0){
            printf("\nInputted Coordinate (%f,%f)Lies in Quadrant center",x,y);
        }

    return 0;
}
