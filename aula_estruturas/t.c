#include <stdio.h>

struct X
{
char a;
char b;
int *c;
};

struct Y
{
char a;
int *c;
char b;
};

int main()
{
  int x = sizeof(struct X);
  int y = sizeof(struct Y);
  printf("%i %i\n", x, y);
}
