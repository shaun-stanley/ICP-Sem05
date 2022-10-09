#include <stdio.h>

int main()
{
    // Declare variables to store the numbers input by user
    float numOne, numTwo;

    // Declare variables to store the action the user wants to perform
    char action;

    // Ask the user for the numbers
    printf("Enter the two numbers: ");
    scanf("%f %f", &numOne, &numTwo);

    // Ask the user for the action they wish to perform
    printf("Enter the action you want to perform(+ OR - OR * OR / OR ^): ");
    scanf(" %c", &action);

    // Code to find power
    int i = 1;
    float power = numOne;
    while (i < numTwo)
    {
        power = power * numOne;
        i++;
    }

    // Use switch case to perform action on given input
    switch (action)
    {
    case '+':
        printf("%f + %f = %f\n", numOne, numTwo, numOne + numTwo);
        break;

    case '-':
        printf("%f - %f = %f\n", numOne, numTwo, numOne - numTwo);
        break;

    case '*':
        printf("%f * %f = %f\n", numOne, numTwo, numOne * numTwo);
        break;

    case '/':
        printf("%f / %f = %f\n", numOne, numTwo, numOne / numTwo);
        break;

    case '^':
        printf("%f ^ %f = %f\n", numOne, numTwo, power);
        break;

    default:
        printf("Please input an action from the list provided!\n");
        break;
    }
    return 0;
}