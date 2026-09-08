/** Find the sum of individual digits of the given format
input
Enter a number: 12345
output
Sum of digits = 15 **/
#include<stdio.h>
int main(){
int x,y,sum;
sum =0;
printf("Enter a number: ");
scanf("%d",&x);
while(x>0)
{
y=x%10;
sum=sum+y;
x=x/10;
}
printf("Sum of digits = %d\n",sum);
return 0;
}
