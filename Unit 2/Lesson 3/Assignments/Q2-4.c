int main()
{
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);
    if (a>0)
        printf("%.2f is a positive.",a);
    else if (a<0)
        printf("%.2f is a negative.",a);
    else
        printf("You entered zero.");
}