#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
printf("Enter String 1:\n");
gets(s1);
printf("Enter string 2:\n");
gets(s2);

if(strncmp(s1,s2,3)==0)
{
    printf("First 3 characters of string 1 are equal to first 3 characters of string 2.");
}
else
{
    printf("Not equal");
}


}
