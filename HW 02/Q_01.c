#include <stdio.h>

int main()
{
    // Take input from user for number of asterisk
    int rowNum;
    printf("Enter number of rows desired: \n");
    scanf("%d", &rowNum);

    // Make the rhombus
    int a, b, c;
    for (a = 1; a <= rowNum; a++)
    {
        for (b = 1; b <= rowNum - a; b++)
        {
            printf(" ");
        }
        for (c = 1; c <= rowNum; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}