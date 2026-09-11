#include <stdio.h>
int main()
{
    printf("Enter the number whose \"PRIMability\" is to be checked: ");
    int x;
    scanf("%d",&x);
    int c=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        c++;
    }
    if(c==2)
    printf("Prime number");
    else
    printf("Not a prime number");
}
