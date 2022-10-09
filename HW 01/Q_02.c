#include <stdio.h>

int main()
{
    // Declare variable to store integer input by user
    int number;

    // Take input from user
    printf("Enter integer to check whether divisble by 5: ");
    scanf("%i", &number);

    // Check if the number is divisible by using modulus operator
    // If the remainder is 0 then it means the input is divisible
    // If not then the input is not divisible
    if (number % 5 == 0)
    {
        printf("%i is divisible by 5!\n", number);
    }
    else
    {
        printf("%i is NOT divisible by 5!\n", number);
    }

    return 0;
}