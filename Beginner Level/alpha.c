#include<stdio.h>
#include<ctype.h>
int main()
{
  char letter;
  scanf("%c",&letter);
  if(isalpha(letter)==0)
  {
    printf("No");
  }
  else
  {
    printf("Yes");
  }
  return 0;
}
