#include<stdio.h>
#include<math.h>
int powe(int x, int y)
{
     int p = 1;
     for(int i =0; i<y; i++)
     {
        p*=x;
     }
     return p;
}
void arou_num(int num)
{
     int n=num,n2=num;
     int rem,sum=0;
     int count=0;
     while(n!=0)
     {
       count+=1;
       n/=10;
     }
     while(n2!=0)
     {
       rem= n2%10;
       sum = sum + powe(rem,count);
       n2=n2/10;
     }
     if(sum == num)
     {
      printf("YES\n");
     }
     else
     {
      printf("NO\n");
     }
     
}
int main()
{
     int n;
     scanf("%d",&n);
     arou_num(n);
     //int r = pow(n,2);
     //printf("%d",r);
     return 0;
}
