#include <stdio.h>
int sum(int,int);
int main() {
    int a,b,x;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    x=sum(a,b);
    printf("Addition is %d",x);
    return 0;
     
    
	

}
int sum(int x,int y)
{
    int c;
    c = x+y;
    return c;
}

