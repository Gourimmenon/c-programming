
#include <stdio.h>

int main()
{
    int a;
   
    printf("Enter a number:");
    scanf("%d",&a);

    int y = 0;
    int i = a;
    while(i!=0)
    {
        int r=i%10;
        y=y+(r*r*r);
        i=i/10;
    }
    if (a==y)
    {
        printf("It is an amstrong number");
    }
    else
    {
        printf("It is not an amstrong number");
    }
    return 0;
  
}
