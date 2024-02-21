#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter operator either + or - or * or divide : ");
    char x;
    float a,b;
    scanf("%c",&x);
    printf("Enter two operands : ");
    scanf("%f %f",&a,&b);
    switch (x)
    {
    case '+':
        printf("%.2f %c %.2f = %.2f",a,x,b,a+b);
        break;
    case '-':
        printf("%.2f %c %.2f = %.2f",a,x,b,a-b);
        break;
    case '*':
        printf("%.2f %c %.2f = %.2f",a,x,b,a*b);
        break;
    case '/':
        printf("%.2f %c %.2f = %.2f",a,x,b,a/b);
        break;
    default:
        break;



    }
}
