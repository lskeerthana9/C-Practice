#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
printf("Enter String 1:");
gets(s1);
printf("Enter string 2:");
gets(s2);
printf("Length of string 1 is %ld\n",strlen(s1));
printf("Length of string 2 is %ld\n",strlen(s2));
}
