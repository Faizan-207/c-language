#include <stdio.h>
void main()
{
    int table_no, start, end;
    printf("Enter your table no:");
    scanf("%d", &table_no);

    printf("Enter Starting value:");
    scanf("%d", &start);
    printf("Enter Ending value:");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        printf("%d x %d = %d\n", table_no, i, table_no * i);
    }
}
