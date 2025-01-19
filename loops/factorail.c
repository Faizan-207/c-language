#include <stdio.h>
void main()
{
    int fact = 1, number;
    printf("Enter number of factorial:");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    printf("%d ", fact);
}
