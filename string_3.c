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
strcpy(s2,s1);
printf("String 1 after copying is %s\n",s1);
printf("String 2 after copying is %s\n",s2);

}
