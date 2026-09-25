#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char str[100],sec[100];
    int c=0;
    printf("Enter the first string: ");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter the second string: ");
    fgets(sec,100,stdin);
    sec[strlen(sec)-1]='\0';
    for(int i=0;i<strlen(sec);i++)
    {
        if(str[i]!=sec[i])
        c++;
    }
    (c==0)?printf("Equal"):printf("Not equal");
}