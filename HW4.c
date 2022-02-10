#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i;

    printf("Enter a natural number: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    printf("\nDone");

    return 0;
}