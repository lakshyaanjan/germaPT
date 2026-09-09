#include <stdio.h>
int count(int c);
int main()
{
    printf("Enter the number of whose digits are to be counted ");
    int i;
    scanf("%d",&i);
    int x=count(i);
    printf("\nThe number of digits is %d",x);
}
int count(int i)
{
    int m=0;
    while(i>0)
    {
        i/=10;
        m++;
    }
    return m;
}