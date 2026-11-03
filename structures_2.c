#include<stdio.h>
struct employee{
 char name[50];
 int id;
 int salary;
 };
void main(){
struct employee e;
printf("Enter Employee Name: ");
//scanf(" %s",e.name);
//fgets(e.name,50,stdin);
printf("Enter Employee ID :");
scanf("%d",&e.id);
printf("Enter Employee Salary: ");
scanf("%d",&e.salary);
printf("Employee Details: \n");
printf("Name: %s\nID: %d\nSalary: %dINR\n",e.name,e.id,e.salary);
}

