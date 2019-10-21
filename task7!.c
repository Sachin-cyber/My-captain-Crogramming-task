#include <stdio.h>
int main()
{
  int i,a=1,j;
  char s[20];
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++);
  for(j=0;((j<i)&&(a==1));j++)
  {
     if(s[j]!=s[i-j-1])
     {
       a=0;
       printf("Not a palindrome\n");
     }
  }
  if(a==1)
  {
    printf("It's a palindrome\n");
  }
return 0;
}
