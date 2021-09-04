#include <stdio.h>
#define func(x) (2*x)
int main()
{
  int y,z;
  y=func(4);
  printf("%d\n",y);
  #define func(x) (3*x)
  z=func(4);
  printf("%d",z);
    return 0;
}

