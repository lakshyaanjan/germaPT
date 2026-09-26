#include <stdio.h>
#include <string.h>

int main()
{
    int c = 0; // Initialize c to 0
    char s1[100], s2[100];
    
    fgets(s1, 100, stdin);
    s1[strlen(s1) - 1] = '\0';
    
    fgets(s2, 100, stdin);
    s2[strlen(s2) - 1] = '\0'; // Fixed typo: changed s1 to s2 here
    
    int x = strlen(s1);
    int y = strlen(s2);
    
    // Quick length check
    if (x != y) {
        printf("Not an anagram");
        return 0;
    }
    
    // Your exact nested loop style
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(s1[i] == s2[j])
            {
                c++;         // Count how many characters successfully match
                s2[j] = '*'; // "Mark" the character so it isn't matched again
                break;
            }
        }
    }
    
    // If every single character found a unique match, c will equal the length
    if(c == x)
        printf("Anagram");
    else
        printf("Not an anagram");
}
