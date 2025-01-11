
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    if (marks >= 91)
        printf("Grade: A\n");
    else if (marks >= 71)
        printf("Grade: B\n");
    else if (marks >= 51)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");
    return 0;
}
