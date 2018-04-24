#include<stdio.h>
void main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n>=1&&n<=100000)
  {
  if(n<0)
  {printf("YOUR INPUT IS NEGATIVE");
  }
  else if(n=0)
  {
    printf("YOUR INPUT IS ZERO");
  }
  else
  {
    printf("YOUR INPUT IS POSITIVE");
  }}
  else
  {
    printf("Enter the number between 1 to 100000");
  }
}
