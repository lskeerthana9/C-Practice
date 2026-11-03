#include<stdio.h>
struct student{
 char name[50];
 int roll;
 float cgpa;
 int backlog;
 };
void main(){
 int n;
 printf("How many students : ");
 scanf("%d",&n);
 struct student s[n];
 for(int i=0;i<n;i++)
 {
    printf("Enter Student %d Roll No. :",i+1);
    scanf("%d",&s[i].roll);
    printf("Enter Student %d Name :\n",i+1);
    scanf("%s ",s[i].name);
    //fgets(s[i].name,50,stdin);
    printf("Enter Student %d CGPA:",i+1);
    scanf("%f",&s[i].cgpa);
    printf("Enter Student %d Backlogs:",i+1);
    scanf("%d",&s[i].backlog);
    printf("\n");
    }

for(int i=0;i<n;i++)
{
printf("Student %d Details :\n",i+1);
printf("Name: %s\nRoll No.: %d\nCGPA: %.2f\nBacklogs: %d\n",s[i].name,s[i].roll,s[i].cgpa,s[i].backlog);
}
}
 
