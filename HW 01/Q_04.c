#include <stdio.h>

int main()
{
    // Using ternary operator to find the largest of 3 user inputed numbers.

    // Declare numbers and take input from user
    int numOne, numTwo, numThree;
    printf("Enter Three Numbers, we will find the largest using the Ternary Operator: \n");
    scanf("%i %i %i", &numOne, &numTwo, &numThree);

    // Declare variable to store the largest integer
    int large;

    // Find the largest integer using ternary operator
    large = (numOne > numTwo) ? (numOne > numThree ? numOne : numThree) : (numTwo > numThree ? numTwo : numThree);

    // Print this to the user
    printf("The largest number is %i\n", large);

    // Without using ternary operator we achieve the same results

    // Take input from the users
    printf("Enter Three Numbers, we will find the largest using IF ELSE: \n");
    scanf("%i %i %i", &numOne, &numTwo, &numThree);

    // IF ELSE Logic
    if (numOne > numTwo)
    {
        if (numOne > numThree)
        {
            large = numOne;
        }
        else
        {
            large = numThree;
        }
    }
    else
    {
        if (numTwo > numThree)

        {
            large = numTwo;
        }
        else
        {
            large = numThree;
        }
    }

    // Print this to the user
    printf("The largest number is %i\n", large);
    return 0;
}
