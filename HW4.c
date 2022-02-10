#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i;
    char again;
    do
    {

        printf("Enter a natural number: ");
        scanf("%d", &number);

        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", number, i, number * i);
        };
        
        printf("Do you want to try a new number (Y/N): ");
        scanf( " %c", &again );
      

    } while (again == 'Y' || again == 'y');

    printf("\nDone");

    return 0;
}