//WAP to print if a number is a palindrome or not.
#include<stdio.h>
int main(){
int x,y,rem;
int rev=0;
printf("Enter a number: ");
scanf("%d",&x);
y=x;
while(x>0)
{
rem=x%10;
rev=(rev*10)+rem;
x=x/10;
}
if(y==rev){
printf("%d is a palindrome\n",y);
}
else{
printf("%d is not a palindrome\n",y);
}
return 0;
}

