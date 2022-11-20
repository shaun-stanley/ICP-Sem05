#include <stdio.h>
#include <string.h>

int main()
{
    // Declare string1 and string2
    char string1[999];
    char string2[999];
    char smallString[999];
    char bigString[999];

    // Get user input for the first string and store it in string1
    printf("Enter the first string: ");
    gets(string1);

    // Get user input for the second string and store it in string2
    printf("Enter the second string: ");
    gets(string2);

    // Get the string legnths of both the strings
    int string1Legnth, string2Legnth;
    string1Legnth = strlen(string1);
    string2Legnth = strlen(string2);

    // Compare both the string legnths and store the smaller one as n for the loop
    int n;
    if (string1Legnth < string2Legnth)
    {
        // Based on the strlen comparison assign them to the small / big variable
        n = string1Legnth;
        strcpy(smallString, string1);
        strcpy(bigString, string2);
    }
    else
    {
        // Based on the strlen comparison assign them to the small / big variable
        n = string2Legnth;
        strcpy(smallString, string2);
        strcpy(bigString, string1);
    }

    // Tracker is used to know whether the string is prefix or not
    int tracker;
    for (int i = 0; i < n; i++)
    {
        if (smallString[i] == bigString[i])
        {
            tracker++;
        }
    }

    if (tracker == n)
    {
        printf("Yes, it is a prefix");
    }
    else
    {
        printf("No, it is not a prefix");
    }

    return 0;
}