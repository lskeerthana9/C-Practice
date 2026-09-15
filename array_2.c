/** WAP TO STORE AND DISPLAY THE ROLL UMBERS OF 5 STUDENTS
CASE 2: DYNAMIC ASSIGNEMNT**/
#include<stdio.h>
int main(){
int roll[5];
printf("Enter roll numbers of the 5 students: \n");
for(int i =0; i<5; i++)
{
scanf("%d",&roll[i]);
}
printf("The stored roll numbers are:\n");
for(int i=0; i<5; i++)
{
printf("%d\n",roll[i]);
}
return 0;
}


