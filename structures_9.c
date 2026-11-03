#include<stdio.h>
struct laptop{
 char name[50];
 int cost;
 };
void main(){
struct laptop *l,lp1;
l=&lp1;
printf("Enter Laptop Name: ");
//scanf("%s",s.name);
//fgets(s.name,50,stdin);
scanf("%[^\n]",l->name);
printf("Enter Laptop Cost :");
scanf("%d",&l->cost);
printf("\n");
printf("Laptop Details :\n");
printf("Name: %s\nCost: %d INR\n",l->name,l->cost);
}
