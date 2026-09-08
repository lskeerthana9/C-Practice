//WAP TO PRINT REVERSE OF A GIVEN NUMBER
#include<stdio.h>
int main(){
int x,rem;
int rev=0;
printf("Enter a number: ");
scanf("%d",&x);
while(x>0)
{
rem=x%10;
rev=(rev*10)+rem;
x=x/10;
}
printf("Reverse = %d\n",rev);
return 0;
}

