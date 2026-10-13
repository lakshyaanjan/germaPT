#include <stdio.h>
int fi(int n)
{
    if (n==1)
    return 0;
    if( n==2)
    return 1;
    if (n==3)
    return 1;
    else
    return fi(n-1)+fi(n-2);
}
int main()
{
    printf("The fibonacci series for upto: ");
    int n;
    scanf("%d", &n);
    int x= fi(n);
    printf ("%d", x);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=fi(i);
    }
    printf("\nThe sum is %d", sum);
}
