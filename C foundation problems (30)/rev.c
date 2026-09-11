#include <stdio.h>
int rev(int i);
int main()
{
    int i;
    printf("Enter the number to be reversed ");
    scanf("%d",&i);
    int x=rev(i);
    printf("%d",x);

}
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
