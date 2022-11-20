#include <stdio.h>

int sumOfDigits();
int main()
{
    // Declare variables
    int number, inputNumber;

    // Take input from user and store it in the variable "number"
    printf("Enter the number: ");
    scanf("%d", &number);

    // Make a copy of the number so that we can print it later and show the user
    inputNumber = number;

    int answer = sumOfDigits(number);
    // Print the result
    printf("The sum of the given input digits %d is: %d\n", inputNumber, answer);
}

int sumOfDigits(int functionNumber)
{
    int remainder;
    int sum = 0;
    // Run a while loop that keeps dividing the number by 10 and using the remainder
    // as the next operand which is added to sum
    // This takes place until the number is 0
    while (functionNumber != 0)
    {
        // This is to make sure we take all input digits as positive
        if (functionNumber < 0)
        {
            functionNumber = functionNumber * -1;
        }

        remainder = functionNumber % 10;
        sum = remainder + sum;
        functionNumber = functionNumber / 10;
    }
    return sum;
}