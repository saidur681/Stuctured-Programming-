/*This c program is to check if the area of the triangle is greater
 than the perimeter of the triangle*/
 #include<stdio.h>
 int main(){
    float a,base,c,hight;
    printf("Enter the first side: ");
      scanf("%f",&a);
    printf("Enter the Sceond side: ");
      scanf("%f",&c);
    printf("Enter the base of triangle: ");
      scanf("%f",&base);
    printf("Enter the hight of triangle: ");
    scanf("%d",&hight);

if((0.5*base*hight)>(a*base*c)){
    printf("\nThe area of the triangle is greater than the perimeter of the triangle");
}else{
    printf("\nThe area of the triangle is not greater than the perimeter of the triangle");
    }

 return 0;
 }
