#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
printf("Enter String 1:\n");
fgets(s1,100,stdin);
//printf("Enter string 2:\n");
//gets(s2);
printf("Reverse of string 1 is %s",strrev(s1));
}
