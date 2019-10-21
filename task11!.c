#include <stdio.h>

struct book
{
  char title[20];
  char author[20];
  char genre[20];
};
struct book input()
{
  struct book b;
  printf("Enter the title of the book\n");
  scanf("%s",&b.title);
  printf("Enter the author of the book\n");
  scanf("%s",&b.author);
  printf("Enter the genre of the book\n");
  scanf("%s",&b.genre);
  return (b);
}
void display(struct book b)
{
  printf("The title of your book is %s\nThe author of your book is %s\nThe genre of your book is %s\n\n",b.title,b.author,b.genre);
}
int main()
{
  struct book b1;
  b1=input();
  display(b1);
}
