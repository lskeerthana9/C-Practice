#include<stdio.h>
int main(){
   int num, rows,a;
   printf("Enter a Number: ");
   scanf("%d",&num);
   printf("Number of rows: ");
   scanf("%d",&rows);
   a=1;
   while(a<=rows)
   {
   printf("%d x %d = %d\n",num,a,num*a);
   a++;
   }
   
  }

