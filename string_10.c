#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
printf("Enter String 1:\n");
gets(s1);
printf("Enter string 2:\n");
gets(s2);
printf("String 1 before copying: %s\n",s1);
printf("String 2 before copying: %s\n",s2);
strncpy(s1,s2,3);
printf("Copying first 3 characters of string 2 into string 1.\n");
printf("String 1 after copying: %s\n",s1);
printf("String 2 after copying: %s\n",s2);


}
