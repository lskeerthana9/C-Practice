#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100]='\0';
printf("Enter String 1:\n");
fgets(s1,100,stdin);
for(int i=0;i<strlen(s1);i++)
{
      s2[strlen(s1)-i-1]=s1[i];
}
s2[strlen(s1)]='\0';
printf("Reverse of string 1 is %s\n",s2);


}
