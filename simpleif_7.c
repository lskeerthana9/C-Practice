#include<stdio.h>
// Print pass or fail
int main(){
       int a;
       printf("Enter your marks: ");
       scanf("%d",&a);
       if(a>=38){
       printf("Pass\n");
       }
       if(a<38){
       printf("Fail\n");
       }
       return 0;
     }
