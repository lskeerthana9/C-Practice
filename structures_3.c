#include<stdio.h>
struct laptop{
 char name[50];
 int cost;
 };
void main(){
 struct laptop l;
 printf("Enter Laptop Company: ");
 fgets(l.name,50,stdin);
 printf("Enter Laptop Cost: ");
 scanf("%d",&l.cost);
 printf("Laptop Details: \n");
 printf("Company: %s\nCost: %dINR\n",l.name,l.cost);
 }
