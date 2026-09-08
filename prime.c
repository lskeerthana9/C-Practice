/** Check whether the given number is prime or not
input                      output
Enter a number: 17         17 is a prime number.
Enter a number: 15         15 is nota prime number. **/
#include<stdio.h>
int main(){
int count,x;
count=0;
printf("Enter a number: ");
scanf("%d",&x);
for(int i=1;i<=x;i++)
{
    if(x%i==0){
    count ++;
    }
}
if(count == 2)
{
printf("%d is a prime number\n",x);
}
else{
printf("%d is a not prime number\n",x);
}
return 0;
}
