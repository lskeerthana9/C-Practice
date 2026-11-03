#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
printf("Enter String 1:\n");
fgets(s1,100,stdin);
printf("Enter string 2:\n");
fgets(s2,100,stdin);
printf("String 1 before copying: %s\n",s1);
printf("String 2 before copying: %s\n",s2);
//strncpy(s1,s2,3);
for(int i =0;i<3;i++)
{
      s1[i]=s2[i];
      }
printf("Copying first 3 characters of string 2 into string 1.\n");
printf("String 1 after copying: %s\n",s1);
printf("String 2 after copying: %s\n",s2);


}
