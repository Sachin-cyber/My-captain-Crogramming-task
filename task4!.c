#include <stdio.h>
int main()
{
  char fn[10],ln[10];
  printf("Enter your first name\n");
  scanf("%s",fn);
  printf("Enter your last name\n");
  scanf("%s",ln);
  int i,j,k,a;
  for(i=0;fn[i]!='\0';i++);
  for(j=0;ln[j]!='\0';j++);
  a=i+j+1;
  char s[a];
  for(k=0;k<a;k++)
  {
    if(k<=i-1)
    {
      s[k]=fn[k];
    }
    else
    {
      s[k]=ln[k-i-1];
    }
  }
  s[i]=' ';
  for(i=0;i<a;i++)
  {
    printf("%c",s[i]);
  }
  printf("\n");
  return 0;
}
