#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Largest number is: %.2f",a>b? (a>c? a:c):(b>c? b:c));

}