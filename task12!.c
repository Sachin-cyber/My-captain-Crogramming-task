#include <stdio.h>
void myFunction1()
{
  int temp;
  float ans;
  printf("Enter the value of temperature in Celsius scale\n");
  scanf("%d",&temp);
  ans=(float)9*temp/5+(32);
  printf("Its measure in Fahrenheit scale is %f\n",ans);
}
void myFunction2()
{
  int temp;
  float ans;
  printf("Enter the value of temperature in Fahrenheit scale\n");
  scanf("%d",&temp);
  ans=(float)5*(temp-32)/9;
  printf("Its measure in Celsius scale is %f\n",ans);
}

int main()
{
  int i,n=1;
  for(i=0;n!=3;i++)
  {
    printf("Enter 1 to convert Celsius to Fahrenheit\nEnter 2 to convert Fahrenheit to Celsius\nEnter 3 to exit\n");
    scanf("%d",&n);
    switch (n)
    {
      case 1:myFunction1();
      break;
      case 2:myFunction2();
      break;
    }
  }
}
