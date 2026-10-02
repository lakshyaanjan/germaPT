#include <Stdio.h>
int main()
{
    int u,bill;
    printf("Enter the number of units: ");
    scanf("%d",&u);
    if(u>=0)
    {
    if(u<=100&&u>0)
    bill=2*u;
    else if(u<=200)
    bill=200+(u-100)*3;
    else if(u<=400)
    bill=200+300+(u-200)*5;
    else if(u>400)
    bill=200+300+1000+(u-400)*7;
    if(bill>200)
    bill+=100;
    printf("The total bill is: %d",bill);
    }
    else
    printf("Invalid input.");
}