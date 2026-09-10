#include <stdio.h>
int main()
{
    printf("Enter the number (program calculate the sum of 1 to the number) ");
    int a=0,c=0,b=0;
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        c+=i;
    }
    b=a*(a+1)/2;
    printf("%d %d",b,c);
}