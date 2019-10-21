#include <stdio.h>
int main()
{
  int i,a=1,n;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(i=0;n!=0;i++)
  {
      a=n%10;
      n=n/10;
      printf("%d",a);
  }
  return 0;
}
