#include <stdio.h>
void sum(int,int);
int main() {
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    sum(a,b);
    return 0;
     
    
	

}
void sum(int x,int y)
{
    printf("Addition is %d",(x+y));
}


