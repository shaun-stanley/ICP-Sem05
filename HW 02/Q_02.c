#include <stdio.h>

int main()
{
    // Take number input from user
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    // Break it down into its digits and store it in an array
    // We are assuming that the user wont input more than 20 digits
    int brokenNumber[20];
    int a, b;

    while (number != 0)
    {
        // We remove the last digit of the number by breaking it
        // We then append it to our array and increment the value of a
        brokenNumber[a] = number % 10;
        a++;

        // We then divide the number by 10 to get the next digit
        number = number / 10;
    }
    // Since we broke the input number from left to right,
    // we need to reverse and print the array to get our results in right to left
    for (b = a - 1; b > 0; b--)
    {
        printf("%i\n", brokenNumber[b]);
    }

    return 0;
}