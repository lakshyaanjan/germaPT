#include <stdio.h>
int sumofdig(int n)
{
    int sum=0,temp;
    while(n>0)
    {
        temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    int a=n;
    while(a>9)
    {
        a=sumofdig(a);
    }
    printf("%d",a);
}