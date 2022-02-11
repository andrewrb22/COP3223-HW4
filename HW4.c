#include <stdio.h>
#include <stdlib.h>

// Division process
void division(int n)
{
    if (n < 1)
    {
        printf("%d not a natural number\n", n);
    }
    else
    {

        printf("\ndivisors of %d are:", n);
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                printf("%d ", i);
        }
    }
}
// Multiplication  process
void multiplication(int n)
{
    if (n < 1)
    {
        printf("%d is not a natural number", n);
    }
    else
    {
        int range, i = 1;
        do
        {
            printf("Enter the range: ");
            scanf("%d", &range);
        } while (range <= 0);
        while (i <= range)
        {
            printf("%d * %d = %d \n", i, n, n * i);
            ++i;
        }
    }
}

int main()
{
    char options;
    int n;
    printf("\n\tChoose from the following options: \n\n");
    printf("1) A or a:  To display the divisors of a natural number\n");
    printf("2) B or b: To display the multiplication table for a natural number\n");
    printf("3) Q or q to Exit\n");
    printf("\nEnter your choice: ");
    scanf("%c", &options);
    if (options != 'A' && options != 'a' && options != 'b' && options != 'B')
    {
        printf("%c is not a valid option", options);
    }
    // Selecting an options
    else
    {
        switch (options)
        {
        case 'a':
        case 'A':
            printf("Enter your number:");
            scanf("%d", &n);
            division(n);
            printf("\nThank you for using the program, Bye");
            break;
        case 'b':
        case 'B':
            printf("Enter your number:");
            scanf("%d", &n);
            multiplication(n);
            printf("\nThank you for using the program, Bye");
            break;
        case 'q':
        case 'Q':
            printf("\nThank you for using the program, Bye");
            break;
        }
    }
    return 0;
}