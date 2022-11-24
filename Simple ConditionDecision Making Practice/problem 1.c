/*This c program is user input cost price and selling price .determine whether the
seller has made profit or incurred loss. Also determine how much profit
he made or loss he incurred*/
#include<stdio.h>
int main (){
   float costPrice,sellingPrice;

    printf("Enter the item cost price: ");
     scanf("%f",&costPrice);
    printf("Enter the item selling price: ");
     scanf("%f",&sellingPrice);
 if(costPrice<sellingPrice){
    printf("The seller has made profit is %f",sellingPrice-costPrice);
 }
 else{
    printf("The seller has incurred loss is %f",costPrice-sellingPrice);
 }

return 0;
}
