#include <string.h>
#include <Stdio.h>
int main()
{
    int c=0;
    printf("Enter the string: ");
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int x=strlen(str);
    char newstr[x];
    for(int j=0;j<x;j++)
    {
        newstr[j]=str[x-j-1];
    }
    newstr[x]='\0';
    printf("Reversed string is: %s",newstr);
    for(int i=0;i<x;i++)
    {
        if(str[i]==newstr[i])
        continue;
        else
        {
            c++;
            break;
        }
    }
    (c==0)?printf("\nPalindrome."):printf("\nNot a Palindrome.");
}