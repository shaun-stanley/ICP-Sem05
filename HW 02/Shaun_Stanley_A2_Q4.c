#include <stdio.h>

int main()
{
    // Take positive input from user
    int a, b = 0, number, factors[100];
    printf("Enter a positive integer:");
    scanf("%d", &number);

    // Print out the factors of number using divisibility trick
    for (a = 1; a <= number; ++a)
    {
        if (number % a == 0)
        {
            // 'b' keeps track of how many factors we have
            b++;
            printf("Factor %d is: %d\n", b, a);
            // printf("%d", b);
        }
    }

    // Check whether it is 0 or 1 as they are not prime
    if (number == 0 || number == 1)
    {
        printf("The entered number is NOT prime");
    }
    // If the number has more than 2 factors it is NOT prime
    else if (b > 2)
    {
        printf("%d is a NOT a prime number as it has %d factors.\n", number, b);
    }
    // If the number has less than 2 factors it is prime
    else if (b <= 2)
    {
        printf("%d is a prime number as it has %d factors only.\n", number, b);
    }

    return 0;
}