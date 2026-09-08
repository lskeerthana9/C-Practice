#include<stdio.h>
int main(){
      int buy, sell;
      printf("Enter your buying price: ");
      scanf("%d",&buy);
      printf("Enter your selling price:");
      scanf("%d",&sell);
      if(sell>buy){
      printf("Profit\n");
      }
      if(sell<buy){
      printf("Loss");
      }
      return 0;
   }
