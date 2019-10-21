#include <stdio.h>
int main()
{
  int a,b,c,sum;
  float average;
  printf("Enter your marks of 3 subjects\n");
  scanf("%d %d %d",&a,&b,&c);
  sum=a+b+c;
  average=(float)sum/3;
  printf("Your total sum is %d and average is %f",sum,average);
  return 0;
}
