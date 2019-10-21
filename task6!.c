#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n,b,a=1,count=1,sum=0,c=1,d;
    printf("Enter a number\n");
    scanf("%d",&n);
    b=n;
    d=n;
    for(i=0;a!=0;i++)
    {
      a=n/10;
      n=n/10;
      if(a>0)
      {
        count++;
      }
    }
    for(i=0;c!=0;i++)
    {
      c=b%10;
      b=b/10;
      sum=sum+pow(c,count);
    }
    if(sum==d)
    {
      printf("%d is an Armstrong Number\n",d);
    }
    else
    {
      printf("%d is not an Armstrong Number\n",d);
    }
    return 0;
}
