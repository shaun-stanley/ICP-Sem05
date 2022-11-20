#include <stdio.h>
#include <string.h>

int palindromeChecker();

int main()
{
    // Declare string
    char mainString[999];

    // Take input from the user and store it in "string"
    printf("Please Enter a String: ");
    gets(mainString);

    if (palindromeChecker(mainString))
    {
        printf("The entered string is a Palindrome!");
    }
    else
    {
        printf("The entered string is NOT a Palindrome!");
    }

    return 0;
}

int palindromeChecker(char string[])
{
    // Declare variables
    int stringLegnth;
    int checkPalindrome;
    int i;

    // Assign the legnth of the string to the variable "stringLegnth"
    stringLegnth = strlen(string);

    // If the string is not a palindrom return 0
    for (i = 0; i < (stringLegnth / 2); i++)
    {
        if (string[i] != string[stringLegnth - 1 - i])
        {
            return (0);
        }
    }
    // Otherwise return 1
    return (1);
}