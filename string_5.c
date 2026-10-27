#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
char a;
printf("Enter String 1:\n");
gets(s1);
//printf("Enter string 2:\n");
//gets(s2);
printf("Enter a character:\n");
scanf("%c",&a);
printf("%s",strchr(s1,a));
}
