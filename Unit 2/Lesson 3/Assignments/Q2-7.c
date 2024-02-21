#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);
    if (a<0)
        printf("Error!!! Factorial of negative number doesn't exist.");
    else if (a==0 || a==1)
        printf ("Factorial = 1");
    else{
    long long int f=1;
    for (int i=a; i>0; i--)
        f=f*i;
    printf("%d",f);
    }
}