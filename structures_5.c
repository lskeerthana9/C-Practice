#include<stdio.h>
struct employee{
 char name[50];
 int id;
 int salary;
 };
void main(){
 int n;
 printf("Enter No.of Employees: ");
 scanf("%d",&n);
 struct employee s[n];
 for(int i=0;i<n;i++)
 {
    printf("Enter Employee %d ID:",i+1);
    scanf("%d",&s[i].id);
    printf("Enter Employee %d Name :",i+1);
    scanf("%s",s[i].name);
    //fgets(s[i].name,50,stdin);
    printf("Enter Employee %d Salary:",i+1);
    scanf("%d",&s[i].salary);
    printf("\n");
    }

for(int i=0;i<n;i++)
{
printf("Employee %d Details :\n",i+1);
printf("Name: %s\nID: %d\nSalary: %d\n",s[i].name,s[i].id,s[i].salary);
printf("\n");
}
}
