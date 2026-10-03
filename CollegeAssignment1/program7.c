#include <stdio.h>
int isPrime(int n)
{
    int a=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        a++;
    }
    if(a==2)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (isPrime(n))
    {
        printf("The number is a prime number.\nThe prime numbers in the range are: ");
        for(int i=2;i<=n;i++)
        {
            if(isPrime(i))
            printf("%d ",i);
        }
    }
}