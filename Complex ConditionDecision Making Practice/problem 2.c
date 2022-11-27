
#include<stdio.h>
int main ( ){
   printf("\t\Menu in restaraunt");
   int number;
      printf("\n\n1.fried Rise,\n2.Garlic nun,\n3.Orange juice,\n4.Lemon juice,\n5.Cold coffe");
      printf("\n\nChoose your item: ");
      scanf("%d",&number);

      if (number ==1){
          printf("\n\nYour fried rise will be ready" );
          scanf("%d",1);
      }
       else if (number==2){
           printf("\nYour Garlic nun will be ready");
           scanf("%d",2);
       }
      else if (number ==3){
          printf("\nYour Orange juice will be ready" );
          scanf("%d",3);
      }
      else if(number==4){
          printf("\nYour Lemon juice will be ready");
          scanf("%d",4);
      }
      else if(number==5){
          printf("\nYour Cold Coffee will be ready");
          scanf("%d",5);
      }
      else{
          printf("\n Sorry sir,,Write now Item is not available");
      }

   }
