#include <stdio.h>
int sum();
int main() {
    int x;
    x = sum();
    printf("%d",x);
    return 0;
     
    
	

}
int sum()
{
     int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    c=a+b;
    return c;
}

