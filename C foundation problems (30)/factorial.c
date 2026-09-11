#include <stdio.h>
int main()
{
    printf("Enter the number of which factorial is to be calculated: ");
    int x=0;
    int c=1;
    scanf("%d",&x);
    while(x>0)
    {
        c*=x;
        x--;
    }
    printf("%d",c);
}
