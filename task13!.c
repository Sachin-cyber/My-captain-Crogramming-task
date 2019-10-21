#include <stdio.h>
int main()
{
  int n,i,max,min,a,b;
  printf("Enter the number of elements in the array\n");
  scanf("%d",&n);
  int ar[n];
  printf("Enter the numbers\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  max=ar[0];
  min=ar[0];
  for(i=0;i<n;i++)
  {
    if(max<ar[i])
    {
      a=ar[i];
      ar[i]=max;
      max=a;
    }
    if(min>ar[i])
    {
      b=ar[i];
      ar[i]=min;
      min=b;
    }
  }
  printf("Minimum of the numbers is %d and maximum of the numbers is  %d",min,max);
  return 0;
}
