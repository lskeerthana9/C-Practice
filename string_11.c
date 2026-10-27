#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
printf("Enter String 1:\n");
gets(s1);
printf("Enter string 2:\n");
gets(s2);
printf("String 1 before concatination: %s\n",s1);
printf("String 2 before concatination: %s\n",s2);
strncat(s1,s2,3);
printf("concatinating first 3 characters of string 2 to string 1.\n");
printf("String 1 after concatination: %s\n",s1);
printf("String 2 after concatination: %s\n",s2);


}
