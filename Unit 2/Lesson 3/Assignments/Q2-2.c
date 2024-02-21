#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter an alphabet: ");
    char x;
    scanf("%c",&x);
    if (x=='a' || x=='e' ||x=='i' ||x=='o' ||x=='u' ||x=='A' || x=='E' ||x=='I' ||x=='O' ||x=='U')
        printf ("%c is a vowel.",x);
    else
    printf ("%c is a constant.",x);


}
