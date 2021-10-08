#include <stdio.h>
int main()
{
    int x;
    float a,b,c;
    printf("Enter a no.:");
    scanf("%f",&a);
    printf("Enter a no.:");
    scanf("%f",&b);
    printf("Operation Menu\n");
    printf("1.Addition\n2.Subtraction\n3.Multliplication\n4.Division\n");
    printf("Choose the operation:");
    scanf("%d",&x);
    switch(x){
        case 1: printf("Sum = %.0f",a+b);
            break;
        case 2: printf("Difference = %.0f",a-b);
            break;
        case 3: printf("Product = %.0f",a*b);
            break;
        case 4: printf("Quotient = %.2f",a/b);
            break;
        default: printf("Invalid input");
            break;
    }
    return 0;
}
