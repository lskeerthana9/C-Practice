/**Check whether the giveen character is a vowel or not using switch
  input:                                Output:  
  Enter a character: A                  A is a vowel.
  input:                                Output:
  Enter a character: K                  k is not a vowel
  **/
  #include<stdio.h>
  int main(){
  char x;
  printf("Enter a character: ");
  scanf("%c",&x);
  switch (x){
    case 'A':
    printf("%c is a vowel\n",x);
    break;
    case 'a':
    printf("%c is a vowel\n",x);
    break;
    case 'E':
    printf("%c is a vowel\n",x);
    break;
    case 'e':
    printf("%c is a vowel\n",x);
    break;
    case 'I':
    printf("%c is a vowel\n",x);
    break;
    case 'i':
    printf("%c is a vowel\n",x);
    break;
    case 'O':
    printf("%c is a vowel\n",x);
    break;
    case 'o':
    printf("%c is a vowel\n",x);
    break;
    case 'U':
    printf("%c is a vowel\n",x);
    break;
    case 'u':
    printf("%c is a vowel\n",x);
    break;
    default:
    printf("%c is a not a vowel\n",x);
    }
    return 0;
    }
