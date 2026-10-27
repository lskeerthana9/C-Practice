#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
printf("Enter String 1:");
gets(s1);
printf("Enter string 2:");
gets(s2);
if (strcmp(s1,s2)==0)
{
    printf("Both strings are equal.");
}    
else
{
    printf("The strings are different.");
}
}
