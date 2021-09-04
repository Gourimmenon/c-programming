#include <stdio.h>

int main()
{

    float a,b,c,d,e,f,g,ans;
    printf("Enter a,b,c,d,e,f,g:\n");
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    
    ans = (a-b/c*d+e)*(f+g);
    
    printf(" Answer is = %f",ans);

    return 0;
}
