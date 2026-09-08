#include<stdio.h>
// WAP to print possitive or negative number.
int main(){
      int a;
      printf("Enter a number:");
      scanf("%d",&a);
      if(a>0){
      printf("Possitive Number\n");
      }
      if(a==0){
      printf("Zero\n");
      }
      if(a<0){
      printf("Negative Number\n");
      }
      return 0;
 }
