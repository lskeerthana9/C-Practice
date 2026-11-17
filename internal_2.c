#include<stdio.h>
int main() {
   int x,rem=0,pos=1,bin=0;
   scanf("%d",&x);
   while(x>0)
   {
      rem=x%2;
      bin=bin + rem*pos;
      x=x/2;
      pos=pos*10;
     }
    printf("%d\n",bin);
    return 0;
   }
   
