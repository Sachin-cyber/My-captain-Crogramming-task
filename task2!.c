#include <stdio.h>
int main()
{
  float c,f;
  printf("Enter the temperature in celsius scale\n");
  scanf("%f",&c);
  f=((float)9*c/5)+32;
  printf("The temperature in fahrenheit scale is %f",f);
  return 0;
}
