#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "python";
    int i, n;
    n = strlen(str);
    printf("n = %d\n", n);

    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(str + i) - 'a');
    }

    return 0;
}