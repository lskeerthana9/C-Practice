#include<stdio.h>
struct laptop{
 char name[50];
 int cost;
 };
void main(){
 int n;
 printf("Enter No.of Laptops: ");
 scanf("%d",&n);
 struct laptop s[n];
 for(int i=0;i<n;i++)
 {
    
    printf("Enter Laptop %d Name :",i+1);
    //scanf("%s ",s[i].name);
    scanf(" %[^\n]",s[i].name);
    //fgets(s[i].name,50,stdin);
    printf("Enter Laptop %d Cost:",i+1);
    scanf("%d",&s[i].cost);
   
    }

for(int i=0;i<n;i++)
{
printf("Laptop %d Details :\n",i+1);
printf("Name: %s\nCost: %d\n",s[i].name,s[i].cost);
printf("\n");
}
}
