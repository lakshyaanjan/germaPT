#include <stdio.h>
int rev(int i)
{
    int r=0;
    int b;
    while(i>0)
    {
        b=i%10;
        r=r*10+b;
        i/=10;
    }
    return r;
}
void check(int a,int b)
{
    if (a==b)
        printf("Palindrome");
    else
        printf("Not a palindrome");
    
}
int main()
{
    printf("Enter the number to be checked ");
    int x;
    scanf("%d", &x);
    int reve=rev(x);
    check(reve,x);
    
}