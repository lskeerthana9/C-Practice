/** Prctice**/
#include<stdio.h>
int main(){
float std[5];
for(int i=0; i<5; i++)
{
printf("Enter marks os student %d : ", i+1);
scanf("%f",&std[i]);
}
printf("To display the marks of a student enter the student's roll number in  the designated space.\n");
int i;
char n;
display: 
printf("Roll Number (can only be between 1 to 5) :");
scanf("%d",&i);
switch(i){
case 1:
printf("Marks : %f\n",std[0]);
break;
case 2:
printf("Marks : %f\n ",std[1]);
break;
case 3:
printf("Marks : %f \n",std[2]);
break;
case 4:
printf("Marks : %f\n",std[3]);
break;
case 5:
printf("Marks : %f\n",std[4]);
break;
default:
printf("Enter Valid Roll Number");
}
printf("If you want to display other students marks also, enter 'd'.");
scanf("%c",&n);
if(n=='d'){
goto display;
}
return 0;
}

