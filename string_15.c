/* s1 = helloworld
   s2=code
   pos=5 output:hellocodeworld*/
#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100],s3[100];
int pos;
printf("Enter String 1:\n");
fgets(s1,100,stdin);
printf("Enter string 2:\n");
fgets(s2,100,stdin);
printf("Enter position:");
scanf("%d",&pos);
//s3[100]=strchr(s1,s1[pos-1]);
for (int i=pos-1;i<strlen(s1);i++)
{
  s3[i]=s1[i];
  }
strcat(s2,s3);
printf("%s",s3);
printf("%s",s2);
char s4[100];
for (int i=0;i<pos;i++)
{
  s4[i]=s1[i];
  }
 strcat(s4,s2);
 printf("%s",s4);
 strcat(s4,s3);
 printf("%s%s",s4,strchr(s1,s1[pos-1]));



}
   
