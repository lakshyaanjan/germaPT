#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the string whose characters are to be counted: ");
    int c=0;
    char s[50]="";
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        c++;
    }
    printf("Total character are %d",c-1);

}