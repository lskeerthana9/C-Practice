// WAP Print profit
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
      return 0;
   }
