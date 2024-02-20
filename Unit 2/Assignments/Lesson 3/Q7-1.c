int main()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("After swapping, value of a = %d \n",a);
    printf("After swapping, value of a = %d",b);
}