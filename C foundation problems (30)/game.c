#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
    int num,n1,n2,n3,n4,n5,n6;
    srand(time(0));
    printf("Enter the number of your fate(1-6). You survive if the dice displays your number at least once.\n");
    scanf("%d", &num);

    n1=(rand()%6)+1;
    n2=(rand()%6)+1;
    n3=(rand()%6)+1;
    n4=(rand()%6)+1;
    n5=(rand()%6)+1;
    n6=(rand()%6)+1;
    printf("\n\n");

    printf("%d\n", n1);
    Sleep(500);
    printf("%d\n", n2);
    Sleep(5000);
    printf("%d\n", n3);
    Sleep(2000);
    printf("%d\n", n4);
    Sleep(1000);
    printf("%d\n", n5);
    Sleep(8000);
    printf("%d\n", n6);
    Sleep(800);
    printf("Waited a bit too long for the last one, right?\n");
    Sleep(1000);
    printf("Does not matter\n");

    if(num==n1||num==n2||num==n3||num==n4||num==n5||num==n6)
    printf("You survived\n");
    else
    printf("He will come for you at 10:23\nGood luck");


}