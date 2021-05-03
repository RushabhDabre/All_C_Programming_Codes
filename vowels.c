#include<stdio.h>

int main()
{
  char ch;
  int lowr_case,upr_case;


  printf("Enter a character: ");
  scanf("%c",&ch);

  lowr_case = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' );
  upr_case = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' );
  
  if (lowr_case || upr_case)
  {
    printf("The character is Vowel", ch);
  }

  else
  {
    printf("The character is Consonent", ch);
  }
  
  
  return 0;
}
