/** CHARACTERS USING ARRAYS **/
#include<stdio.h>
int main(){
char vow[5];
for(int i=0; i<5; i++)
{
printf("Enter a vowel : ");
scanf("%c",&vow[i]);
}
printf("The vowels stored in the array are: \n");
for(int i=0;i<5;i++)
{
printf("%c\n",vow[i]):
}
return 0;
}
