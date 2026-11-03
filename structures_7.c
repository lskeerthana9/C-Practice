#include<stdio.h>
struct student{
 char name[50];
 int roll;
 float cgpa;
 int backlog;
 };
void main(){
struct student *s,st1;
s=&st1;
printf("Enter Student Name: ");
//scanf("%s",s.name);
//fgets(s.name,50,stdin);
scanf("%[^\n]",s->name);
printf("Enter Student Roll No. :");
scanf("%d",&s->roll);
printf("Enter Student CGPA:");
scanf("%f",&s->cgpa);
printf("Enter Student Backlogs:");
scanf("%d",&s->backlog);
printf("Student Details :\n");
printf("Name: %s\nRoll No.: %d\nCGPA: %.2f\nBacklogs: %d\n",s->name,s->roll,s->cgpa,s->backlog);
}
